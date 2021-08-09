#include<stdio.h>
int main()
{
    int arr[5]={10,12,15,19,20};
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(arr[i]<arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            

        }
        
    }
    for(int i=0;i<5;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\nsecond largest is %d",arr[1]);
}

//
OUTPUT
20      19      15      12      10
second largest is 19