#include<set>
int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.
    set<int> s;
    for(int i=0;i<n;i++){
        s.insert(arr[i]);
    }    
    return s.size();
}
