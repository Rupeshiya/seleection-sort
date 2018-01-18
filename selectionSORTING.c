//program for selection sort in which we compare one of the element with all other and check the value which is greater then swap accordingily
//to get in ascending or descending order
#include<stdio.h>
void main()
{
    int a[100],n,m,i,j,tmp,loc,min;
    printf("enter the size of array\n");
    scanf("%d",&n);
    printf("enter the array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=n-2;i++)//since location will be selected only upto n-1 to check min value of the array
    {
        min=a[i];//here for i=0 min=a[0] and loc=0
        loc=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<min)//compare a[0] with a[j]
            {
                min=a[j];//if a[j] less than min then assign a[j] to min;
                loc=j;//after getting minimum location will become j i.e where we got the minimum value so that we can swap that value with a[0]
            }
        }
        tmp=a[i];
        a[i]=a[loc];//here loc will become equals to last given loop j as i have written loc is j
        a[loc]=tmp;

    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

}
