#include<iostream>
#include<bitset>
using namespace std;
string evil(int n)
{
  bitset<32> b(n);
  int count=0;
  string binaryy=b.to_string();
  for(char c:binaryy){
    if(c=='1'){
      count++;
    }
  }
  if(count%2==0){
    return "It's Evil!";
  }
  else{
    return "It's Odious!";
  }
}
