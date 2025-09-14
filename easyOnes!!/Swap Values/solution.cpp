#include <utility>
using namespace std;
pair<int, int> swap_values(pair<int, int> values) {
  int temp = values.first;
  values.first = values.second;
  values.second = temp;
  return values;
}
