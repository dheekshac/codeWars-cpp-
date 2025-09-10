#include<cmath>
int countSquares(int cuts)
{
    if(cuts==0) return 1;
    return pow(cuts+1,3)-pow((cuts-2+1),3);
}
