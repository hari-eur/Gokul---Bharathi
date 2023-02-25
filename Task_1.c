#include <stdio.h>
#include <string.h>
#include <ctype.h>

int password(char *pwd)
{
	int i, j, lcase = 0, spl_char = 0, num = 0;
	char c;
	for (i = 0; i < 8; i++) 
	{
        c = getch();
        pwd[i] = c;
        if (islower(c)) 
			lcase = 1;
        if (strchr("%$#@", c) != NULL) 
			spl_char = 1;
        if (isdigit(c)) 
			num = 1;
		c = '*';
        printf("%c",c);
    }
    pwd[i] = '\0';
    
    j = check_constraints(pwd, lcase, spl_char, num);
    
    if(j)
    	return pwd;
}

int check_constraints(char *pwd, int lcase, int spl_char, int num)
{
	if (strlen(pwd) < 8 || !lcase || !spl_char || !num) 
	{
        printf("\n\nPassword does not meet the constraints. Please try again.\nPassword: ");
        password(pwd);
    }
    else
    	return 1;
}

int main() 
{
    char uname[20], pwd[9], c;
    int i, lcase = 0, spl_char = 0, num = 0;
    
    // get username
    printf("Username: ");
    scanf("%s", uname);
    
    // get password
    printf("Password: ");
    password(pwd);
    
    printf("\n\nUsername: %s", uname);
    printf("\nPassword: %s", pwd);
    
    return 0;
}

