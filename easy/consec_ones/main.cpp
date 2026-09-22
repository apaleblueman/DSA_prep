#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;
int findMaxConsecutiveOnes(vector<int>& nums) {
        int gc=0,cc=0;
        for(int i=0;i<nums.size();i++){
                if(nums[i]==1){
                        cc++;
			gc=max(cc,gc);
                }else{
			cc=0;
		}
        }
        return gc;
    }
int main(){
	vector<int> nums = {0,0,1};
	cout<<findMaxConsecutiveOnes(nums);
	return 0;
}

