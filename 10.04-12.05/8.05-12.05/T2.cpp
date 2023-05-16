#include <iostream>
#include <string.h>
using namespace std;

class IPADRS{
  protected:
    string IPADRS;
  public:
    void print(){
      cout << IPADRS << endl;
    }
};

class IPADRSChecked : public IPADRS{
  private:
    string IPADRS;
    string Check = "Correct";
  public:
    IPADRSChecked(string);
    void printChecked(){
      cout << IPADRS << " - " << this -> Check << endl;
    }
    void check(string){
      if(IPADRS > "255.255.255.255" || IPADRS < "0.0.0.0"){
        Check = "Not Correct";
      }else{
        Check = "Correct";
      }
    }
    void print(){
      IPADRS::print();
    }
};

IPADRSChecked::IPADRSChecked(string ip){
  IPADRS::IPADRS = ip;
  check(ip);
}

int main() {
  string IPADRS;
  while(1){
    cin >> IPADRS;
    IPADRSChecked ipCh(IPADRS);
    cout << "Entered ip address: ";
    ipCh.print();
    cout << "Result: ";
    ipCh.printChecked();
  }
}