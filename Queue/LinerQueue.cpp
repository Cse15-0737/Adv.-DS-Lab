#include<bits/stdc++.h>
using namespace std;
class Queue{
    public:
    int size;
    int front, rear;
    int *arr;
    Queue(int n){
        size = n;
        rear = front = -1;
        arr = new int [size];
    }
    ~Queue(){
        delete[]arr;    // Destructor    
        }
    bool isFull(){
        return(rear==size-1);
    }
    bool isEmpty(){
        return(rear==front);
    }
    void enqueue(int val){
        if(isFull()){
            cout<<"Queue Overflow"<<endl;
        } else {
            rear++;
            arr[rear] = val;
        }
    }
    int dequeque(){
        if(isEmpty()){
            cout<<"Queue Underflow"<<endl;
            return -1;
        } else {
            front++;
            int x = arr[front];
            return x;
        }
    }
    void display(){
        for(int i=front+1; i<=rear; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    Queue q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    cout<<"Dequeued element: "<<q.dequeque()<<endl;
    cout<<"Queue elements: ";
    q.display();
    return 0;
}