#include<bits/stdc++.h> // Implementation of Priority Queue using Linked List.

using namespace std;
class Node{
    public:
     int priority;
     int data;
     Node *next;
    Node(int value, int p){
        data = value;
        priority = p;
        next = NULL;
    }
    class PriorityQ{
        private:
        Node *front;
        PriorityQ(){
            front = NULL;
        }
        bool isEmpty(){
            return front == NULL;
        }
        
        void enqueue(int value, int p){
            Node *newNode = new Node(value, p);
            if(front == NULL){
                front = newNode;
                return;
            }
            if(p > front -> priority){
                newNode -> next = front;
                front = newNode;
                return;
            }
            Node *temp = front;
            while (temp -> next!= NULL && temp->next->priority >= newNode -> priority)
            {
                temp = temp->next;
            }
            newNode -> next = temp -> next;
            temp -> next = newNode;
            return;
            
        }

        void dQueue(){
            if(isEmpty()){
                cout<<"The Priority Queue is empty ";
                return;
            }
            Node *temp = front;
            front = front->next;
            delete temp;
            cout<<"Deleted the front element of the Priority Queue"<<endl;
        }

    };
};

int main(){
    
 
return 0;
}