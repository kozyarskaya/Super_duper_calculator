#include "super_duper_calculator.h"

void error_expretion(string error){
    if (error == "znak")
        error_znak_robot();
        //cout << "Operation not recognized. Please enter +, -, *" << endl;
    if (error == "letter1")
        error_letter1_robot();
        //cout <<"The first number consists of extraneous characters. Please enter a number without letters."<< endl;
    if (error == "letter2")
        error_letter2_robot();
        //cout <<"The second number consists of extraneous characters. Please enter a number without letters."<< endl;

}
