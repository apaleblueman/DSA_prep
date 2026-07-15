#include<iostream>
#include<vector>

using namespace std;
int main(){
	vector<int> arr = {12,3,1,5,7};
	int max=0;
	for(int i=0;i<arr.size();i++){
		max = arr[i];
			if(arr[i]>max){
				max = arr[i];
			}	
	}
		
	cout<<max;
	
	

}
