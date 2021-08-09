#include<stdio.h>

int main()
{
    char alpha;
    double n1,n2;
    printf("Enter an aplha: ");
    scanf("%c",&alpha);
    printf("Enter two numbers: ");
    scanf("%lf %lf",&n1,&n2);

    switch(alpha)
    {
        case 'a':
            printf("sum is %lf",n1+n2);
            break;
        case 's':
            printf("diff is %lf",n1-n2);
            break;
        default:
            printf("defaut case- noaction");



    }
    return 0;
}

//

Enter an aplha: a
Enter two numbers: 10
20
sum is 30.000000

//

Enter an aplha: s
Enter two numbers: 10
20
diff is -10.000000

//

Enter an aplha: b
Enter two numbers: 10
20
defaut case- noaction