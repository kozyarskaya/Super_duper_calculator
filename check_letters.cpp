#include "super_duper_calculator.h"

bool check_letters(string str){
    unsigned long long i = 0;
    if (str == "+0")
        return false;
    if (str == "-")
        return true;
    if (str[0] == 45)
        str = itc_slice_str(str, 1, itc_len(str));
    while(str[i] != '\0'){
        char d = str[i];
        if (d < 48 && d < 58 || (d > 57))
            return true;

        i++;
    }
    return false;
}
