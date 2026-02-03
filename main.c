#include <stdio.h>
#include <stdlib.h>

int main()
{
    char username[]="kihore";
    char pass[]="kis123";
    char password[20];
    printf("\nUsername:%s",username);
    printf("\nEnter the password:");

    scanf("%s",password);
    if(strcmp(pass,password)==0)
    {
        printf("validate");

    }
    else
    {
        printf("validate");
        printf("\nUsername:%s",username);
        printf("\npassword:%s",password);

    }
    return 0;
}
