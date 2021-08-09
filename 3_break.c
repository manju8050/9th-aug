#include<stdio.h>
int main()
{
    int i,a,sum=0,sum1=0;
    printf("If the user enters a negative number, the loop terminates\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a);
        if(a<=0)
        break;
        else
        sum = sum+a;
    }
    printf("%d\n\n",sum);

    printf("If the user enters a negative number, it's not added to the result\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a);
        if(a<=0)
        continue;
        else
        sum1 = sum1+a;
    }
    printf("%d",sum1);
}



//
OUTPUT
If the user enters a negative number, the loop terminates
1
20
0
21

If the user enters a negative number, it's not added to the result
1
1
1
1
1
1
1
1
1
-1
9
