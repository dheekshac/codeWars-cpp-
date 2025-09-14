#include <bits/stdc++.h>
using namespace std;
int second_largest(vector<int>arr,int n){
    int largest=arr[0];
    int sec_largest=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            sec_largest=largest;
            largest=arr[i];
        }
        else if(arr[i]!=largest&&arr[i]>sec_largest){
            sec_largest=arr[i];
        }
    }
    return sec_largest;
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
