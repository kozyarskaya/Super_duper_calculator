#include "super_duper_calculator.h"

void error_znak_robot(){
    cout <<" ____________________________        ______"<< endl;
    cout <<"|                            \\      //    \\\\" << endl;
    cout <<"| Operation not recognized.   \\    || ~_~  ||" << endl;
    cout <<"|     Please enter +, -, *     /    \\\\____//" << endl;
    cout <<"|   Write /help to find out   / (_)_//    \\\\_(_)" << endl;
    cout <<"|____________________________/     //      \\\\" << endl;
    cout <<"                                  ||________||" << endl;
}

void error_letter1_robot(){
    cout <<" ____________________________        ______"<< endl;
    cout <<"| The first number consists  \\      //    \\\\" << endl;
    cout <<"| of extraneous characters.   \\    || ~_~  ||" << endl;
    cout <<"|Please enter a number without /    \\\\____//" << endl;
    cout <<"|them. Write /help to find out/ (_)_//    \\\\_(_)" << endl;
    cout <<"|____________________________/     //      \\\\" << endl;
    cout <<"                                  ||________||" << endl;
}


void error_letter2_robot(){
    cout <<" ____________________________        ______"<< endl;
    cout <<"| The second number consists \\      //    \\\\" << endl;
    cout <<"| of extraneous characters.   \\    || ~_~  ||" << endl;
    cout <<"|Please enter a number without /    \\\\____//" << endl;
    cout <<"|them. Write /help to find out/ (_)_//    \\\\_(_)" << endl;
    cout <<"|____________________________/     //      \\\\" << endl;
    cout <<"                                  ||________||" << endl;
}

void error_command_robot(){
    cout <<" ____________________________        ______"<< endl;
    cout <<"|  Command not recognized.   \\      //    \\\\" << endl;
    cout <<"|To start write /start, /stop \\    || ~_~  ||" << endl;
    cout <<"|to finish, /help to learn how /    \\\\____//" << endl;
    cout <<"|   to write a request        / (_)_//    \\\\_(_)" << endl;
    cout <<"|____________________________/     //      \\\\" << endl;
    cout <<"                                  ||________||" << endl;
}

void error_help_robot(){
    cout <<" _________________________________" << endl;
    cout <<"| Enter the first number, space,  \\           ______"<< endl;
    cout <<"| operation character:  amount +,  \\         //    \\\\" << endl;
    cout <<"| multiplication *, subtraction - , \\       || ~_~  ||" << endl;
    cout <<"| then space and second number. Enter\\       \\\\____//" << endl;
    cout <<"|negative numbers without parentheses./  (_)_//    \\\\_(_)" << endl;
    cout <<"|Ex: -5 * -4 To finish write /stop.  /      //      \\\\" << endl;
    cout <<"|___________________________________/      ||________||" << endl;
    cout << endl;
}


