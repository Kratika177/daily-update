#include <iostream>
#include <vector>
using namespace std;
void insert(vector<int>&arr,int temp){
	if(arr.size()==0 || arr[arr.size()-1]<temp){
		arr.push_back(temp);
		return;
	}
	int tem=arr[arr.size()-1];
	arr.pop_back();
	insert(arr,temp);
	arr.push_back(tem);
	
}
void sort(vector<int>&arr){
	if(arr.size()==0){
		return;
	}
	else{
		int v=arr[arr.size()-1];
		arr.pop_back();
		sort(arr);
		insert(arr,v);
	}
}

int main(){
	vector<int> arr;
	arr.push_back(5);
	arr.push_back(3);
	arr.push_back(2);
	arr.push_back(4);
	arr.push_back(6);
	cout<<"Array before sort"<<endl;
	for(int i=0;i<arr.size();i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	sort(arr);
	cout<<"Array after sort"<<endl;
	for(int i=0;i<arr.size();i++){
		cout<<arr[i]<<" ";
	}
}
