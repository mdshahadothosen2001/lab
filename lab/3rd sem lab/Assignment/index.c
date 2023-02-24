#include <stdio.h>
void INDEX(char text[],char pattern[])
{
   int M = strlen (text);
   int N = strlen (pattern);
   int flag=-1,loc=-1;

   for (int i = 0; i <M; i++)
   {
        if(text[i]==pattern[0])
          {
            loc=i;
            for(int j=1; j<N;j++)
              {
                if (text[i+j]==pattern[j])
                  {
                    flag=flag*2;
                  }
                  else
                  {
                      loc=0;
                  }
               }
          }
   }
   if(loc==-1 )
      printf("\nIndex is not found ");
    else
      printf("\nIndex is %d",loc+1);

}
int main()
{
   char text[1000], pattern[1000];
   printf("Input a Text:\n");
   gets(text);
   printf("Input a Pattern:\n");
   gets(pattern);
   INDEX(text,pattern);
   return 0;
}

