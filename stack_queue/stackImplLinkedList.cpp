#include<iostream>
using namespace std;
class Node{
    public:
    int data; 
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }

    ~Node(){
        if(this->next!=NULL){
            delete next;
            this->next = NULL;
        }
    }
};
class stack{
    public:
    Node* head;
    int capacity; 
    int currentSize;

    stack(int size){
        this->capacity = size;
        this->currentSize = 0;
        head = NULL;
    }

    void push(int element){
        if(this->capacity == this->currentSize){
            cout<<"OverFlow";
        }
        else{
            Node* newNode = new Node(element);
            newNode->next = this->head;
            this->head = newNode;
            this->currentSize++;
        }
    }

    void pop(){
        if(this->head==NULL){
            cout<<"UnderFlow";
        }
        else{
            Node* toDelete = this->head;
            this->head = toDelete->next;
            toDelete->next = NULL;
            delete toDelete;
            this->currentSize--;
        }
    }

    bool isEmpty(){
        return this->head==NULL;
    }

    int size(){
        return this->currentSize;
    }

    int peek(){
        if(this->head==NULL)    return -1;
        return this->head->data;
    }
};
int main(){
    stack st(5);
    cout<<st.isEmpty();
    st.push(1);
    st.push(2);
    st.push(1);
    st.push(2);
    st.push(1);
    cout<<st.isEmpty();
    st.pop();

    cout<<st.peek();
    return 0;
}