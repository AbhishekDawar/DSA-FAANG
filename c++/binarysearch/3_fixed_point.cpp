#include<iostream>
using namespace std;

int fixedPoint(int arr[],int size){
    int start=0,end=size-1;
    int mid=start+(end-start)/2;
    int ans =-1;
    while(start <= end ){

        if(arr[mid]==mid){
            return mid;
        }
        if(arr[mid] > mid){
            end=mid-1;
        }
        if(arr[mid] < mid){
            start = mid+1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}
int main(){
int arr[]={0,1,2,3,4};
int size = sizeof(arr)/sizeof(int);
int ans = fixedPoint(arr,size);
cout << "Ans :- " << ans;
return 0;
}