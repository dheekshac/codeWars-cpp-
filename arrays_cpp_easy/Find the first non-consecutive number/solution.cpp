#include <optional>
#include <vector>

std::optional<int> firstNonConsecutive(const std::vector<int>& numbers) {
  for(int i=0;i<numbers.size()-1;i++){
    if((numbers[i+1]-numbers[i])!=1){
      return numbers[i+1];
    }
  }
  return std::nullopt;
}
