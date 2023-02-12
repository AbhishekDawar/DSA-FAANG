#include<bits/stdc++.h>
#include"clrscr.h"

using namespace std;

int main(){
    cs();
    vector<int> first{1,2,3,4,5,6,7,7,7,7,7,7,8,9};
    vector<int> second{7,8,9,10,11,12,13};
    vector<int> final;
    cout<<"First Arrray : = ";
    for (auto  currentElement : first)
         cout<<currentElement<<" "; 

    cout<<"\nSecond  Arrray : = ";
    for (auto  currentElement : second)
         cout<<currentElement<<" ";

    cout<<endl;
    for(int i=0;i<first.size();i++){
        final.push_back(first[i]);
    }

    for(int i=0;i<second.size();i++){
        final.push_back(second[i]);
    }     
    cout<<" \n Array After Union := ";
    for(int i=0;i<final.size();i++){
        cout << final[i] << "  ";
    }    

// now doind inter section 
cout<<endl<<"Insersection of two arrays  :- ";
   for(int i=0;i<first.size();i++){
    for(int j=0;j<second.size();j++){
        if(first[i]==second[j]){
             second[j]=INT_MIN;
            cout << first[i] << " ";
        }
    }
   }
cout<<endl;
 for (auto  currentElement : first)
        cout<<currentElement<<" "; 

    cout<<"\nSecond  Arrray : = ";
    for (auto  currentElement : second)
         cout<<currentElement<<" ";
    return 0;
}