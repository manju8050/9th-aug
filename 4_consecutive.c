#include<stdio.h>

int main()
{
   int a;
   printf("enter the number: ");
   scanf("%d",&a);

   for(int i=1;i<=a;i++)
   {
       for(int j=1;j<=i;j++)
       {
           printf("%d ",i);
       }
   }
    return 0;
}

//

enter the number: 4
1 2 2 3 3 3 4 4 4 4

//

enter the number: 3
1 2 2 3 3 3 