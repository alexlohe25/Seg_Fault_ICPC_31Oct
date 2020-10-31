#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
  int test, count = 0;
  string password;
  cin >> test;
  for(int i = 0; i < test; i++) {
    cin >> password;
    bool size = false, upper = false, lower = false, sChar = false, num = false;
    if(password.size() >= 10) size = true;
    for(int i = 0; i < password.size(); i++) {
      if(!upper) {
        if(isupper(password[i])) upper = true;
      }

      if(!lower) {
        if(islower(password[i])) lower = true;
      }

      if(!sChar) {
        if(!isalpha(password[i]) && !isdigit(password[i])) sChar = true;
      }

      if(!num) {
        if(isdigit(password[i])) {
          num = true;
          bool num1 = isdigit(password[i + 1]);
          if(num1) {
            if(password[i] + 1 == password[i+1] || password[i] - 1 == password[i+1]) {
              num = false;
              break;
            }
          }
        }
      }
    }

    int valCheck = 0;
    vector<bool> validation;
    validation.push_back(size);
    validation.push_back(upper);
    validation.push_back(lower);
    validation.push_back(sChar);
    validation.push_back(num);

    for(int i = 0; i < validation.size(); i++) {
      if(validation[i]) valCheck++;
    }

    count++;
    cout << "Assertion number #" << count << ": ";
    if(valCheck == 5) cout << "Strong password" << endl;
    else if(valCheck == 4) cout << "Good" << endl;
    else if(valCheck == 3) cout << "Weak" << endl;
    else cout << "Rejected" << endl;

  }
  return 0;
}
