#include <string>

std::string people_with_age_drink(int age) {
  if(age<14){
    return "drink toddy";
  }
  else if(age<18&&age>13){
    return "drink coke";
  }
  else if(age>17&&age<21){
    return "drink beer";
  }
  else if(age>20){
    return "drink whisky";
  }
}
