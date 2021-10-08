#include <stdio.h>
#include <stdbool.h>
int strlength(char a1[]);
char strConcat(char a[], char b[], char c[]);
bool strCompare(char a[], char b[]);
int main()
{
    /** Testing strlength function **/
    char str1[] = "hello";
    printf("string = %s\n", str1);
    printf("length = %d\n\n\n\n", strlength(str1));
    char str2[] = "Yes";
    /** Testing strConcat function **/
    char result[50];
    printf("string1 = %s\n", str1);
    printf("string2 = %s\n", str2);
    result[50] = strConcat(str1, str2, result);
    printf("result = %s\n\n", result);
    /** Testing strCompare function **/
    int x = strCompare(str1, str2);
    if(x == 0)
        printf("str1 is not equal to str2!\n");
    else
        printf("str1 is equal to str2!\n");
    return 0;
}
int strlength(char a[])
{
    int length = 0;
    while(a[length] != '\0')
    {
        length++;
    }
    return length;
}
char strConcat(char a[], char b[], char c[])
{
    int i, j;
    for(i = 0; a[i] != '\0'; i++)
    {
        c[i] = a[i];
    }
    for(j = 0; b[i] != '\0'; j++)
    {
        c[i+j] = b[j];
    }
    return c;
}
bool strCompare(char a[], char b[])
{
    int i;
    bool areEqual;
    for(i = 0; a[i] != '\0' && b[i] != '\0'; i++)
    {
        if(a[i] == b[i])
            areEqual = true;
        else
            areEqual = false;
    }
    return areEqual;
}
