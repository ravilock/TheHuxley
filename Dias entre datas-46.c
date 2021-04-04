#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int IsDate1BeforeThanDate2(int y1, int m1, int d1, int y2, int m2, int d2)
{
  if (y1<y2) {
      return 1;
  }
  else if (y1==y2) {
      if (m1 < m2) {
          return 1;
      }
      else if (m1 == m2) {
          if (d1 < d2) {
              return 1;
          }
      }
  }
  return 0;
}

int IsLeapYear(int year)
{
  return (year % 4 == 0) && ( (year % 100 != 0) || (year % 400 == 0) );
}

int IsLastDayInMonth(int year, int month, int day)
{ /* check for month in valid range [1, 12] discarded here */
  return ((month == 1 && day == 31) ||
          (IsLeapYear(year) ? (month == 2 && day == 29) : (month == 2 && day == 28)) ||
          (month == 3 && day == 31) ||
          (month == 4 && day == 30) ||
          (month == 5 && day == 31) ||
          (month == 6 && day == 30) ||
          (month == 7 && day == 31) ||
          (month == 8 && day == 31) ||
          (month == 9 && day == 30) ||
          (month == 10 && day == 31) ||
          (month == 11 && day == 30) ||
          (month == 12 && day == 31)
 );
}

int IsLastMonthInYear(int month) {
    if (month==12) {
        return 1;
    }
    return 0;
}

void IncreaseDateByOneDay(int year, int month,int day)
{
  if (IsLastDayInMonth(year, month, day))
  {
    if (IsLastMonthInYear(month))
    {
      month = 1;
      day = 1;
      year++;
    }
    else
    {
      day = 1;
      month++;
    }
  }
  else
  {
    day++;
  }
}


int main() {
    int day, d2, month, m2, year, y2, days;
    scanf("%d/%d/%d", &day, &month, &year);
    scanf("%d/%d/%d", &d2, &m2, &y2);
    days = 0;
    while (IsDate1BeforeThanDate2(year, month, day, y2, m2, d2)){
        days++;
            if (IsLastDayInMonth(year, month, day)) {
                if (IsLastMonthInYear(month)) {
                    month = 1;
                    day = 1;
                    year++;
                    }
                else{
                    day = 1;
                    month++;
                    }
                }
            else {
                day++;
                }
                }
    printf("%d", days);
	return 0;
}
