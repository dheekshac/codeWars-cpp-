#include <string>
#include <vector>
using namespace std;
string womens_age(unsigned n) {
  int base;
  if(n%2==0){
    //if n is even, then express as age 20 to some base value
    base=n/2;
    return to_string(n)+"? That's just "+to_string(20)+", in base "+to_string(base)+"!";
  }
  if((n-1)%2==0){
    //if n-1 is even(so that the value of base will be an integer) then express in terms of age as 21 to some base value
    base=(n-1)/2;
    return to_string(n)+"? That's just "+to_string(21)+", in base "+to_string(base)+"!";
  }
 
}
