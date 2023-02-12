#include<iostream>
using namespace std;
#include"clrscr.h"

//this function will return first index value of target 
int firstOccurrence(int arr[],int n,int target){
     int start = 0, end=n-1;
     int mid = start+(end-start)/2, ans=-1;

     while(start <= end){
        int midElement=arr[mid];

        if(midElement == target){
            ans = mid;
            end = mid-1;
        }

        if(target < midElement){
            end = mid-1;
        }

        if(target > midElement){ 
            start = mid+1;
        }

         mid = start + (end-start)/2;
     }
     return ans;
    }

int lastOccurrence(int arr[],int n,int target){
     int start = 0;
     int end=n-1;
     int mid = start+(end-start)/2;
     int ans=-1;
     while(start<=end){
        int midElement=arr[mid];
        if(midElement==target){
            ans=mid;
            start = mid + 1;
        }
       if(target < midElement){
            end=mid-1;
        }
         if(target > midElement){ 
            start=mid+1;
        }
         mid = start+(end-start)/2;
     }
     return ans;
    }
int main(){
clrscr();
int arr[]={-1,-2,-85,5,7,7,7,7,7,8,8,10};//{2,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,6,8,9,11,23};
int arrrayLength = sizeof(arr)/sizeof(int),target =7;
int fO = firstOccurrence(arr,arrrayLength,target) ;
int lo =lastOccurrence(arr,arrrayLength,target);
cout<<"First occurence :- "<<fO<<endl;
cout<<"Last occurence :- "<<lo <<endl;
cout<<"Total  occurence :- "<<((lo-fO)+1) <<endl;
    
}