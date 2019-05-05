#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch,s[20],s1[50];
    scanf("%c",&ch);
    scanf("%s",s);
    scanf("\n");
    scanf("%[^\n]%*c",s1);

    printf("%c\n",ch);
    printf("%s\n",s);
    printf("%s",s1);

    return 0;
}
