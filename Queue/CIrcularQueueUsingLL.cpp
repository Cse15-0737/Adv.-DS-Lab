#include<bits/stdc++.h>

using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int value){
        data=value;
        next=NULL;
    }
};
class Queue{
    public:
    Node *rear;
    Node *front;
    Queue(){
        rear=front=NULL;
    }
    void enqueue(int val){
        Node *temp=new Node(val);
        if(rear==NULL){
            front=rear=temp;
            return;
        }
        rear->next=temp;
        rear=temp;
    }
    int dequeue(){
        if(front==NULL){
            cout<<"Queue is Empty "<<endl;
            return -1;
        }
        Node *temp=front;
        front=front->next;
        if(front==NULL){
            rear=NULL;
        }
        int x=temp->data;
        delete temp;
        return x;
    }
    void display(){
        if(front==NULL){
            cout<<"Queue is Empty "<<endl;
            return;
        }
        Node *temp=front;
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
    cout<<q.dequeue()<<endl;
    q.display();
    return 0;
}