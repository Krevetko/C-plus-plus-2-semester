#include <vector>
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
    vector<int> daysInMonth = {31, isLeap(year) ? 29 : 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    return daysInMonth[month - 1];
}

int main() {
    for (int year = 2000; year < 2002; year++) {
        for (int month = 1; month <= 12; month++) {
            cout << monthLength(year, month) << " ";
        }
        cout << endl;
    }
    return 0;
}
