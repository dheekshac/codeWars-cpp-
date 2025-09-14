#include <string>
using namespace std;
std::string multi_table(int number)
{
    string str;
    for(int i=1;i<=10;i++){
      str.append(to_string(i)+" * "+to_string(number)+" = "+to_string(number*i));
      if(i!=10){
        str.append("\n");
      }
    }
    return str; 
}
