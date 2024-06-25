* 1 and 2, separated by a come followed by a space.
* Return: Always 0.
*/

int main(void) 
{ 
    int count; 
    unsigned long fib1 = 1, fib2 = 2, fib1_half1, fib1_half2, fib2_half1, fib2_half2, sum; 
    unsigned long half1, half2; 
    unsigned long fib_half1, fib_half2; 
    for (count = 3; count <= 92; count++) 
    { 
        sum = fib1 + fib2; 
        printf("%lu, ", sum); 
        fib1 = fib2; 
        fib2 = sum; 
    } 
    fib1_half1 = fib1 / 1000000000; 
    fib2_half1 = fib2 / 1000000000; 
    fib1_half2 = fib1 % 1000000000; 
    fib2_half2 = fib2 % 1000000000; 
    for (count = 93; count < 99; count++) 
    { 
        half1 = fib1_half1 + fib2_half1; 
        half2 = fib1_half2 + fib2_half2; 
        if (fib1_half2 + fib2_half2 > 999999999) 
        { 
            half1 += 1; 
            half2 %= 1000000000; 
        } 
        printf("%lu%lu", half1, half2); 
        if (count != 98) 
            printf(", "); 
        fib1_half1 = fib2_half1; 
        fib1_half2 = fib2_half2; 
        fib2_half1 = half1; 
        fib2_half2 = half2; 
    } 
    printf("\n"); 
    return (0); 
}

