#include <vector>
using namespace std; 

int count_sheep(vector<bool> arr) 
{
  int sheep_number=0;
  for(int i=0;i<arr.size();i++){
    if(arr[i]==true){
      sheep_number++;
    }
  }
  return sheep_number;
}
