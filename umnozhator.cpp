#include "super_duper_calculator.h"

string umnozhator(string str1, string str2){
    string otv = "", first = "", second = "0", r = "", ch;
    int rasrad = 0;
    str1 = lish_zero(str1);
    str2 = lish_zero(str2);
    long long n1, n2, len1 = itc_len(str1), len2 = itc_len(str2);
    if(itc_max_num_str(str1, str2) == "2"){
        ch = str1;
        str1 = str2, str2 = ch;
        len1 = itc_len(str1), len2 = itc_len(str2);
    }
    for(long long i = len2 - 1; i >= 0; i--){
        n2 = str2[i] - 48;
        for(long long j = len1 - 1; j >= 0; j--){
            n1 = str1[j] - 48;
        first += ((n1 * n2 + rasrad) % 10) + 48;;
        rasrad = (n1 * n2 + rasrad) / 10;
         }
        if(rasrad != 0)
            first += rasrad + 48;
        second = sumator(itc_reverse_str(first) + r, second);
        first = "";
        r += "0";
        rasrad = 0;
    }
    if(rasrad != 0)
        second = itc_reverse_str(itc_reverse_str(second) += (rasrad + 48));
    return lish_zero(second);
}


