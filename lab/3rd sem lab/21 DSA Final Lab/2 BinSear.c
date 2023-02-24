
#include<stdio.h>

int binSear(int data[],int lb,int ub,int item,int loc)
{

    int beg=lb,end=ub,mid;
    mid=((beg+end)/2);
    while(beg<=end)
    {
        if(item<data[mid])
            end=mid-1;
        else
            beg=mid+1;

        mid=((beg+end)/2);
    }
    if(item==data[mid])
       return mid;
    else
        return loc;


}
int main()
{
    int loc=-1, data[]={1,2,3,4,5,6,7,8,9};
    int res=binSear(data,0,8,0,loc);
    printf("%d",res);

    return 0;
}

