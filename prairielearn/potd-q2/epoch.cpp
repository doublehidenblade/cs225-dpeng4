#include "epoch.h"
#include <ctime>
#include <iostream>
/* Your code here! */
using namespace std;
int hours(time_t sec_since){
  int hour = sec_since/60/60;
  return hour;
}
int days(time_t sec_since){
  int day = sec_since/60/60/24;
  return day;
}
int years(time_t sec_since){
  int year =sec_since/60/60/24/365;
  return year;
}
