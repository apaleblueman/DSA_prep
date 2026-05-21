#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


void reverse(vector<int>& nums){
	int start=0, end=nums.size()-1;
	while(start<end){
		swap(nums[start], nums[end]);
		start++;
		end--;
	}
}

int main(){
	vector<int> nums = {1,2,3,4,5,6};
	cout<<"original array: ";
	for(int i : nums){cout<<i<<" ";}
	reverse(nums);
	cout<<"reversed array: ";
	for(int i : nums){cout<<i<<" ";}
}
