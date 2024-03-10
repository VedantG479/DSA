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
            this->next=NULL;
        }
    }
};

void print(Node* tail){
    Node* temp = tail->next;
    while(temp!=tail){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<temp->data<<" ";
    cout<<endl;
}

void insertHead(Node* &head, Node* &tail, int data){
    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;
    tail->next = head;
}

void insertEnd(Node* &head, Node* &tail, int data){
    Node* newNode = new Node(data);
    tail->next = newNode;
    newNode->next = head;
    tail = newNode;
}

void insertPosition(Node* &head, Node* &tail, int data, int position){
    if(position==1){
        insertHead(head, tail, data);
        return;
    }
    int count = 1;
    Node* temp = head;
    while(count<position-1){
        temp = temp->next;
        if(temp==tail){
            insertEnd(head, tail, data);
            return;
        }
        count++;
    }
    Node* newNode = new Node(data);
    newNode->next = temp->next;
    temp->next = newNode;
}

void deletePosition(Node* &head, Node* &tail, int position){
    if(position==1){
        Node* toDelete = head;
        head = head->next;
        tail->next = head;
        toDelete->next = NULL;
        delete toDelete;
        return;
    }

    int count = 1;
    Node* prev = NULL;
    Node* toDelete = head;
    while(count<position){
        prev = toDelete;
        toDelete = toDelete->next;
        if(toDelete==tail){
            tail = prev;
        }
        count++;
    }
    prev->next = toDelete->next;
    toDelete->next = NULL;
    delete toDelete;
}

int main(){
    Node* newNode = new Node(10);
    Node* head = newNode;
    Node* tail = newNode;
    tail->next = head;
    print(tail);

    insertHead(head, tail, 0);
    insertHead(head, tail, -10);
    print(tail);

    insertEnd(head, tail, 20);
    insertEnd(head, tail, 30);
    print(tail);

    insertPosition(head, tail, 5, 3);
    insertPosition(head, tail, -20, 1);
    insertPosition(head, tail, 40,8);
    print(tail);

    deletePosition(head, tail, 1);
    deletePosition(head, tail, 7);
    deletePosition(head, tail, 3);
    print(tail);
    return 0;
}