#include "math.h"
double square(uint8_t index){
    if(index > 0 && index < 65){
        return pow(2,index-1);
    }
else{
    return 0;
}
}
uint64_t total(void){
    return 18446744073709551615ull;
}
