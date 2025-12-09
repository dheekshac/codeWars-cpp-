using namespace std;
vector<int> divisible_by(vector<int> numbers, int divisor)
{
  vector<int> result;
  for(int num:numbers)
      if(num%divisor==0){
        result.push_back(num);
      }
    return result;
}
