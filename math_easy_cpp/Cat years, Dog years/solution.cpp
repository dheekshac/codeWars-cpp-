#include <vector>
using namespace std;
vector<int> humanYearsCatYearsDogYears(int humanYears) {
  vector<int>arr;
  int catyear=0;
  int dogyear=0;
  if(humanYears==1){
     catyear=15;
     dogyear=15;
  }
  else if(humanYears==2){
     catyear=15+9;
     dogyear=15+9;
  }
  
  else if(humanYears>2){
     catyear=24;
     dogyear=24;
     for(int i=3;i<=humanYears;i++){
      catyear+=4;
      dogyear+=5;
     }
  }
    arr.push_back(humanYears);
    arr.push_back(catyear);
    arr.push_back(dogyear);
    return arr;
  
}
