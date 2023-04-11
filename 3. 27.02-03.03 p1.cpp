#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main() {
  const int N = 8;

  srand(time(NULL));

  float *mass = new float[N];

  for (int i = 0; i < N; i++) {
    mass[i] = -2.0 + static_cast<float>(rand()) /
                        (static_cast<float>(RAND_MAX / (4.0)));
  }

  cout << "massive" << endl;
  for (int i = 0; i < N; i++) {
    cout << mass[i] << " ";
  }
  cout << endl;
  cout << endl;

  int plus = 0;
  int minus = 0;

  for (int i = 0; i < N; i++) {
    if (mass[i] >= 0) {
      plus++;
    } else {
      minus++;
    }
  }

  cout << "number of positive numbers" << endl;
  cout << plus << endl;
  cout << "number of negative numbers" << endl;
  cout << minus;

  delete[] mass;

  return 0;
}