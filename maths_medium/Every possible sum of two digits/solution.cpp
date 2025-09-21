#include<bits/stdc++.h>
using namespace std;
vector<int> digits(int n){
  vector<int>digitss;
  vector<int>sum;
  string str = to_string(n);
  for(auto it:str){
    digitss.push_back(it - '0');
  }
  unsigned long j=0;
  while(j<digitss.size()){
    for(unsigned long i=j+1;i<digitss.size();i++){
    sum.push_back(digitss[i]+digitss[j]);
  }
    j++;
  }
  return sum;
}
