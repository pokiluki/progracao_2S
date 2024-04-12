#include "Date1.h"
#include <iostream>

Date::Date() {
  year = 1;
  month = 1;
  day = 1;
}

Date::Date(int year, int month, int day) {
  this->year = year;
  this->month = month;
  this->day = day;
}

int Date::get_year() const {
    return year;
}

int Date::get_month() const {
    return month;
}

int Date::get_day() const {
    return day;
}


bool is_before(const Date& date1, const Date& date2){
    if (date1.get_year() < date2.get_year())
        return true;
    if (date1.get_year() == date2.get_year() && date1.get_month() < date2.get_month())
        return true;
    if (date1.get_year() == date2.get_year() && date1.get_month() == date2.get_month() && date1.get_day() < date2.get_day())
        return true;
    return false;
}
