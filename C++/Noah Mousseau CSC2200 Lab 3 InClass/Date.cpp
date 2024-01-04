#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <ctime>

//Noah Mousseau

using namespace std;

#include "Date.h"
#include "config.h"

bool Date::isLeapYear(int year) {
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}

int Date::daysInMonth(int month, int year) {
    switch (month) {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        return 31;
        break;
    case 4: case 6: case 9: case 11:
        return 30;
        break;
    case 2:
        bool isLeapYear = (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
        if (isLeapYear == true) {
            return 29;
        }
        else {
            return 28;
        }
        break;
    }
}

Date::Date() {
    //Get current time
    time_t currentTime = time(0);
    struct tm* now = localtime(&currentTime);
    //Get day, month, year
    day = now->tm_mday;
    month = now->tm_mon + 1; //+1 to get months 1 through 12
    year = now->tm_year + 1900;
}

Date::Date(int day_, int month_, int year_) throw(logic_error)
{
    day = day_;
    month = month_;
    year = year_;
    //To check year
    if (year < 0) {
        throw std::logic_error("Invalid year: Year cannot be negative.");
    }
    //To check month
    if (month < 1 || month > 12) {
        throw std::logic_error("Invalid month: Month must be between 1 and 12.");
    }
    //To check day
    int daysInMonths;
    switch (month) {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        daysInMonths = 31;
        break;
    case 4: case 6: case 9: case 11:
        daysInMonths = 30;
        break;
    case 2:
        bool isLeapYear = (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
        if (isLeapYear == true) {
            daysInMonths = 29;
        }
        else {
            daysInMonths = 28;
        }
        break;
        if (day < 1 || day > daysInMonth(month, year)) {
            throw std::logic_error("Invalid day: Day is out of range for the given month.");
        }
    }
}


#if LAB2_TEST9
int Date::getDayOfWeek() const {
    //Sets independent variables for day, month, and year
    int d = day;
    int m = month;
    int y = year;
    //Sets february to 14 and march to 3 for day finding calculation
    if (m < 3) {
        m += 12;
        y--;
    }
    int i = y % 100;
    int j = y / 100;
    //Calculation to determine day of week from 0 to 6
    int dayOfWeek = (d + 13 * (m + 1) / 5 + i + i / 4 + j / 4 + 5 * j) % 7;
    return dayOfWeek + 1; //For day of week, monday is 1
}
#endif

int Date::getDay() const {
    return day;
}

int Date::getMonth() const {
    return month;
}

int Date::getYear() const {
    return year;
}

void Date::showStructure() const {
    // Outputs data in same form as operator<<.
    // NOTE: could do "cout << *this << endl", but that would not compile
    // if operator<< has not been defined.
    cout << month << "/" << day << "/" << year << endl;
}

#if LAB2_TEST10
bool Date::operator<(const Date& rhs) const {
    if (year < rhs.year)
        return true;
    else if (year == rhs.year && month < rhs.month)
        return true;
    else if (year == rhs.year && month == rhs.month && day < rhs.day)
        return true;
    return false;
}

bool Date::operator==(const Date& rhs) const {
    return (year == rhs.year && month == rhs.month && day == rhs.day);

}

bool Date::operator>(const Date& rhs) const {
    return !(*this < rhs) && !(*this == rhs);
}
#endif

ostream& operator<<(ostream& out, const Date& date) {
    out << "Date: " << date.month << "/" << date.day << "/" << date.year;
    return out;
}