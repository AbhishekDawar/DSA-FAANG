#include<bits/stdc++.h>
#include"clrscr.h"

using namespace std; 
  
void printArray(int arr[],int count){
    for (int i = 0; i < count; i++){
        cout<<arr[i]<<"  ";
    }    
}
   bool containsDuplicate(int arr[],int size) {
       int count =0;
        for(int i =0 ;i<size;i++)
        {
          count =0;
            for (int j=0;j<size;j++)
            {
                if(arr[i]==arr[j]){
                  count++;
                  if(count >=2)
                  {
                      return true;
                  }
                   
                }
            }
        }
       return false; 
    }
int main(){
    cs();
    int arr[]={2,3,10,7,6,4,5,8,10,9};
    int size =10;
 
    printArray(arr,size);
    cout<<endl;
    cout<<"Contain Duplicates :- " << containsDuplicate(arr,size);
 

}