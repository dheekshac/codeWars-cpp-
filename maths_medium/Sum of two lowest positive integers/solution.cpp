#include <vector>
#include <climits>
using namespace std;

long long sumTwoSmallestNumbers(const vector<int>& numbers) {
    long long smallest = LLONG_MAX, sec_smallest = LLONG_MAX;

    for (int x : numbers) {
        long long val = x; 
        if (val < smallest) {
            sec_smallest = smallest;
            smallest = val;
        } 
        else if (val < sec_smallest) {
            sec_smallest = val;
        }
    }

    return smallest + sec_smallest;
}
