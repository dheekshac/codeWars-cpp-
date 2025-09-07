using namespace std;
vector<int> digitize(unsigned long n) 
{     
  vector<int>arr;
  if(n==0){
    arr.push_back(0);
  }
  while(n>0){
    unsigned long r = n%10;
    n/=10;
    arr.push_back(r);
  }
  return arr;
}
