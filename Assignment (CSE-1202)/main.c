#include<stdio.h>
#include "puspo.h"
int main(){
    int a[10]={11,17,23,6,13,4,33,2,24,39};
    int size=sizeof(a)/sizeof(a[0]);
    max(a,size);

    min(a,size);

    prime(11);

    odd(23);

    even(6);

    int sum = sumofarray(a,size);
    printf("The sum is = %d\n",sum);

    int sumofdigit = digitsum(642);
    printf("The sum of digits of %d is = %d\n",642,sumofdigit);

    int rev=reverse(426);
    printf("Reversed: %d\n", rev);

    palindrome(666);

    dtob(17);

    btod(33);

    dtoo(13);

    dtoh(222);
    return 0;
}
