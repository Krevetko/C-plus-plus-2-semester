#include <cstdlib>
#include <ctime>   
#include <iostream>

using namespace std;

int main() {

  const int size = 10;

  int mass[size][size];

  srand(time(nullptr));
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      mass[i][j] = rand() % 100;
    }
  }

  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      cout << mass[i][j] << " ";
    }
    cout << endl;
  }

  int *ptr = &mass[0][0];
  
  cout << endl;
  cout << endl;
  cout << "Elements of main diagonal" << endl;


    for (int i = 0; i < size; i++) {
        cout << *(ptr + i * size + i) << " ";
    }
  cout << endl;
  cout << endl;
  cout << "Elements of side diagonal" << endl;

    for (int i = 0; i < size; i++) {
        cout << *(ptr + i * size + (size - 1 - i)) << " ";
    }
    cout << endl;
    cout << endl;
  int even = 0;
  int odd =0;
  
     for (int i = 0; i < size*size; i++) {
       if(*(ptr+i)%2==0){
         even++;
       }else{
         odd++;
       }
    }
  cout << "even" << endl;
  cout << even << endl;
  cout << "odd" << endl;
  cout << odd << endl;

  return 0;
}