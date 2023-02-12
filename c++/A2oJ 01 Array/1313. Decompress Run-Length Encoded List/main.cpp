#include<bits/stdc++.h>
//#include<iostream>
//#include<vector>
//#include <unordered_map>

using namespace std;


void print_INT_Vector(vector<int>& num)
{
	for (int i = 0; i < num.size(); i++)
	{
		cout << num[i] << endl;
	}
}
void print_STRING_Vector(vector<string>& num)
{
	for (int i = 0; i < num.size(); i++)
	{
		cout << num[i] << endl;
	}
}
void print_VofV(vector<vector<int>>& num)
{
	for (int i = 0; i < num.size(); i++)
	{
		for (int j = 0; j < num[i].size(); j++)
		{
			cout << num[i][j];
		}
		cout << endl;
	}
}
void Array_Print(int arr[],int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << endl;
	}
}
void delete_in_Array(int a[],int length,int key)
{
	int i = 0;
	for (; i < length; i++)
	{
		if (a[i] == key)
		break;
	}
	if(i==length)
	{
		cout << "Element is not avilable in Array";
		return;
	}
	for (int j =i; j < length-1; j++)
	{
		a[j] = a[j + 1];
	}
}
void move_0_2_End(int a[],int length){

	for (int i = 0; i < length; i++)
	{
 
	}
}
vector<int> decompressRLElist(vector<int>& nums) {

	vector<int> final;

	for (int i = 0; i < nums.size(); i=i+2)
	{
		for (int j = 0; j < nums[i]; j++)
		{
			final.push_back(nums[i + 1]);
		}
	}
	return final;
}
vector<int> decompressRLElist_Optimized(vector<int>& nums) {
	vector<int> v;
	for (int i = 0; i < nums.size(); i += 2) {
		v.insert(v.end(), nums[i], nums[i + 1]);
	}
	return v;
}

int main()
{
	if (__cplusplus == 201703L) std::cout << "C++17\n";
	else if (__cplusplus == 201402L) std::cout << "C++14\n";
	else if (__cplusplus == 201103L) std::cout << "C++11\n";
	else if (__cplusplus == 199711L) std::cout << "C++98\n";
	else std::cout << "pre-standard C++\n";

	vector<int> final;
	vector<int> nums = {1,2,3,4 };
	int size = nums.size();
	final = decompressRLElist(nums);
	print_INT_Vector(final);

	
	//int arr[] = { 5,1,0,7,0,9,11,0};
	//move_0_2_End(arr, 8);
	//vector<string> operations = { "--X","X++","X++" };
	//final = smallerNumbersThanCurrent(nums);
	//Array_Print(arr, 8);
	//delete_in_Array(arr, 8, 8);
	//Array_Print(arr, 8);


}