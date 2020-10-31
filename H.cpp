#include <iostream>
#include <vector>

using namespace std;

int main() {
  int test, house, candy;
  cin >> test;

  for(int i = 0; i < test; i++) {
    vector<int> total;
    int nonSum = 0, parSum = 0;
    cin >> house;
    while(house > 0){
      cin >> candy;
      total.push_back(candy);
      house--;
    }

    for(int k = 0; k < total.size(); k+=2) {
      parSum += total[k];
    }

    for(int k = 1; k < total.size(); k+=2) {
      nonSum += total[k];
    }

    if(parSum > nonSum) cout << parSum << endl;
    else if(nonSum > parSum) cout << nonSum << endl;
    else cout << parSum << endl;
  }

  return 0;
}
