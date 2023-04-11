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

int monthLength(int year, int month) {
    switch(month) {
        case 2:
            if(isLeap(year)) {
                return 29;
            }
            else {
                return 28;
            }
        case 4:
        case 6:
        case 9:
        case 11:
            return 30;
        default:
            return 31;
    }
}

int main(void) {
    for(int yier = 2000; yier < 2002; yier++) {
        for(int mon = 1; mon <= 12; mon++)
            cout << monthLength(yier,mon) << " ";
        cout << endl;
    }
    return 0;
}
