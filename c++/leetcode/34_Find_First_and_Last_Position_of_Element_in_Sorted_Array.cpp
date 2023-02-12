#include<iostream>
#include<vector>
using namespace std;
 vector<int> searchRange(vector<int> &arr, int target) {
    int start=0,end=arr.size();
    int mid = start+(end-start)/2;
    vector<int> result;
  
 while (start<=end){
    int midElement = arr[mid];
    if(midElement==target){
        result.push_back(mid);
    }

    if(target <midElement){
        end=mid=1;
    }else{
        start=mid+1;
    }
    mid=start+(end-start)/2;
 }
 return result;
}

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
    int arr[]={1,2,3,4,5};
    vector<int> v={1,2,3,4,5};
    vector<int> v1=searchRange(v,1);
    cout<<endl<<"Vector result";

    for (auto &i : v1)
    {
           cout<< i <<endl;
    }
    
 
    cout<<endl<<"Array result";
 
    cout<<bs(arr,5,1);
    cout<<endl<<"HEllo Abhishek Welcome BAck";
}

