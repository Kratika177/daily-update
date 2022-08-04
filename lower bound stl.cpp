#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int size;
    cin>>size;
    vector<int>v;
    for(int i=0;i<size;i++){
        int x;
        cin>>x;
        v.push_back(x); 
    }
    sort(v.begin(),v.end());
    int Q;
    cin>>Q; 
    for(int i=0;i<Q;i++){
        int qu;
        cin>>qu;
        vector<int>::iterator it=lower_bound(v.begin(),v.end(),qu);
        if(v[it-v.begin()]==qu){
            cout<<"Yes "<<it-v.begin()+1<<endl;
        }
        else{
            cout <<"No " <<it-v.begin()+1<< endl;    
        }
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
