#include <vector>
#include <string>
bool check(const std::vector<std::string>& seq, const std::string& elem) {
    for (auto it: seq) {
      if (it == elem) return true;
    }
    return false;
}
