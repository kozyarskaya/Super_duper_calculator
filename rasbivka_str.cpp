#include "super_duper_calculator.h"

string rasbivka_str(string str){
    char znak_str1, znak_str2;
    string znak = "" + str[itc_find_str(str, " ") + 1],str1 = itc_slice_str(str, 0, (itc_find_str(str, " ") - 1)), str2 = itc_slice_str(str, itc_find_str(str, " ") + 3, itc_len(str));
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
    else{
        znak_str1 = '+';
        znak_str2 = '+';
    }
    return check_minuc(str1, str2, znak_str1, znak_str2, znak);
}
