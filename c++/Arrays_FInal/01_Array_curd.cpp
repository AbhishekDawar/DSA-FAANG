#include<iostream>

using namespace std;

void print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int insert(int arr[],int size,int element,int cap,int position){
    if(size==cap){
        return size;
    }
    int index = position-1;//where we have to insert element
    for (int i = size-1; i >=index; i--){
        arr[i+1]=arr[i];        
    }             
    arr[index]=element;
    return (cap+1);
}

 int Delete(int arr[],int size,int element){
     int i;
     for(i=0; i <size;i++){
        if(arr[i]==element)
            break;        
     }
     if(i==size){return size;}
     for(int j=i;j<size-1;j++){
         arr[j]=arr[j+1];
     }
     return (size-1);
 }

int main(){

    int arr[5]={5,10,20}; 
    int cap=3;  
    print(arr,5);
    cap=insert(arr,5,200,3,4);
    cout<<endl<<"Came from insert :- "<<cap<<endl;
        cout<<endl;
    print(arr,5);
    cout<<endl;
    cap= Delete(arr,cap,10);
    cout<<endl<<"Came from Delete :- "<<cap<<endl;
    cout<<endl;
    print(arr,5);


 
 
}