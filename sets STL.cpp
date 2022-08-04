#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    int Q;
    cin>>Q;
    set<int> v;
    for(int i=0;i<Q;i++){
        int y,x;
        cin>>y>>x;
        if(y==1){
            v.insert(x);
        }
        else if(y==2){
            v.erase(x);
        }
        else{
            set<int>::iterator it=v.find(x);
            if(it!=v.end()){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}



