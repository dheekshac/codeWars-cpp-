std::string chromosomeCheck(std::string sperm) {
   if(sperm == "XY"){
     return "Congratulations! You're going to have a son.";
   }else if( sperm == "XX"){
     return "Congratulations! You're going to have a daughter.";
   }
}
