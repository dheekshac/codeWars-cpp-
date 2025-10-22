int points(const std::array<std::string, 10>& games) {
  int num=0; 
  for(auto it:games){
     if(it[0]>it[2]){
      num+=3; 
     }
     else if(it[0]==it[2]){
       num+=1;
     }
     else if(it[0]<it[2]){
      num+=0; 
     } 
  }
  return num;
}
