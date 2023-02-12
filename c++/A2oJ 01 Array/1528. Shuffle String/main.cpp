#include<bits/stdc++.h>
//#include<iostream>
//#include<vector>
//#include <unordered_map>

using namespace std;

string restoreString(string &s, vector<int>& indices) {
	string final=s; 
	int length = indices.size();
	for (int i = 0; i < length; i++)
		final[indices[i]] = s[i];	
	return final;
}

int main()
{
	 
	vector<int> final;
	vector<int> nums = { 4, 5, 6, 7, 0, 2, 1, 3 };
	int size = nums.size();
	string s = "codeleet";
	string final_S = restoreString(s, nums);


}