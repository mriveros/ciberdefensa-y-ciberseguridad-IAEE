 #include <stdio.h>
#include <string.h>

int main(void)
{
    int pass = 0;
    char buffer[12];

    printf("Enter the password: ");
    gets(buffer);

    if(strcmp(buffer, "mypassword"))
    {
        printf ("\nWrong Password\n");
    }
    else
    {
        printf ("\nCorrect Password\n");
        pass = 1;
    }

    if(pass==1)
    {
        printf ("\nNow you have root privileges!\n");
    }

    return 0;
}
