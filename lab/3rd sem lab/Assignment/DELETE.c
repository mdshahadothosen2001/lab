#include <stdio.h>
#include <string.h>
void DELETE(char* s1,int position,int length)
{
    int i,len;
    len=strlen(s1);
    for (i = position-1; i<len; i++) {
        s1[i] = s1[i+length];
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
