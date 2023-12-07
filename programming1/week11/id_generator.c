// author: fathul fahmy
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char name[20], phoneNum[11], str1[20], str2[20];

    // request user input
    puts("Enter your name: ");
    fgets(name, 20, stdin);

    puts("Enter your phone number: ");
    fgets(phoneNum, 11, stdin);

    // copy up to 4 characters from initial characters of name and phoneNum
    // and store into str1 and str2 respectivelt
    strncpy(str1, name, 4);
    strncpy(str2, phoneNum, 4);

    // append str2 to str1
    strcat(str1, str2);

    // display str1
    puts(str1);

    return 0;
}
