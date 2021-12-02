#include "super_duper_calculator.h"

string check_minuc(string str1, string str2, char znak_str1, char znak_str2, string znak){
    string otv = "";
    if ((znak_str1 == '-' && znak_str2 == '-' && znak == "-") || (znak_str1 == '-' && znak_str2 == '+' && znak == "+"))
        otv = vichitator(str2, str1);
    else if ((znak_str1 == '-' && znak_str2 == '+' && znak == "-") || (znak_str1 == '-' && znak_str2 == '-' && znak == "+"))
        otv = "-" + (sumator(str1, str2));
    else if ((znak_str1 == '+' && znak_str2 == '-' && znak == "-") || (znak_str1 == '+' && znak_str2 == '+' && znak == "+"))
        otv = sumator(str1, str2);
    else if ((znak_str1 == '+' && znak_str2 == '-' && znak == "+") || (znak_str1 == '+' && znak_str2 == '+' && znak == "-"))
        otv = vichitator(str1, str2);
    else if ((znak_str1 == '-' && znak_str2 == '-' && znak == "*") || (znak_str1 == '+' && znak_str2 == '+' && znak == "*"))
        otv = umnozhator(str1, str2);
    else if ((znak_str1 == '+' && znak_str2 == '-' && znak == "*") || (znak_str1 == '-' && znak_str2 == '+' && znak == "*"))
        otv = "-" + umnozhator(str1, str2);
return otv;
}
