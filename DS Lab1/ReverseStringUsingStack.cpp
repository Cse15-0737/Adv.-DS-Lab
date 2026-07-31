#include <bits/stdc++.h>
using namespace std;
class Stack{
    public:
    int size;
    int top;
    char *arr;
    Stack(int n){
        size = n;
        top = -1;
        arr = new char [size];
    }
    Stack(){
        delete[]arr;    // Destructor   
        }
    bool isFull(){
        return(top==size-1);
    }
    bool isEmpty(){
        return(top==-1);
    }
    void push(char value){
        if(isFull()){
            cout<<"Stack Overflow"<<endl;
        } else {
            top++;
            arr[top] = value;
        }
    }
    char pop(){
        if(isEmpty()){
            cout<<"Stack Underflow"<<endl;
            return '\0';
        } else {
            char x = arr[top];
            top--;
            return x;
        }
    }
};

int main (){
    Stack s(5);
    string str;
    cin>>str;
    for(char c : str){
        s.push(c);
    }
    string reversed = "";
    while(!s.isEmpty()){
        reversed += s.pop();
    }
    cout << "Original String: " << str << endl;
    cout << "Reversed String: " << reversed << endl;
    return 0;
}