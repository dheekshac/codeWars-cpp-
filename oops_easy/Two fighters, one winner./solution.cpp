#include<cmath>
std::string declareWinner(Fighter* fighter1, Fighter* fighter2, std::string firstAttacker)
{
  int f1health=fighter1->getHealth();
  int f2health=fighter2->getHealth();
  int f1damage=fighter1->getDamagePerAttack();
  int f2damage=fighter2->getDamagePerAttack();
  std::string f2name=fighter2->getName();
  std::string f1name=fighter1->getName();
  int turnstokillf1= (int)std::ceil((double)f1health/f2damage);
  int turnstokillf2= (int)std::ceil((double)f2health/f1damage);
  if(turnstokillf1<turnstokillf2){
    return f2name;
  }
  if(turnstokillf1>turnstokillf2){
    return f1name;
  }
  if(turnstokillf1==turnstokillf2){
    return firstAttacker;
  }
}
