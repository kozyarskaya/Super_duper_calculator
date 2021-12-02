#include "super_duper_calculator.h"

string vichitator(string str1, string str2){
    string otv = "", ch;
    bool znak = false;
    int rasrad = 1;
    str1 = lish_zero(str1);
    str2 = lish_zero(str2);
    long long n1, n2, len1 = itc_len(str1), len2 = itc_len(str2);
    if(itc_max_num_str(str1, str2) == "2"){
        ch = sort_dlin(str2, str1);
        str1 = str2;
        str2 = ch;
        znak = true;
        len1 = itc_len(str1);
    }
    else
        str2 = sort_dlin(str1, str2);
    for(long long i = len1 - 1; i >= 0; i--){
        n1 = (str1[i] - 48) - 1 + rasrad;
        n2 = str2[i] - 48;
        ch = (((10 + n1) - n2) % 10) + 48;
        otv += ch;
        rasrad = ((10 + n1) - n2) / 10;
    }
    if(znak)
        otv += "-";
    return lish_zero(itc_reverse_str(otv));
}
