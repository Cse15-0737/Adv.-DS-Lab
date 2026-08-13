#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;

    Node(int data){
        val = data;
        next = nullptr;
    }
};
class stack{
Node * front,*rear;
stack(){
    rear = nullptr;
}
void enqueue(int x){
    if(rear == nullptr){
     Node* temp = new Node(x);
     front=rear = temp;   
    }
    Node* temp2=rear;
    Node* temp = new Node(x);
    while(temp2->next!=nullptr){
        temp2= temp2->next;
    }
    temp2->next=temp;    
}
void deque(){
Node* temp = front;
front= front->next;
cout<<temp->val<<" popped"<<endl;
delete temp;
}
};

int main(){

}