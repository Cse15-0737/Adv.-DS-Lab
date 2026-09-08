#include<bits/stdc++.h>
using namespace std;
bool Palindrome(string s, int start, int end){
    if(start>=end){
        return true;
    }
    if(s[start]!=s[end]){
        return false;
    }
    return Palindrome(s,start+1,end-1);
}
int main(){
    string s;
    cin>>s;
    int n=s.length();
    if(Palindrome(s,0,n-1)){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
return 0;
}