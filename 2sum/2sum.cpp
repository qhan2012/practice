#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

bool sum2 (int arr[], int len, int sum, int index[]) {
  unordered_map<int, bool> map_;
  for (int i = 0; i <= len - 1; i++) {
    map_[arr[i]] = 1;
  }
  for (int i = 0; i <= len - 1; i++) {
    if (map_[sum - arr[i]]) {
      index[0] = arr[i];
      index[1] = sum - arr[i];
      return 1;
    }
  }
  return 0;
};

bool sum3 (int arr[], int len, int sum, int index[]) {
  unordered_map<int, bool> mp;
  // int ind[2];
  for (int i=0; i<len; i++) {
    if(sum2(arr, len, sum-arr[i], index) ) {
      index[2] = arr[i];
      return 1;
    }
  }
  return 0;
};

int main() {
  int arr[] = {1, 4, 34, 323};
  int sum = 35;
  int index[2];
  sum2(arr, 4, sum, index);
  cout << index[0] << " and " << index[1] << endl;
  int index3[3];
  sum3(arr, 4, 328, index3);
  cout << index3[0] << " and " << index3[1] << " and " << index3[2]<< endl;
};