//Task 1: Write a C program to fetch inputs of different datatypes and display outputs with their size.
//Compiled by: Ashvath S.P
//Date: 06-11-2022

#include <stdio.h>

void main() {
    short int short_int_val; /* Range: -32768 to 32767 */
    unsigned short int un_short_int_val; /* Range: 0 to 65535 */
    unsigned int un_int_val; /* Range: 0 to 4294967295 (note: refer note in comment line 11)*/
    int int_val; /* Range: -2147483648 to 2147483647 (note: int is 32 bits in width)*/
    long int long_int_val; /* Range: -2147483648 to 2147483647 (note: long int is 64 bits in width)*/
    unsigned long int un_lng_int_val; /* Range: 0 to 4294967295 (note: refer note in comment line 12)*/
    long long int long_long_int_val; /* Range: -(2^63) to (2^63)-1 or -9223372036854775808 to 9223372036854775807 */
    unsigned long long int un_long_long_int_val; /* Range: 0 to (2^64) – 1 or 0 to 18446744073709551615 */
    signed char sign_char_val; /* Range: -32768 to 32767 */
    unsigned char un_char_val; /* Range: 0 to 255 */
    float float_val; /* Range: 1.2E-38 to 3.4E+38 or -34.738061 to 47.242158216760753800224977402599 */
    double double_val; /* Range: 1.7E-308 to 1.7E+308 or -303.378922 to 312.621079*/
    long double long_double_val; /* Range: 3.4E-4932 to 1.1E+4932 or -4922.7578417832392461997750225974 to 4934.9901100113049497588963162185*/

    printf("DATA TYPES\n"); /*13 datatypes*/

    //input data from user and output data with size
    printf("\nEnter value for short int: ");
    scanf("%hd", &short_int_val);
    printf("Size of short int value %hd: %d byte(s)\n", short_int_val, sizeof(short_int_val));

    printf("\nEnter value for unsigned short int: ");
    scanf("%hu", &un_short_int_val);
    printf("Size of unsigned short int value %hu: %d byte(s)\n", un_short_int_val, sizeof(un_short_int_val));

    printf("\nEnter value for unsigned int: ");
    scanf("%u", &un_int_val);
    printf("Size of unsigned int value %u: %d byte(s)\n", un_int_val, sizeof(un_int_val));

    printf("\nEnter value for int: ");
    scanf("%d", &int_val);
    printf("Size of int value %d: %d byte(s)\n", int_val, sizeof(int_val));

    printf("\nEnter value for long int: ");
    scanf("%ld", &long_int_val);
    printf("Size of long int value %ld: %d byte(s)\n", long_int_val, sizeof(long_int_val));

    printf("\nEnter value for unsigned long int: ");
    scanf("%lu", &un_lng_int_val);
    printf("Size of unsigned long int value %lu: %d byte(s)\n", un_lng_int_val, sizeof(un_lng_int_val));

    printf("\nEnter value for long long int: ");
    scanf("%lld", &long_long_int_val);
    printf("Size of long long int value %lld: %d byte(s)\n", long_long_int_val, sizeof(long_long_int_val));

    printf("\nEnter value for unsigned long long int: ");
    scanf("%llu", &un_long_long_int_val);
    printf("Size of unsigned long long int value %llu: %d byte(s)\n", un_long_long_int_val,
           sizeof(un_long_long_int_val));

    printf("\nEnter value for signed char: ");
    scanf("%c", &sign_char_val);
    printf("Size of signed char value %c: %d byte(s)\n", sign_char_val, sizeof(sign_char_val));

    printf("\nEnter value for unsigned char: ");
    scanf("%c", &un_char_val);
    printf("Size of unsigned char value %c: %d byte(s)\n", un_char_val, sizeof(un_char_val));

    printf("\nEnter value for float: ");
    scanf("%f", &float_val);
    printf("Size of float value %f: %d byte(s)\n", float_val, sizeof(float_val));

    printf("\nEnter value for double: ");
    scanf("%lf", &double_val);
    printf("Size of double value %lf: %d byte(s)\n", double_val, sizeof(double_val));

    printf("\nEnter value for long double: ");
    scanf("%Lf", &long_double_val);
    printf("Size of long double value %Lf: %d byte(s)\n", long_double_val, sizeof(long_double_val));
}
