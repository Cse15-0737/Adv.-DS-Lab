#include<bits/stdc++.h>

using namespace std;
class Queue{
    public:
    int front;
    int rear;
    int size;
    int *arr;
    Queue(int size){
        this->size=size;
        front=rear=-1;
        arr= new int [size];
    }
    void enqueue(int val){
        if((rear+1)%size==front){
            cout<<"Queue Overflow"<<endl;
        } else {
            rear=(rear+1)%size;
            arr[rear]=val;
        }
    }
    int dequeue(){
        if(front == rear == -1){
            cout<<"Queue is Empty "<<endl;
            return -1;
        } else {
            front=(front+1)%size;
            int x=arr[front];
            return x;
        }
    }
    void display(){
        if(front==rear){
            cout<<"Queue is Empty "<<endl;
        } else {
            int i=(front+1)%size;
            while(i!=(rear+1)%size){
                cout<<arr[i]<<" ";
                i=(i+1)%size;
            }
            cout<<endl;
        }
    }
};
int main(){
    Queue q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    cout<<"Dequeued element: "<<q.dequeue()<<endl;
    cout<<"Queue elements: ";
    q.display();
return 0;
}