#include<bits/stdc++.h>
#include"clrscr.h"

using namespace std; 
 
void printArray(int arr[],int count){

    for (int i = 0; i < count; i++){
        cout<<arr[i]<<"  ";
    }
    
}

int largestElement(int arr[],int count){
    int res=0;
    for(int i=1;i<count;i++){
        if(arr[i] >= arr[res]){
            res=i;
        }
    }
    return res;
}
int main(){
    cs();
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int size =10;
    printArray(arr,size);
    cout<<endl<<"Now finding maximum element index :- "<<largestElement(arr,size) <<"\n  Element value is :- " <<arr[largestElement(arr,size)];

}