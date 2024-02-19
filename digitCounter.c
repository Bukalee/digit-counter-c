#include <stdio.h>
#include <math.h>

int main() {
    int number, digitCount, result;
    int sum = 0;
    
    printf("Enter a number:");
    scanf("%d", &number);

    digitCount = (int)log10(number) + 1;
    printf("Your number has %d digits\n", digitCount);
    
    int div = pow(10, digitCount - 1); 
      
    for (; digitCount > 0; digitCount--)
    {
        result = number / div;
        sum += result;
        number = number % div;
        div /= 10;
    }
    printf("Sum of the digits in your number is %d", sum);

    return 0;
}