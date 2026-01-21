// file for basics
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>

int main()
{
    FILE *f_output;
    f_output = fopen("test1", "w"); // w overwrites everytime you run the program
    // char s[256];
    int data, i;
    // fgets(s, 256, stdin);
    // s[strcspn(s, "\n")] = '\0';
    // fputs(s, f_output); // puts in the file the variable 's'(ONLY for char arrays)
    // fputs("\ninainte se pune textul si dupa aceea locatia", f_output);

    // fprintf(f_output, "\nvariabila 'data' : %d\n", data); // works with any type of variable (like a printf)

    // fputs("\n", f_output);

    while(true)
    {
        printf("Enter a number (-1 quits) : ");
        scanf("%d", &data);
        if(data == -1)
            break;
        else fprintf(f_output, "%d\n", data);
    }

    // for(i = 0; i < 10; i++)
    //     fprintf(f_output, "value %d : %d\n", i + 1, i);

    fclose(f_output);


    FILE *f_input;
    f_input = fopen("test1", "r");
    int first_int = -1, cnt = 0;
    while(fscanf(f_input, "%d", &first_int) != EOF)// reads from f_input an int and stores it in variable 'first_int'
    {
        printf("Number %d : %d\n", cnt + 1, first_int);
        cnt++;
    }
    //fscanf() return EOF when it can't read anymore(when EOF is reached)

    printf("the last int in the file 'test1.txt' is : %d\n", first_int); // last string that we had read previously
    fclose(f_input);




    //intoarce caracter ca int (pentru modul "rt") -> fgetc(FILE *fisier)
    //intoarce caracterul scris sau EOF ca eroare (pentru modul "wt") ->fputc(int ch, FILE *fisier)

    

    return 0;
}