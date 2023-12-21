#include <stdio.h>
#include <string.h>

int main()
{
    char password[20];
    int conditions[5] = {0};
    int i;

    printf("Enter the password: ");
    scanf("%s", password);

    int len = strlen(password);

    for (i = 0; i < len; i++)
    {
        if (password[i] >= 'a' && password[i] <= 'z')
            conditions[0] = 1;
        else if (password[i] >= 'A' && password[i] <= 'Z')
            conditions[1] = 1;
        else if (password[i] == '!' || password[i] == '@' || password[i] == '#' || password[i] == '$' || password[i] == '%' || password[i] == '^' || password[i] == '&' || password[i] == '*' || password[i] == '(' || password[i] == ')' || password[i] == '-' || password[i] == '+')
            conditions[2] = 1;
        else if (len >= 8) 
            conditions[3] = 1;
        else if (password[i] >= '0' && password[i] <= '9')
            conditions[4] = 1;
    }

    int flag = 1;
    for (i = 0; i < 5; i++)
    {
        flag = flag & conditions[i];
    }

    if (flag == 1)
        printf("Strong password\n");
    else
        printf("Weak password\n");

    return 0;
}
