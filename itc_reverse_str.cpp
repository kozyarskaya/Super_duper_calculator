#include "super_duper_calculator.h"

string itc_reverse_str(string str){
	string new_str = "";
	for (int i = itc_len(str) - 1; i >= 0; i--)
	{
		new_str += str[i];
	}
	return new_str;
}
