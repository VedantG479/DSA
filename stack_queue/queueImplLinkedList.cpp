
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
class queue{
    public: 
    Node* front;
    Node* rear; 

    queue(){
        front = NULL;
        rear = NULL;
    }

    void enqueue(int data){
        Node* temp = new Node(data);
        if(rear==NULL){
            front = temp;
            rear = temp;
        }
        else{
            rear->next = temp;
            rear = temp;
        }
    }

    void dequeue(){
        if(front==NULL){
            return;
        }
        else{
            Node* toDelete = front;
            front = front->next;
            if(front == NULL)   rear = NULL;
            toDelete->next = NULL;
            delete toDelete;
        }
    }
};
int main(){
    return 0;
}