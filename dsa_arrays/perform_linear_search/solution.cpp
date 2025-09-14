#include <bits/stdc++.h>
using namespace std;
int linear_search(vector<int>arr,int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

int main(){
    int n;cin>>n;
    int key;cin>>key;
	vector<int>arr(n);
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
    int found= linear_search(arr,n,key);
    cout<<"found at index "<<found;
}
