// file for basics
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    FILE *f;
    f = fopen("test1", "w"); // w overwrites everytime you run the program
    char s[256];
    fgets(s, 256, stdin);
    s[strcspn(s, "\n")] = '\0';
    fputs(s, f); // puts in the file the variable 's'
    fclose(f);
    return 0;
}