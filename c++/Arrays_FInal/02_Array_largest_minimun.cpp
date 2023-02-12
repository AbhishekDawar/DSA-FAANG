#include<bits/stdc++.h>
#include"clrscr.h"

using namespace std; 
 
void printArray(int arr[],int count){

    for (int i = 0; i < count; i++){
        cout<<arr[i]<<"  ";
    }
    
}

int largestElementIndex(int arr[],int count){
    int res=0;
    for(int i=1;i<count;i++){
        if(arr[i] >= arr[res]){
            res=i;
        }
    }
    return res;
}
void swapAlternates(int arr[],int size){
    for(int i=0;i<size;i+=2){
        if(arr[i+1]<size)
            swap(arr[i],arr[i+1]);
    }     
}
int main(){
    cs();
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int size =10;
    cout<<"Values in array :- ";
    printArray(arr,size);
    cout<<endl<<"Now finding "<<endl<<"Mmaximum element index :- "<<largestElementIndex(arr,size) <<"\nElement value is :- " <<arr[largestElementIndex(arr,size)];
    swapAlternates(arr,size);
    cout<<endl<<"Array after swaping Alternates :- ";
    printArray(arr,size);
 

    return 0;
}