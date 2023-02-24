#include <stdio.h>
#include <string.h>
void REPLACE(char* S,char P[],char Q)
{
    int i,len;
    len=strlen(S);
    for (i = 0; i<len; i++) {
        if(s[i]==p[0])
        {

        }
    }
    printf("\nString is: %s\n", s1);
    return;
}
int main()
{
    int position,len;
    char s1[5000];
    printf("Enter the first  string: ");
    gets(s1);
    printf("Enter the position: ");
    scanf("%d",&position);
    printf("Enter the lenth: ");
    scanf("%d",&len);
    DELETE(s1,position,len);
    return 0;
}

