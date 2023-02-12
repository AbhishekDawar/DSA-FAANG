#include<iostream>
#include<vector>
//#include <unordered_map>
using namespace std;
 
void printVector(vector<int> &num)
{
	for (int i = 0; i < num.size(); i++)
	{
		cout << num[i] <<endl;
	}
}
vector<int> runningSum(vector<int>& nums) {
	vector<int> running;
	int size = nums.size(),sum=0;
	for (int  i = 0; i < size; i++)
	{
		sum += nums[i];
		running.push_back(sum);
	}
	return running;
}

int main()
{
	vector<int> final;
	vector<int> nums = { 1,2,3,4 };
	int size = nums.size(); 
	final=runningSum(nums);
	printVector(final);

}