#include<iostream>
using namespace std;

bool binarysearch(int arr[][3],int n,int m, int row,int target){
        int  s=0,e=m-1;
        while (s<=e){
            int mid=s+(e-s)/2;

             if(arr[row][mid]==target){
                cout<<row<< "   " <<mid<<endl;
                return true;
             }
             if(arr[row][mid]<target){
                s=mid+1;
             }else{ 
                e=mid-1;
             }
             
        }
        return false;
    }
bool search(int arr[][3],int n,int m,int target){
    int  s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s <= e){
        //check starting element of the row
        if(arr[mid][0]==target){
              cout<<mid<< "   " <<0<<endl;
            return true;
        }

        //checking end element of row
        if(arr[mid][m-1]==target){
              cout<<mid<< "   " <<m-1<<endl;
            return true;
        }

        //check if element is present in between starting and ending element 
        if(target > arr[mid][0] && target<arr[mid][m-1]){
            bool ans = binarysearch(arr,n,m,mid,target);
            return ans;
        }

        //check upper part
        if(target < arr[mid][0]){
            e=mid-1;
        }
        //check lower part
        if(target>arr[mid][m-1]){
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return false;
}
int main(){
    int arr[3][3]={1,5,9,14,20,23,30,34,43};
    int n =3,m=3,target=43;
    cout<<"Result :- " << search(arr,n,m,target);
    return 0;
}