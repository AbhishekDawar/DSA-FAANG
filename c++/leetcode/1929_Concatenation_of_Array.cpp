#include<iostream>
#include<vector>
using namespace std;
 vector<int> getConcatenation(vector<int>& nums) {
        int size = nums.size();
        int secVector =size*2;
        cout<<size;
        vector<int> arr(secVector);
        for(int i =0;i<size;i++){
            arr[i]=arr[i+size]=nums[i];
        }

          for(int i =0;i<arr.size();i++){
            cout<<arr[i];
        }

  }
int main(){
    int arr[]={1,2,3,4,5};
    vector<int> v={1,2,3,4,5}; 
    cout<<endl<<"Vector result";
    getConcatenation(v);
 
    cout<<endl<<"Array result";
  
    cout<<endl<<"HEllo Abhishek Welcome BAck";
}
