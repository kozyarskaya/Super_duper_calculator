#include <iostream>
#include "super_duper_calculator.h"
using namespace std;

void osnova(string str1, string command){
   string str2, znak, ot;
   while(command != "/stop"){
    cin >> znak >> str2;
    if(znak[0] != '+' && znak[0] != '-' && znak[0] != '*' || itc_len(znak) != 1)
        error_expretion("znak");
    else if(check_letters(str1))
        error_expretion("letter1");
    else if(check_letters(str2))
        error_expretion("letter2");
    else{
         ot = znak_nams(str1, str2, znak);
    if (ot == "-0" || ot == "+0")
        ot = "0";
        cout <<"Your answer:  " << ot << endl;
        cout << endl;
   }
    cin >> str1;
    if(str1 == "/help"){
        error_help_robot();
        cin >> str1;
    }
    command = str1;
   }
    bye_robot();
}


int main(){
    hi_robot();
    string str1, str2, znak, command;
    cin >> command;
    while(command != "/start"){
        error_start_robot();
        cin >> command;
    }
    word_calculator();
    error_help_robot();
    cin >> str1;
    command = str1;
    osnova(str1, command);
    return 0;
}
