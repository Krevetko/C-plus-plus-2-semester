#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main() {

  int size = 3;
  float **mass = new float *[size];
  for (int i = 0; i < size; i++) {
    mass[i] = new float[size];
  }

  srand(time(NULL));
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      mass[i][j] = rand() % 100 + 1;
    }
  }
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      cout << mass[i][j] << " ";
    }
    cout << endl;
  }

  for(int i = 0; i < size; i++){
    delete [] mass[i];
  }
  
  return 0;
}