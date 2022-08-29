#include <algorithm>
struct meeting{
    int start;
    int end;
    int position;
};
bool comparator(meeting m1,meeting m2){
    if(m1.end<m2.end){
        return true;
    }
    else if(m1.end>m2.end){
        return false;
    }
    else if(m1.position<m2.position){
        return true;
    }
    return false;
}
vector<int> maximumMeetings(vector<int> &start, vector<int> &end) {
  
  struct meeting m[start.size()];
  for(int i=0;i<start.size();i++){
      m[i].start=start[i],m[i].end=end[i],m[i].position=i+1;
  }  
  sort(m , m+start.size() , comparator);
  vector<int> ans;
  int limit=m[0].end;
  ans.push_back(m[0].position);
  for(int i=0;i<start.size();i++){
      if(m[i].start>limit){
          limit=m[i].end;
          ans.push_back(m[i].position);
      }
  }
  return ans;  
    
}
