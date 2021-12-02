#include "super_duper_calculator.h"


string sort_dlin(string num1, string num2){
    string otvet = "";
    string new_str = "";
    long long len1 = itc_len(num1), len2 = itc_len(num2);
        for(long long i = 0; i < (len1 - len2); i++){
            new_str += "0";
        }
        new_str += num2;
    return new_str;
}

string lish_zero(string str){
    string new_str = "";
    if (str[0] == '-'){
        str = itc_slice_str(str, 1, itc_len(str));
        new_str += "-";
    }
    bool bol = true;
    long long i = 0;
    while(bol && i < itc_len(str)){
        if (str[i] != '0'){
            new_str += str[i];
            bol = false;
        }
       i++;
    }
    if (new_str == "")
        new_str += "0";
    new_str += itc_slice_str(str, i, itc_len(str));
    return new_str;
}
