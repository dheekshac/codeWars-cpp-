#include <vector>
using namespace std;
int grow(vector<int> nums) {
  int grown=1;
  for(auto it:nums){
    grown*=it;
  }
  return grown;
}
