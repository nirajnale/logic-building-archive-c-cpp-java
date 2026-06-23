#include<stdio.h>

int strlenR(char *str)
{
    static int iCnt = 0;

    if(*str != '\0')
    {
        iCnt++;
        str++;
        strlenR(str);
    }
    return iCnt;
}

int main()
{
    int iRet = 0;
    char Arr[20];

    printf("Enter the number of elements : \n");
    scanf("%[^'\n']s",Arr);

    iRet = strlenR(Arr);

    printf("Length of string is : %d\n",iRet);

    return 0;
}