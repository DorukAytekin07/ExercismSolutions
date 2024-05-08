#include <math.h>
bool is_armstrong_number(int candidate){
    int len = 0;
    int copy_number = candidate;
    int target = candidate;
    int total = 0;
    int current_digit = 0;
    while(copy_number > 0){
        len++;
        copy_number /= 10;
    }
    while(candidate > 0){
        current_digit = candidate % 10;
        candidate /= 10;
        total += pow(current_digit,len);
        
    }
    if(total == target){
        return true;
    }
    else{
        return false;
    }
}
