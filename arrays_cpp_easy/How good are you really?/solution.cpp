#include <vector>

bool betterThanAverage(std::vector<int> classPoints, int yourPoints) {
  int sum=0;
  for(auto it:classPoints){
    sum+=it;
  }
  double avg = (double)sum/classPoints.size();
  return yourPoints>avg;
}
