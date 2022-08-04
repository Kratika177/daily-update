#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int size;
    cin>>size;
    vector<int>v;
    for(int i=0;i<size;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    while(!v.empty()){
        cout<<v.front()<<" ";
        v.erase(v.begin());
    }
    return 0;
}
