#include<iostream>
#include<vector>
//#include <unordered_map>
using namespace std;

void printVector(vector<int>& num)
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
int maximumWealth(vector<vector<int>>& accounts) {
	int finalsum = 0;
	for (int i = 0; i < accounts.size(); i++)
	{
		int sum = 0;
		for (int j = 0; j < accounts[i].size(); j++)
		{
			sum += accounts[i][j];
		}
		if (finalsum < sum)
		{
			finalsum = sum;
		}
	}
	return finalsum;
}
int main()
{
	vector<int> final;
	vector<int> nums = { 1,2,3,4 };
	int size = nums.size();
	//final=runningSum(nums);
	//printVector(final);



	vector<vector<int>> accounts = { {1, 2, 3},{3, 15, 1} };
	print_VofV(accounts);

	int summ = maximumWealth(accounts);
    cout<<summ;
}