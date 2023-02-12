#include<bits/stdc++.h>
#include"clrscr.h"

using namespace std; 
 
void printArray(int arr[],int count){

    for (int i = 0; i < count; i++){
        cout<<arr[i]<<"  ";
    }
    
}

void maxdifference(int arr[],int size){
    int mi=arr[0],ma=arr[0];
    for(int i=1;i<size;i++){
        mi=min(mi,arr[i]);
        ma=max(ma,arr[i]);
    }
    cout<<"Minimum :- "<< mi <<"Maximum :- "<<ma;   
}
int main(){
    cs();
    int arr[]={2,3,10,6,4,8,1};
    int size =7;
    printArray(arr,size);
    maxdifference(arr,size); 

}