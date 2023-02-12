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
int latgest(vector<int> &nums)
{
	int lar = 0;
	for (int i = 0; i < nums.size(); i++)
	{
		lar = max(lar, nums[i]);
	}
	return lar;
}
vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
	vector<bool> final;
	int largest = latgest(candies);
	for (int i = 0; i < candies.size(); i++)
	{
		if (candies[i] + extraCandies >= largest) {
			final.push_back(true);
		}
		else
		{
			final.push_back(false);
		}
	}


	return final;

}

int main()
{
	vector<bool> final;
	vector<int> nums = {2,3,5,1,3};
	int size = nums.size();	 
	//vector<string> operations = { "--X","X++","X++" };
	final = kidsWithCandies(nums, 3);	 
 
}