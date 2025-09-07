#include <vector>

int positive_sum (const std::vector<int> arr){
  int count=0;
  for(auto it:arr){
    if(it>0){
      count+=it;
    }
  }
  return count;
  return -1;
}
