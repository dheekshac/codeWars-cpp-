#include <string>
using namespace std;
string rps(const string& p1, const string& p2)
{
    if(p1=="scissors"&&p2=="paper"||p2=="scissors"&&p1=="rock"||p1=="paper"&&p2=="rock"){
      return "Player 1 won!";
    }
    if(p1=="rock"&&p2=="paper"||p1=="paper"&&p2=="scissors"||p1=="scissors"&&p2=="rock"){
      return "Player 2 won!";
    }
    if(p1==p2){
      return "Draw!";
    }
    
}
