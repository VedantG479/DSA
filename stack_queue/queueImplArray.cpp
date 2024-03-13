#include<iostream>
using namespace std;
class queue{
    public: 
    int size;
    int front; 
    int rear; 
    int *arr;

    queue(int size){
        this->size = size;
        arr = new int[size];
        this->front = 0;
        this->rear = 0;
    }

    void enqueue(int data){
        if(rear ==  size){
            cout<<"Overflow";
        }
        else{
            arr[rear] = data;
            rear++;
        }
    }

    void dequeue(){
        if(front==rear){
            cout<<"Underflow";
        }
        else{
            cout<<arr[front];
            front++;
            if(front==rear){
                front = 0;
                rear = 0;
            }
        }
    }

    bool isEmpty(){
        if(front==rear) return true;
        return false;
    }

    int qfront(){
        if(front==rear) return -1;
        return arr[front];
    }
};
int main(){
    queue q (5);

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    cout<<q.qfront();
    cout<<q.isEmpty();

    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    cout<<q.isEmpty();

    return 0;
}