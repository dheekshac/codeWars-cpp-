#include <vector>
using namespace std;
std::vector<int> invert(std::vector<int> values)
{
    vector<int> result;
    for(int i=0;i<values.size();i++){
        result.push_back(values[i]*(-1));
    }
    return result;
}
