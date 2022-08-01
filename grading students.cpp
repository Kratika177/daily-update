vector<int> gradingStudents(vector<int> grades) {
vector<int> result;
for(int i=0;i<grades.size();i++){
    int nextInt=(grades.at(i)/5+1)*5;
    if(grades[i]>=38 && (nextInt-grades[i])<3){
        result.push_back(nextInt);
    }
    else if(grades[i]>=38 && (nextInt-grades[i])<=3){
        result.push_back(grades[i]);
    }
    else{
        result.push_back(grades[i]);
    }
}
