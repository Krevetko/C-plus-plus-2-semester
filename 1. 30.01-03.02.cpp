#include <iostream>
using namespace std;

int main() {
  int vector[] = {3, -5, 7, 10, -4, -13, 5, 2, -13};
  int n = sizeof(vector) / sizeof(vector[0]);
  // Insert your code here
  int min_val = *vector;
  int *ptr = vector + 1;

  cout << "the smallest value of massive: " << ptr << *ptr << endl;
  return 0;
}