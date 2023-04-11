#include <iostream>
#include <ctime>
using namespace std;

struct Date {
    int year;
    int month;
    int day;
};

bool isLeap(int year) {
    return ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
}

int monthLength(int year, int month) {
    switch (month) {
        case 2:
            return isLeap(year) ? 29 : 28;
        case 4: case 6: case 9: case 11:
            return 30;
        default:
            return 31;
    }
}

Date today() {
    time_t t = time(NULL);
    tm tl = *localtime(&t);

    Date currentDate;
    currentDate.year = tl.tm_year + 1900;
    currentDate.month = tl.tm_mon + 1;
    currentDate.day = tl.tm_mday;

    return currentDate;
}

int daysBetween(Date d1, Date d2) {
    int days = 0;

    if (d1.year > d2.year ||
        (d1.year == d2.year && d1.month > d2.month) ||
        (d1.year == d2.year && d1.month == d2.month && d1.day > d2.day)) {
        Date temp = d1;
        d1 = d2;
        d2 = temp;
    }

    for (int i = d1.month; i <= 12; i++) {
        days += monthLength(d1.year, i) - d1.day;
        d1.day = 0; 
    }

    for (int i = d1.year + 1; i < d2.year; i++) {
        days += isLeap(i) ? 366 : 365;
    }

    for (int i = 1; i < d2.month; i++) {
        days += monthLength(d2.year, i);
    }
    days += d2.day; 

    return days;
}

int main() {
    Date birthdate;
    birthdate.year = 2004;
    birthdate.month = 1;
    birthdate.day = 3;

    Date currentDate = today();
    int days = daysBetween(birthdate, currentDate);

    cout << "Days since your birth: " << days << endl;

    return 0;
}