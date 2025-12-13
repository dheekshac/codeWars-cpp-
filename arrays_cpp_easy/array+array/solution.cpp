#include <vector>
int arrayPlusArray(std::vector<int> a, std::vector<int> b) {
  int arr1=0,arr2=0;
  for(int i=0;i<a.size();i++) {
    arr1+=a[i];
  }
  for(int j=0;j<b.size();j++){
    arr2+=b[j];
  }
  return arr1+arr2;
}
