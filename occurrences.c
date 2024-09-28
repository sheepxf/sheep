/*输出范例：

Enter a number: 41271092

Digit:	0	1	2	3	4	5	6	7	8	9
Occurrences:	1	2	2	0	1	0	0	1	0	1
*/
#include<stdio.h>
int main()
{
    int num[10]={0};
    int digit,x;
    long n;
    printf("Enter a number:");
    scanf("%ld",&n);
    if(n==0)
    num[0]=1;
    else
    {
        while(n>0)
        {
              digit=n%10;
              num[digit]++;
              n/=10;  
        }
    }
    printf("Digit:  0  1  2  3  4  5  6  7  8  9\n");
    printf("Occurrence:  ");
    for(x=0;x<10;x++)
    {
        printf("%d  ",num[x]);
    }

    return 0;
}