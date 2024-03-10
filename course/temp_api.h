#ifndef TEMP_API_H
#define TEMP_API_H

#include <stddef.h>

// enum months
// {
//     UNDEFINED,
//     JAN, FEB, MAR, APR, MAY, JUN,
//     JUL, AUG, SEP, OCT, NOV, DEC
// };

typedef unsigned short int year_t;
//typedef enum months        month_t;
typedef unsigned char      month_t;
typedef unsigned char      day_t;
typedef unsigned char      hour_t;
typedef unsigned char      minute_t;
typedef signed char        temp_t;

typedef struct
{
    year_t   year;
    month_t  mt;
    day_t    dd;
    hour_t   hh;
    minute_t mm;
    temp_t   temperature;
}
record_s;

temp_t month_avg_temp(record_s *, size_t, month_t);
temp_t month_min_temp(record_s *, size_t, month_t);
temp_t month_max_temp(record_s *, size_t, month_t);

temp_t year_avg_temp(record_s *, size_t, year_t);
temp_t year_min_temp(record_s *, size_t, year_t);
temp_t year_max_temp(record_s *, size_t, year_t);

#endif // TEMP_API_H
