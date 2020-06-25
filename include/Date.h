#ifndef W5N_DATE_H
#define W5N_DATE_H

#include <string>
#include <sstream>

struct Date
{
    Date();
    unsigned year;
    unsigned month;
    unsigned day;

    void set_from_string(const std::string& date);
};
#endif
