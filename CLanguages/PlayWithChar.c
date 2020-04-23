#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch, s[100],sen[100];
     scanf("%c",&ch);//get all the input
     scanf("%s\n", s);
     scanf("%[^\n]%*c", sen);
     //gets(sen);
     printf("%c\n",ch);//printing output one by one
     printf("%s\n",s);
     printf("%s",sen);   
    return 0;
}

