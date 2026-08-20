#include<bits/stdc++.h>
using namespace std;
class dq{
    int front, rear, capacity, size;
    int * arr;
    public:
    dq(int cap){
        capacity = cap;
        front = rear = -1;
        arr = new int [capacity];
        size = 0;
    }
    ~dq(){
        delete []arr;
    }
bool isEmpty(){
        return size==0;
    }
 bool isFull(){
        return size==capacity;
}
void insertFront(int value){
    if(isFull()){
        cout<<"Queue is Full";
    }
    if(isEmpty()){
        front = 0;
        rear = 0;
    }
    else if(front==0){
        front = capacity-1;
    } else {
        front--;
    }
    arr[front] = value;
    size++;
    }
void insertRear(int value){
    if(isFull()){
        cout<<"Queue is Full";
    }
    if(isEmpty()){
        front = 0;
        rear = 0;
    }
    else if(rear==capacity-1){
        rear = 0;
    } else {
        rear++;
    }
    arr[rear] = value;
    size++;
   }
   void deleteFront(){
    if(isEmpty()){
        cout<<"Queue is empty";
    }
    cout<<"Deleted: "<<arr[front]<<endl;;
    if(front==rear){
        front = -1;
        rear = -1;
    }
    else if(front==capacity-1){
        front = 0;
    } else {
        front++;
    }
    size--;
   }

   void deleteRear(){
    if(isEmpty()){
        cout<<"Queue is Empty"<<endl;
    }
    cout<<"Deleted: "<<arr[rear]<<endl;;
    if(front==rear){
        front = -1;
        rear = -1;
    }
    else if(rear==0){
        rear = capacity -1;
    } else {
        rear--;
    }
    size--;
   }

   void display(){
    if(isEmpty()){
        cout<<"Queue is Empty";
    }
    int i = front;
    while(i!=rear){
        cout<<arr[i]<<" ";
        i = (i+1)%capacity;
    }
    cout<<arr[rear];
   }
};
int main(){
    dq q(5);
    q.insertFront(10);
    q.insertRear(20);
    q.insertFront(30);
    q.insertRear(40);
    q.deleteFront();
    q.deleteRear();
    q.display();
return 0;
}