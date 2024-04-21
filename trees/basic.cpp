#include<iostream>
#include<stack>
#include<queue>
using namespace std;
class node{
    public:
        int data;
        node *left, *right;

    node(int data){
        this->data = data;
        left = right = NULL;
    }
};
void preOrder(node* root){
    if(root == NULL)    return;

    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}
vector<int> preOrderIterative(node* root){
    vector<int> preOrder;
    if(!root)   return preOrder;

    stack<node*> st;
    st.push(root);

    while(!st.empty()){
        root = st.top();
        st.pop();

        preOrder.push_back(root->data);
        if(root->right) st.push(root->right);
        if(root->left)  st.push(root->left);
    }

    return preOrder;
}
void inOrder(node* root){
    if(root == NULL)    return;

    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}
vector<int> inOrderIterative(node* root){
    vector<int> inOrder;
    if(root==NULL)  return inOrder;

    stack<node*> st;

    while(true){
        if(root!=NULL){
            st.push(root);
            root = root->left;
        }
        else{
            if(st.empty())  break;
            root = st.top();
            st.pop();

            inOrder.push_back(root->data);
            root = root->right;
        }
    }

    return inOrder;
}
void postOrder(node* root){
    if(root == NULL)    return;

    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}
vector<int> postOrderIterative(node* root){
    vector<int> postOrder;
    if(root==NULL)  return postOrder;

    stack<node*> s1, s2;
    s1.push(root);

    while(!s1.empty()){
        root = s1.top();
        s1.pop();

        s2.push(root);
        if(root->left)  s1.push(root->left);
        if(root->right) s1.push(root->right);
    }

    while(!s2.empty()){
        postOrder.push_back(s2.top()->data);
        s2.pop();
    }

    return postOrder;
}
node* buildTree(node* root){
    cout<<"enter data:";
    int data;
    cin>>data;

    if(data == -1)  return NULL;
    root = new node(data);

    cout<<"enter left data of:"<<data;
    root->left = buildTree(root->left);
    cout<<"enter right data of:"<<data;
    root->right = buildTree(root->right);

    return root;
}
void buildTreeBFS(node* &root){
    queue<node*> q;
    cout<<"enter data:";
    int data;
    cin>>data;

    root = new node(data);
    q.push(root);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        cout<<"enter left data for:"<<temp->data;
        int leftData;
        cin>>leftData;

        if(leftData!=-1){
            temp->left = new node(leftData);
            q.push(temp->left);
        }

        cout<<"enter right data for:"<<temp->data;
        int rightData;
        cin>>rightData;

        if(rightData!=-1){
            temp->right = new node(rightData);
            q.push(temp->right);
        }
    }
}

int main(){
    node* root = NULL;
    //root = buildTree(root);
    buildTreeBFS(root);
    
    inOrder(root);
    cout<<endl;
    vector<int> in = inOrderIterative(root);
    for(int i=0; i<in.size(); i++)  cout<<in[i]; 
    cout<<endl;

    preOrder(root);
    cout<<endl;
    vector<int> pre = preOrderIterative(root);
    for(int i=0; i<pre.size(); i++)  cout<<pre[i]; 
    cout<<endl;

    postOrder(root);
    cout<<endl;
    vector<int> post = postOrderIterative(root);
    for(int i=0; i<post.size(); i++)  cout<<post[i]; 
    cout<<endl;

    return 0;
}