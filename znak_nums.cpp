#include "super_duper_calculator.h"

string znak_nams(string str1, string str2, string znak){
    char znak_str1, znak_str2;
    if (str1[0] == '-' && str2[0] == '-'){
        str1 = itc_slice_str(str1, 1, itc_len(str1));
        str2 = itc_slice_str(str2, 1, itc_len(str2));
        znak_str1 = '-';
        znak_str2 = '-';
    }
    else if (str1[0] == '-' && str2[0] != '-'){
        str1 = itc_slice_str(str1, 1, itc_len(str1));
        znak_str1 = '-';
        znak_str2 = '+';
    }
    else if (str1[0] != '-' && str2[0] == '-'){
        str2 = itc_slice_str(str2, 1, itc_len(str2));
        znak_str1 = '+';
        znak_str2 = '-';
    }
    /*else if (str1[0] == '+' && str2[0] == '+'){
        str1 = itc_slice_str(str1, 1, itc_len(str1));
        str2 = itc_slice_str(str2, 1, itc_len(str2));
        znak_str1 = '+';
        znak_str2 = '+';
    }*/
    else{
        znak_str1 = '+';
        znak_str2 = '+';
    }
    return check_minuc(str1, str2, znak_str1, znak_str2, znak);
}
