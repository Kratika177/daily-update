#include <cmath>
int sumOfMaxMin(int arr[], int n){
	// Write your code here.
    int maxa=arr[0];
    int mina=arr[0];
    for(int i=0;i<n;i++){
        maxa=max(maxa,arr[i]);
        mina=min(mina,arr[i]);
    }
    return mina+maxa;
}
