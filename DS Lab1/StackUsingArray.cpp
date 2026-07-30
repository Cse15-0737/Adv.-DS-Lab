#include<bits/stdc++.h>
using namespace std;

class Stack{
public:
    int top;
    int size;
    int*arr;
    Stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
    }
    void push(int value){
        if(top==size-1){
            cout<<"Stack Overflow"<<endl;
            return;
        }
        top++;
        arr[top]=value;
    }
    int pop(){
        if(top==-1){
            cout<<"Stack Underflow"<<endl;
            return -1;
        }
        int value=arr[top];
        top--;
        return value;
    }
    int peak(){
        if(top==-1){
            cout<<"Stack is Empty"<<endl;
            return -1;
        }
        return arr[top];
    }
    bool isEmpty(){
          if(top==-1){
            return true;
          }
          return false;
    }
    bool isFull(){
        if(top==size-1){
            return true;
        }
        return false;
    }
    void display(){
        if(top==-1){
            cout<<"Stack is Empty"<<endl;
            return;
        }
        cout<<"Stack elements: ";
        for(int i=top; i>=0; i--){
            cout<<arr[i];
            if(i>0){
                cout<<" ";
            }
        }
        cout<<endl;
    }
};
int main(){
    Stack s(5);
    s.push(10);
    s.push(20);
    s.push(30);
    s.pop();
    cout<<"Top: "<<s.peak()<<endl;
    cout<<"Is Empty: "<<s.isEmpty()<<endl;
    cout<<"Is Full: "<<s.isFull()<<endl;
    s.display();
    return 0;
}