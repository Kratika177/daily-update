#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int size=0;
    cin>>size;
    vector<int> v;
    for(int i=0;i<size;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int er;
    cin>>er;
    int r1,r2;
    cin>>r1>>r2;
    v.erase(v.begin()+(er-1));
    v.erase(v.begin()+(r1-1),v.begin()+(r2-1));
    cout<<v.size()<<endl;
    while(!v.empty()){
        cout<<v.front()<<" ";
        v.erase(v.begin());
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
