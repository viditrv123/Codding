#include<bits/stdc++.h>
using namespace std;

bool isprime(int n){

    if(n<=1)return false;
    if(n<=3)return true;
    if(n%2==0 || n%3==0)return false;

    for (int i = 5; i*i <= n; i+=6)
    {
        if(n%i==0 || n%(i+2)==0)return false;
    }
    
    return true;
}

int main(){
    int n=50;
    if(isprime(n))
        cout<<"number is prime\n";
    else
    {
        cout<<"number is not prime\n";
    }
    
}