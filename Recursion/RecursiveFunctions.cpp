#include<bits/stdc++.h>

using namespace std;

int fact(int n){  // Factorial Function
    if(n<=1){
        return 1;
    }
    return fact(n-1) *n;
}

int sum(int n){   // Sum of two digits
    if(n==0){
        return 0;
    }
    return sum(n/10) + (n%10);
}


int fibo(int n){  // Fibonacci Function
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return fibo(n-1) + fibo(n-2);
}

int Reverse(int n, int rev=0){  // Reverse Of a number
    if(n==0){
        return rev;
    }
    return Reverse(n/10, rev*10 + n%10);
}


int main(){
    cout<<Reverse(135)<<endl;
    cout<<fact(5)<<endl;
    cout<<sum(58)<<endl;
    cout<<fibo(3)<<endl;

return 0;
}