#include<iostream>
#include<vector>
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
int finalValueAfterOperations(vector<string>& operations) {
	int final = 0;
	for (int i = 0; i < operations.size(); i++)
	{
		if (operations[i] == "X++" || operations[i] == "++X")
			final++;
		if (operations[i] == "X--" || operations[i] == "--X")
			final--;
	}
	return  final;
}
int main()
{
	vector<int> final;
	vector<int> nums = { 1,2,3,4 };
	int size = nums.size();	 
	vector<string> operations = { "--X","X++","X++" };
	print_STRING_Vector(operations);
	int i= finalValueAfterOperations(operations);
 cout<<"final value :- "<<i;
}