using namespace std;
vector<int> maps(const std::vector<int> & values) {
  vector<int>result;
  for(auto it:values){
    result.push_back(it*2);
  }
  return result;
}
