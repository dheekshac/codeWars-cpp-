#include <vector>

int square_sum(const std::vector<int>& numbers)
{
  int sum=0;
  for(auto it:numbers){
    it*=it;
    sum+=it;
  }
  return sum;
  return -1;
}
