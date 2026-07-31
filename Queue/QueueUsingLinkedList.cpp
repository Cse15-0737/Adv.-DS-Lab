#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int value){
        this->data=value;
        this->next=NULL;
    }
};
class Queue{
    public:
    Node* front;
    Node* rear;
    Queue(){
        front=NULL;
        rear=NULL;
    }
    bool isEmpty(){
        return front==NULL;
    }
    void enqueue(int value){
        Node* newNode=new Node(value);
        if(isEmpty()){
            front=rear=newNode;
        } else {
            rear->next=newNode;
            rear=newNode;
        }
    }
    int dequeue(){
        if(isEmpty()){
            cout<<"Queue Underflow"<<endl;
            return -1;
        } else {
            Node* temp=front;
            int value=temp->data;
            front=front->next;
            delete temp;
            return value;
        }
    }
    void display(){
        Node* temp=front;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};
int main(){
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    cout<<"Dequeued element: "<<q.dequeue()<<endl;
    cout<<"Queue elements: "<<endl;
    q.display();
    return 0;
}