#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }

    ~Node(){
        if(this->next!=NULL){
            delete next;
            this->next = NULL;
        }
    }
};

void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void insertAtHead(Node* &head, int data){
    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}

void insertAtEnd(Node* &head, int data){
    Node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    Node* newNode = new Node(data);
    temp->next = newNode;
}

void insertAtMiddle(Node* &head, int position, int data){
    if(position==1){
        insertAtHead(head, data);
        return;
    }
    int count = 1;
    Node* temp = head;
    while(count < position - 1){
        temp = temp->next;
        count++;
    }
    Node* newNode = new Node(data);
    newNode->next = temp->next;
    temp->next = newNode;
}

void deleteNode(Node* &head, int position){
    if(position==1){
        Node* toDelete = head;
        head = head->next;
        toDelete->next = NULL;
        delete toDelete;
    }
    else{
        int count = 1;
        Node* toDelete = head;
        Node* prev = NULL;
        while(count < position){
            prev = toDelete;
            toDelete = toDelete->next;
            count++;
        }

        prev->next = toDelete->next;
        toDelete->next = NULL;
        delete toDelete;
    }
}

int getLength(Node* head){
    int count = 0;
    Node* temp = head;
    while(temp!=NULL){
        temp = temp->next;
        count++;
    }
    return count;
}

Node* oddEvenList(Node* head)
{
	Node* newHead = new Node(-1);
    Node* temp1 = newHead;
    Node* temp2 = newHead;

    Node* temp = head;
    int count = 1;
    while(temp!=NULL){
        Node* newNode = new Node(temp->data);
        if(count%2!=0){
            newNode->next = temp1->next;
            temp1->next = newNode;
            if(temp1 == temp2){
                temp2 = temp2->next;
            }
            temp1 = temp1->next;
        }
        else{
            temp2->next = newNode;
            temp2 = temp2->next;
        }
        temp = temp->next;
        count++;
    }

    return newHead->next;
}

int main(){
    Node* newNode = new Node(10);
    Node* head = newNode;

    print(head);

    insertAtHead(head, 0);
    print(head);

    insertAtEnd(head, 30);
    print(head);

    insertAtMiddle(head, 3, 20);
    print(head);

    insertAtMiddle(head, 1, -10);
    print(head);

    insertAtMiddle(head, 6, 40);
    print(head);

    deleteNode(head,1);
    print(head);

    deleteNode(head,5);
    print(head);

    cout<<getLength(head);
    cout<<endl;
    
    Node* toPrint = oddEvenList(head);
    print(toPrint);
    return 0;
}