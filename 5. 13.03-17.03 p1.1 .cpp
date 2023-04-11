#include <iostream>
using namespace std;

bool isLeap(int year) {
if (year % 4 == 0) {
if (year % 100 == 0) {
if (year % 400 == 0) {
return true;
}
return false;
}
return true;
}
return false;
}

int main() {
  for(int yier = 1995; yier < 2017; yier++)
  cout << yier << " -> " << isLeap(yier) << endl;
  return 0;

}
