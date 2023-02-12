#include<iostream>
#include"clrscr.h"
using namespace std;

int bs(int arr[],int n ,int target){
 int start=0,end=n-1;
 int mid = start+(end-start)/2;

 while (start<=end){
    int midElement = arr[mid];
    if(midElement==target){
        return mid;
    }
    if(target <midElement){
        end=mid=1;
    }else{
        start=mid+1;
    }
    mid=start+(end-start)/2;
 }
 return -1;
}
int main(){
     clrscr();
    int arr[]={1,2,3,4,5};
 
    cout<<"Element found at Index :- " << bs(arr,5,6);
   // cout<<endl<<"HEllo Abhishek Welcome BAck";
}

