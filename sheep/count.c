#include<stdio.h>
int main()
{
    printf("Enter  sentence:");
    int lenth,amount;
    float ave;
    char ch;

    do {
        ch=getchar();
        if(ch!=' ')
        {
            lenth++;
            amount++;
        }
        else
        {
           lenth++;
        } 
    }while(ch!='\n');

    ave=amount/lenth;    
    printf("The average lenth of sentence is:%f",ave);
    
    return 0;
}
