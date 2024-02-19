#include "temp_api.h"

/*  Прототипы (заглушки) функций
 * - вывода статистики по каждому месяцу:
 *   - среднемесячная температура;
 *   - минимальная температура в текущем месяце;
 *   - максимальная температура в текущем месяце;
 * - вывода статистики за год:
 *   - среднегодовая температура;
 *   - минимальная температура;
 *   - максимальная температура;
*/

temp_t month_avg_temp(record_s *log, size_t s, month_t m)
{
    temp_t result = 0;
    for (size_t i = 0; i < s; i++)
        if (m == log[i].mt)
            break;
    
    return result;
}

temp_t month_min_temp(record_s *log, size_t s, month_t m)
{
    temp_t result = 0;
    for (size_t i = 0; i < s; i++)
         if (m == log[i].mt)
            break;

    return result;
}

temp_t month_max_temp(record_s *log, size_t s, month_t m)
{
    temp_t result = 0;
    for (size_t i = 0; i < s; i++)
         if (m == log[i].mt)
            break;

    return result;
}


temp_t year_avg_temp(record_s *log, size_t s, year_t y)
{
    temp_t result = 0;
    for (size_t i = 0; i < s; i++)
         if (y == log[i].year)
            break;

    return result;
}

temp_t year_min_temp(record_s *log, size_t s, year_t y)
{
    temp_t result = 0;
    for (size_t i = 0; i < s; i++)
         if (y == log[i].year)
            break;

    return result;
}

temp_t year_max_temp(record_s *log, size_t s, year_t y)
{
    temp_t result = 0;
    for (size_t i = 0; i < s; i++)
         if (y == log[i].year)
            break;

    return result;
}

