#include<stdio.h>
///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//Function Name:        DisplayFactor
//Input:                Integer 
//Output:               Integer(Factors Of Input)
//@Author:              Kishan Vivek Jawale
//Description:          Accept Number from user and Display its factorial except that number itself
//Date:                 25/04/2022
//
//Expected Output:      input:10
//                      output:1,2,5
//                      input:20
//                      output:1,2,4,5,10
//                      input:17
//                      input:-20
//                      output:1,2,4,5,10
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////

void DisplayFactor(int iNo) //Helper function
{ 
    int iCnt=1;

    if(iNo<0)
    {
        iNo=-iNo;
    }

    printf("Factors of %d Are:\n",iNo);
    for(iCnt=1;iCnt<iNo;iCnt++)     
    {
        if((iNo%iCnt)==0)
        {
            printf("%d\n",iCnt);
        }
    }

}

int main()
{
    int iValue=0;
    //Accepting input from user
    printf("Enter Number:\n");
    scanf("%d",&iValue);

    DisplayFactor(iValue);  //Calling Function DiaplayFactors
    return 0;
}