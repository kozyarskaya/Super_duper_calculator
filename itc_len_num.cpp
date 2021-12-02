#include "super_duper_calculator.h"


int itc_len_num(long long number){
    if (number < 0)
        number *= -1;
   int kol = 0;
   if (number == 0)
       return 1;

   while (number > 0){
        number /= 10;
        kol += 1;
   }
   return kol;
}
