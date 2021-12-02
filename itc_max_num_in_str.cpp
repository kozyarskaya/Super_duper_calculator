#include "super_duper_calculator.h"

string itc_max_num_str(string str1, string str2){
    long long len1 = itc_len(str1), len2 = itc_len(str2);
    if (len1 > len2)
        return "1";
    if (len2 > len1)
        return "2";
    for(long long i = len1; i >= 0; i--){
        if ((str1[i] - 48) > (str2[i] - 48))
            return "1";
        if ((str2[i] - 48) > (str1[i] - 48))
            return "2";
    }
    return "0";
}
