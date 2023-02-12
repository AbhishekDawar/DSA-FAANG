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
int mostWordsFound(vector<string>& sentences) {
	int result = 0;
	for (int i = 0; i < sentences.size(); i++)
	{
		cout <<sentences[i].length();
		int countt=0;
		for (int j = 0; j < sentences[i].length(); j++)
		{
		/*	cout << sentences[i][j] << endl;
			if (sentences[i][j] == ' ' )
				count++;*/
 
		}
		result = max(result, countt);
	}

	return result+1;
}
int mostWordsFoundd(vector<string>& sentences) {
	int res = 0;
	for (auto const& s : sentences) {
		int n = count(s.begin(), s.end(), ' ');
		res = max(res, n + 1);
	}
	return res;
}
int main()
{
	vector<int> final;
	vector<int> nums = { 1,2,3,4 };
	int size = nums.size();	 
	vector<string> sentences = { "alice and bob love leetcode", "i think so too", "this is great thanks very much" };
	mostWordsFoundd(sentences);
	print_STRING_Vector(sentences);
	mostWordsFound(sentences);
}