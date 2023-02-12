#include<bits/stdc++.h>
 
using namespace std; 
 
 double factorial( int n ){
     if (n==0) return 1;
     int partialFact = factorial(n-1);
     return n * partialFact;
}

 int main(){
     int n=0;
     cout<<"Factorial of a number :- ";
     cin>>n;
     cout<<factorial(n);
     return 0;
 }