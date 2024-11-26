Here are 10 simple C programs that demonstrate the use of control structures (if, else, switch, for, while, do-while, etc.):

1. If-Else Statement: Check Positive or Negative

#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (num > 0) {
        printf("The number is positive.\n");
    } else if (num < 0) {
        printf("The number is negative.\n");
    } else {
        printf("The number is zero.\n");
    }
    
    return 0;
}

2. Switch-Case Statement: Day of the Week

#include <stdio.h>

int main() {
    int day;
    printf("Enter a number (1-7): ");
    scanf("%d", &day);
    
    switch(day) {
        case 1: printf("Monday\n"); break;
        case 2: printf("Tuesday\n"); break;
        case 3: printf("Wednesday\n"); break;
        case 4: printf("Thursday\n"); break;
        case 5: printf("Friday\n"); break;
        case 6: printf("Saturday\n"); break;
        case 7: printf("Sunday\n"); break;
        default: printf("Invalid input.\n");
    }
    
    return 0;
}

3. For Loop: Print Numbers from 1 to 10

#include <stdio.h>

int main() {
    for(int i = 1; i <= 10; i++) {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}

4. While Loop: Print Even Numbers

#include <stdio.h>

int main() {
    i
