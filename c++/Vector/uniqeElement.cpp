#include <bits/stdc++.h>
#include "clrscr.h"

using namespace std;
int findUnique(vector<int> arr)
{
    int ans = 0;
    for (int i = 0; i < arr.size(); i++){
        ans ^= arr[i];
    }
    return ans;
}

void printvector(vector<int> arr)
{    
    for (int i = 0; i < arr.size(); i++){
        cout << arr[i];
    }
} 
int main()
{
    cs();
    int size;
    cout << "Enter the size of Array :- ";
    cin >> size;
    vector<int> arr(size);
    cout << "Enter the " << size << " Elements in Array :- ";
     for (int i = 0; i < arr.size(); i++){
        cin >> arr[i];
    }   
    int uniqueElement = findUnique(arr);
    cout << "Unique Element is :- " << uniqueElement << endl;
    return 0;
}