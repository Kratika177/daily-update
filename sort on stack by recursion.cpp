#include <iostream>
#include <stack>
using namespace std;
void insert(stack<int>&arr,int temp){
	if(arr.empty() || arr.top()>temp){
		arr.push(temp);
		return;
	}
	int tem=arr.top();
	arr.pop();
	insert(arr,temp);
	arr.push(tem);
	
}
void sort(stack<int>&arr){
	if(arr.empty()){
		return;
	}
	else{
		int v=arr.top();
		arr.pop();
		sort(arr);
		insert(arr,v);
	}
}

int main(){
	stack<int> arr;
	arr.push(5);
	arr.push(3);
	arr.push(2);
	arr.push(4);
	arr.push(6);

	cout<<endl;
	sort(arr);
	cout<<"Stack after sort"<<endl;
	while(!arr.empty()){
	    cout<<arr.top()<<" ";
		arr.pop();
	}
}
