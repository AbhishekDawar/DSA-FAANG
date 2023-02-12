#include<bits/stdc++.h>
#include"clrscr.h"

using namespace std; 
 
void printArray(int arr[],int count){

    for (int i = 0; i < count; i++){
        cout<<arr[i]<<"  ";
    }
    
}
 

int main(){
    cs();
    cout<<"Hello vector !!"<<endl;
    vector<int> arr;
   
    //insert
    arr.push_back(5);
    arr.push_back(10);
    arr.push_back(15);

    //print
    cout<<"Elemets in vector A:- ";
    for(int i =0;i<arr.size();i++){
        cout<<arr[i] << " ";
    }   
   cout<<endl;



   cout<<"Enter Size of vector B :- ";
   int SizeBrr ;
   cin>>SizeBrr;
   vector<int> brr(SizeBrr,-1);
   cout<<endl<<"size of b array : " <<brr.size() << endl;
   cout<<"capacity of b array : " <<brr.capacity() << endl; 
    
    cout<<"Elemets in vector B:- ";
    for(int i =0;i<brr.size();i++){
        cout<<brr[i] << " ";
    }   
    cout<<endl;
    
    vector<int> crr{10,20,30,40,50,60};
    cout<<"Elemets in vector C:- ";
    for(int i =0;i<crr.size();i++){
        cout<<crr[i] << " ";
    }   
    cout<<endl;

    //empty function 
    cout<<"Is vecotr C Empty??? :- "<<bool(crr.empty());
    return 0;
}