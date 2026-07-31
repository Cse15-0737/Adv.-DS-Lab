#include<bits/stdc++.h>
#include<stack>
using namespace std;
    int precedence(char ch){
        if(ch=='^'){
            return 3;
        }
        else if(ch=='*' || ch=='/'){
            return 2;
        }
        else if(ch=='+' || ch=='-'){
            return 1;
        }
        return 0;
    }
int main(){
    string infix, postfix=" ";
    cin>>infix;
    stack<char> st;
    for(char ch: infix){
        if(isalnum(ch)){
            postfix+=ch;
        }
        else if(ch=='('){
            st.push(ch);
        }
        else if(ch==')'){
            while(!st.empty() && st.top()!='('){
                postfix+=st.top();
                st.pop();
            }
            if(!st.empty()){
                st.pop();
            }
        }
        else{
            while(!st.empty() && precedence(st.top())>=precedence(ch)){
                postfix+=st.top();
                st.pop();
            }
            st.push(ch);

        }
        }
        while(!st.empty()){
            postfix+=st.top();
            st.pop();
        }
        cout<<postfix<<endl;
        return 0;
    }