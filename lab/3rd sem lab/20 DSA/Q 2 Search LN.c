 #include <stdio.h>
int main()
{
    int i,n,item,LOC;

    printf("Enter size of the  array : ");
    scanf("%d", &n);

    int data[n];
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
     scanf("%d",&data[i]);

    printf("Enter the item : ");
    scanf("%d", &item);

    for(i=0; i<n; i++)
    {
        if(data[i]==item)
			LOC=i;
		else
		    LOC=0;
    }

    if(LOC==0)
        printf("Item is   not  found\n");
	else
		printf("%d is  the location \n",LOC);
return 0;
}
