#include <stdio.h>
#include <math.h>
#include <cs50.h>


int count_int(long long num) {
    int count = 0;
    while (num > 1) {
        count++;
        num /= 10;
} 
    return count;
}


int main(void) {
    long credit_card = get_long("Credit card: ");
    // long long credit_card = 4111111111111111;
    int card_length = count_int(credit_card);
    long long cr_array[card_length];
    for (int a=0; a<card_length; a++) {
        int div = credit_card % 10;
        credit_card /= 10;
        cr_array[a] = div;
        }
    long odd_sum = 0;
    long even_sum = 0;
    for (int i=0; i<card_length; i++) {
        if (i % 2 == 0) {
            even_sum += cr_array[i];
            }
        if (i % 2 == 1) {
            int odd_num = cr_array[i] * 2;
            if (odd_num >= 10) {
                int first_digit = floor(odd_num / 10); 
                int second_digit = odd_num % 10;  
                odd_sum += first_digit + second_digit;
            }
            else {
            odd_sum += odd_num;
        }
            }
        }
    
    int sum = even_sum + odd_sum;
    int last_digit = sum % 10;
    if (last_digit != 0) {
        printf("INVALID\n");
        }
    else {
        if (card_length == 15) {
            printf("AMEX\n");
        }
        else if (card_length >= 13 & card_length <= 16 & cr_array[card_length - 1] == 4) {
            printf("VISA\n"); 
        }
        else{
            printf("MASTERCARD\n");
        }
    }
    
    return 0;
}