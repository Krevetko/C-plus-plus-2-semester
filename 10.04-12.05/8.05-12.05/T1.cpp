#include <iostream>
#include <string.h>
using namespace std;

class Tree{
public:
  void TreeBase(void){
    cout << " /\\ " << endl;
  }
};

class SPTree : public Tree{
  public:
    void printSPTree(){
      TreeBase();
      cout << "//\\\\" << endl;
    }
};

class OTree : public Tree{
  public:
    void printOTree(){
      TreeBase();
      cout << "/**\\" << endl;
    }
};

class BTree : public Tree{
  public:
    void printBTree(){
      TreeBase();
      cout << "/++\\" << endl;
    }
};

int main() {
  SPTree spruce;
  OTree Oak;
  BTree Birch;
  for(int i = 0; i < 3; i++){
    cout << "Drawing " << i+1 << ":" << endl;
    switch(i){
      case 0:{
        spruce.printSPTree();
        break;
      }
      case 1:{
        Oak.printOTree();
        break;
      }
      case 2:{
        Birch.printBTree();
        break;
      }
    }
  }
  
}