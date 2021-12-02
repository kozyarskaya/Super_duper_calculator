#include "super_duper_calculator.h"

string sumator(string str1, string str2){
    string otv = "";
    int rasrad = 0;
    long long n1, n2;
    str1 = lish_zero(str1);
    str2 = lish_zero(str2);
    long long len1 = itc_len(str1);
    long long len2 = itc_len(str2);
    if(len1 > len2)
        str2 = sort_dlin(str1, str2);
    else
        str1 = sort_dlin(str2, str1);
        len1 = itc_len(str1);
    for(long long i = len1 - 1; i >= 0; i--){
        n1 = str1[i] - 48;
        n2 = str2[i] - 48;
        otv += ((n1 + n2 + rasrad) % 10) + 48;;
        rasrad = (n1 + n2 + rasrad) / 10;
    }
    if(rasrad == 1)
        otv += rasrad + 48;
    return lish_zero(itc_reverse_str(otv));
}

