#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int data){
        this -> data = data;
        this -> next = NULL;
        this -> prev = NULL;
    }

    ~Node(){
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
    }
};

void print(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void insertHead(Node* &head, int data){
    Node* newNode = new Node(data);
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void insertEnd(Node* &head, int data){
    Node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    Node* newNode = new Node(data);
    newNode->prev = temp;
    temp->next = newNode;
}

void insertPosition(Node* &head, int position, int data){
    if(position==1){
        insertHead(head, data);
        return;
    }

    int count = 1;
    Node* temp = head;
    while(count < position - 1){
        temp = temp->next;
        if(temp->next==NULL){
            insertEnd(head, data);
            return;
        }
        count++;
    }

    Node* newNode = new Node(data);
    newNode -> next = temp->next;
    newNode -> prev = temp;
    temp->next->prev = newNode;
    temp->next = newNode;
}

void deletePosition(Node* &head, int position){
    if(position==1){
        Node* toDelete = head;
        head = head->next;
        head->prev = NULL;
        toDelete->next = NULL;
        delete toDelete;
        return;
    }
    int count = 1;
    Node* toDelete = head;
    Node* prev = NULL;
    while(count < position){
        prev = toDelete;
        toDelete = toDelete->next;
        count++;
    }
    prev->next = toDelete->next;\
    toDelete->next = NULL;
    toDelete->prev = NULL;
    delete toDelete;
}

int getLength(Node* head){
    Node* temp = head;
    int count = 0;
    while(temp!=NULL){
        temp = temp->next;
        count++;
    }
    return count;
}

int main(){
    Node* newNode = new Node(10);
    Node* head = newNode;
    print(head);

    insertHead(head, 0);
    print(head);

    insertEnd(head,20);
    print(head);

    insertPosition(head,1,-10);
    insertPosition(head,5,30);
    insertPosition(head,3,5);
    print(head);

    deletePosition(head,3);
    deletePosition(head,1);
    deletePosition(head,4);
    print(head);

    cout<<getLength(head);
    return 0;
}