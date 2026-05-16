#include <iostream>
#include <utility>
using namespace std;
int main(){
	pair<int,int> coordinates = {1,2};
	cout<<"coordinate x:"<<coordinates.first<<endl;
	cout<<"coordinate y:"<<coordinates.second<<endl;
	pair<int, pair<int,int>> nested_pairs= {1, {2,3}};
	cout<<"nested structure:"<<"{"<<nested_pairs.first<<"}"<<"---";
	cout<<"{"<<nested_pairs.second.first<<nested_pairs.second.second<<"}"<<endl;
	
	pair<int,int> coords_arr[] = {{1,2},{3,4},{5,6}};
	for(int i=0;i<3;i++){
		cout<<coords_arr[i].first<<","<<coords_arr[i].second<<endl;
	}
	
	return 0;
}

