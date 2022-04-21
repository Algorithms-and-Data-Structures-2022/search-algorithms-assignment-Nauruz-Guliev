#include "assignment/two_sum.hpp"  // find_elements

namespace assignment {

  std::optional<std::pair<int, int>> two_sum(const std::vector<int>& arr, int sum) {

    // Tips: для создания пары (pair) используйте функцию std::make_pair
    int len = arr.size();
    for (int i  = 0; i<len; i++) {
      for (int j = i+1; j <len; j++) {
        if(arr[j] == sum - arr[i]) {
          return std::make_pair(i,j);
        }
      }
    }

    return std::nullopt;
  }

}  // namespace assignment