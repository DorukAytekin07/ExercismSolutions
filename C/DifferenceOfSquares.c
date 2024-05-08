unsigned int sum_of_squares(unsigned int number){
    unsigned int total = 0;
    for(unsigned int i = 0;i <= number;i++){
        total += (i * i);
    }
    return total;
    
}
unsigned int square_of_sum(unsigned int number){
    unsigned int total = 0;
    for(unsigned int i = 0;i <= number;i++){
        total += i;
    }
    return total * total;
}
unsigned int difference_of_squares(unsigned int number){
    return square_of_sum(number) - sum_of_squares(number);
}
