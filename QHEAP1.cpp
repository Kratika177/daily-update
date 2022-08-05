#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int Q;
    cin>>Q;
    priority_queue <int,vector<int>,greater<int> > q;
    priority_queue <int,vector<int>,greater<int> > r;
    for(int i=1;i<=Q;i++){
        int type=0;
        cin>>type;
        if(type==1){
            int y;
            cin>>y;
            q.push(y);
        }
        else if(type==2){
            int y;
            cin>>y;
            r.push(y);
            
            
        }
        else if(type==3){
            while(!r.empty() && r.top() == q.top()){
                q.pop();
                r.pop();
            }
            cout<<q.top()<<endl;
        }
    } 
    return 0;
}
