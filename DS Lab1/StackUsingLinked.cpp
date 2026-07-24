#include<bits/stdc++.h>
using namespace std;
    class Node{
        public:
        int data;
        Node* next;
        Node(int value){
            data=value;
            next=NULL;
        }
    };
    class Stack{
        public:
          Node *top;
    Stack()
    {
      top = NULL;
    }
    void push(int x)
    {
        Node *temp = new Node(x);
        temp->next = top;
        top = temp;
    }
    void pop()
    {
        if (top == NULL)
        {
            cout << "Stack Underflow" << endl;
        }
        else
        {
            Node *temp = top;
            top = top->next;
            delete temp;
        }
    }

    void peek()
    {
        if (top == NULL)
        {
            cout << "Stack is Empty" << endl;
        }
        else
        {
            cout << "Top element = " << top->data << endl;
        }
    }
    void display(){
        if (top == NULL)
        {
            cout << "Stack is Empty" << endl;
            return;
        }
        Node *temp = top;
        cout << "Stack elements: ";
        while (temp != NULL)
        {
            cout << temp->data;
            if (temp->next != NULL)
            {
                cout << " ";
            }
            temp=temp->next;
        }
        cout << endl;
    }
};
int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.pop();
    s.peek();
    s.display();
    return 0;
}