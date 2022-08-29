int calculateMinPatforms(int at[], int dt[], int n) {
    // Write your code here.
    sort(at,at+n);
    sort(dt,dt+n);
    int i=1,j=0;
    int platform=1;
    int result=1;
    while(i<n && j<n){
        if(at[i]<=dt[j]){
            platform++;
            i++;
        }
        else if(at[i]>dt[j]){
            platform--;
            j++;
        }
        if(platform>result){
            result=platform;
        }
    }
    return result;
}
