#include <stdio.h>
#include <string.h>
void concatenate_string(char* s1, char* s2)
{
    int i;
    int len = strlen(s1);
    for (i = 0; s2[i] != '\0'; i++) {
        s1[len + i] = s2[i];
    }
    s1[len + i] = '\0';
    return;
}
int main()
{
    char s1[5000], s2[5000];
    printf("Enter the first  string: ");
    gets(s1);
    printf("Enter the second string: ");
    gets(s2);
    concatenate_string(s1, s2);
    printf("Concatenated String is: '%s'\n", s1);
    return 0;
}
