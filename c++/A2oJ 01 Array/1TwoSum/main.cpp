#include<iostream>
#include<vector>
#include <unordered_map>
using namespace std;
vector<int> solutin(vector<int>& nums, int target)
{
	vector<int> final;
	int first = 0, second = 0;
	for (int i = 0; i < nums.size(); i++)
	{
		first = i;
		for (int j = i+1; j < nums.size(); j++)
		{
			if (nums[j] + nums[first] == target) {
				second =j;
				final.push_back(first);
				final.push_back(second);
				return final;

			}
		}
	}
	return final;
}
vector<int> solution(vector<int>& nums, int target) //optimized
{
	vector<int> final;
	int size = nums.size();
	int diff;
	unordered_map<int, int> map;
	for (int i = 0; i < size; i++)
	{
		diff = target - nums[i];
 
		if (map.find(diff) != map.end())
		{
			if (map.find(diff)->second != i)
			{
				final.push_back(i);
				final.push_back(map.find(diff)->second);
				return final;
			}		
		}
		map[nums[i]] = i;
	}
	return final;
}
int main()
{
	vector<int> nums = { 2,5,5,11 };
	vector<int> final;
	final = solutin(nums, 10);
	for (int i = 0; i < final.size(); i++)
	{
		cout << final[i] ;
	}

}