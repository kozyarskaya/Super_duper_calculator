#ifndef SUPER_DUPER_CALCULATOR_H_INCLUDED
#define SUPER_DUPER_CALCULATOR_H_INCLUDED
#include <iostream>

using namespace std;


string sort_dlin(string num1, string num2);

string lish_zero(string str);

string itc_max_num_str(string str1, string str2);

string sumator(string str1, string str2);

string vichitator(string str1, string str2);

string umnozhator(string str1, string str2);

void word_calculator();

void hi_robot();

void bye_robot();

void error_help_robot();

void error_start_robot();

void error_command_robot();

void error_letter1_robot();

void error_letter2_robot();

void error_znak_robot();

bool check_letters(string str);

void error_expretion(string error);

string check_minuc(string str1, string str2, char znak_str1, char znak_str2, string znak);

string rasbivka_str(string str);

string znak_nams(string str1, string str2, string znak);

long long itc_str_to_int(string str);

string itc_int_to_str(long long num);

long long itc_len(string str);

int itc_len_num(long long number);

string itc_reverse_str(string str);

string itc_slice_str(string str, int start, int finish);

int itc_find_str(string str1, string str2);

#endif // SUPER_DUPER_CALCULATOR_H_INCLUDED
