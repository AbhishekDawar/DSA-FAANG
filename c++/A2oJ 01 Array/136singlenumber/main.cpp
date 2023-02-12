#include<iostream>
#include<vector>
//#include <unordered_map>
using namespace std;
 
vector<int> duplicate(vector<int>& nums, vector<int>& final) {
	for (int i = 0; i < nums.size(); i++)
	{
		final.push_back(nums[i]);
	}
	return final;
}

vector<int> getConcatenation(vector<int> &nums) {
	vector<int> final;
	duplicate(nums, final);
	duplicate(nums, final);
	return final;
}

vector<int> getConcatenation1(vector<int>& nums) {
 
	int size = nums.size() * 2;
	for (int i = 0; i < size/2; i++)
	{
		nums.push_back(nums[i]);
	}
	return nums;
}


int main()
{
	vector<int> final;
	vector<int> nums = { 1,3,2,1 };
	int size = nums.size();
	final = getConcatenation1(nums);

}