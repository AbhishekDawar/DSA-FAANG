#include<bits/stdc++.h>
#include"clrscr.h"

using namespace std; 
 int getMaxIndex( int arr[],int start,int end)
 {
     int max = start;
     for(int i=start;i<=end;i++){
         if(arr[max]<arr[i]){
             max=i;
         }
     }
     return max;
 }
void printArray(int arr[],int count){
    for (int i = 0; i < count; i++){
        cout<<arr[i]<<"  ";
    }    
}
void bubbleSort(int arr[],int size){
    bool swaped = false;
    //run each steps n-1 times
    for(int i=0 ; i<size ; i++)
    {
        swaped = false;
        //for each step,max item will come at the
        //last respective 
        for(int j = 1 ; j<size-i;j++){
            if(arr[j]<arr[j-1])
            {
                //swap if the item is smaller then the previous item
                swap(arr[j-1],arr[j]);
                swaped=true;
            }
        
        }
        if(!swaped){break;}
    }

}
void selectionSort(int arr[],int size){

    for(int i=0;i<size;i++){
    //find the max item in the remaining array and swap with correct index
    int last_index = size-i-1;
    int max_index = getMaxIndex(arr,0,last_index);
    swap(arr[max_index],arr[last_index]);
    }

}
//insertion sort
void cyclicSort ( int arr[] , int size){
    int i=0;
    while(i<size){
        int correct_Index = arr[i]-1;
        if(arr[i]!=arr[correct_Index]){
            swap(arr[i],arr[correct_Index]);
        }else{
            i++;
        }
    }
}
int main(){
    cs();
    int arr[]={2,3,10,7,6,4,5,8,1,9};
    int size =10;
    cout<<"Before bubble sort :- " ;
    printArray(arr,size);
    cout<<endl;
    cyclicSort(arr,size); 
    cout<<"After bubble sort :- " ;
    printArray(arr,size);

}