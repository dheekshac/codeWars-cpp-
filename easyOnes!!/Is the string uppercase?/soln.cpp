#include <string>
#include <cctype>
bool is_uppercase(const std::string &s) {
  bool flag=true;
  for(char c:s){
    if(!isupper(c)&&isalpha(c)){flag=false;} //if a character exists and is not uppercase then return false 
  }
  return flag; //return true if the character is uppercase
}
