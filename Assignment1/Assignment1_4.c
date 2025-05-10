////////////////////////////////
//      Author : Aditya Naik
//     Program : accept one number and check whether it is divisible by 5 or not
//        Date : 10/05/2025
///////////////////////////////////

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

    BOOL check(int iNo)
    {
        if((iNo % 5)== 0)
        {
            return TRUE;
        }
        else
        {
            return FALSE;
        }
    }
    


int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    bRet = check(iValue);

    if(bRet == TRUE)
    {
        printf("Divisible by 5\n");
    }
    else
    {
        printf("Not Divisble by 5\n");
    }

    return 0;

}