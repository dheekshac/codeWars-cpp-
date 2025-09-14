#include <bits/stdc++.h>
using namespace std;
int second_largest(vector<int>arr,int n){
    sort(arr.begin(),arr.end());
    return arr[n-2];
}

int main(){
    int n;cin>>n;
    int d;cin>>d;
	vector<int>arr(n);
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
    int second_Largest= second_largest(arr,n);
    cout<<second_Largest;
}
