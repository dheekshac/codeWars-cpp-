#include <vector>
using namespace std;
vector<int> reverseSeq(int n) {  
  vector<int>reversed_seq;
  for(int i=n;i>0;i--){
    reversed_seq.push_back(i);
  }
  return reversed_seq;
}
