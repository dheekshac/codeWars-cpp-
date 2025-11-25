#include <string>
bool isPalindrom (const std::string& str)
{
  int l=0;int h=str.length()-1;
  while(l<h){
    if(tolower(str[l])!=tolower(str[h])){
      return false;
    }
    l++;
    h--;    
  }
  return true;
}
