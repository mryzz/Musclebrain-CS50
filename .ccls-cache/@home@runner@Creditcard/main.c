#include <stdio.h>
#include <math.h>
#include <cs50.h>


int count_int(int num) {
    int count = 0;
    while (num > 1) {
        count++;
        num /= 10;
} 
    return count;
}


int main(void) {
    long credit_card = get_long("Credit card: ");
    int card_length = count_int(credit_card);
    int cr_array[card_length];
    for (int a=0; a<card_length; a++) {
        int div = credit_card % 10;
        credit_card /= 10;
        cr_array[card_length - a] = div;
    }

    long odd_sum = 0;
    long even_sum = 0;
    for (int i=0; i<card_length; i++) {
        if (i % 2 == 1) {
            even_sum += cr_array[i];
            printf("%i", cr_array[i]);
            }
        if (i % 2 == 0) {
            odd_sum += (cr_array[i] * 2);
        }
    int sum = even_sum + odd_sum;
    int last_digit = sum % 10;
        }
    
    
    return 0;
}