#include<iostream>
using namespace std;
class stack{
    public: 
    int top; 
    int size; 
    int *arr;

    stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element){
        if(size - top > 1){
            top++;
            arr[top] = element;
        }
        else{
            cout<<"OverFlow";
        }
    }

    void pop(){
        if(top==-1){
            cout<<"underflow";
        }
        else{
            top--;
        }
    }

    int peek(){
        if(top==-1){
            cout<<"Empty";
            return -1;
        }
        else{
            return arr[top];
        }
    }

    bool isEmpty(){
        if(top==-1){
            return true;
        }
        return false;
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