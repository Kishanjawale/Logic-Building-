#include<stdio.h>

/////////////////////////////////////////////////////////////////////
//
//Function Name:  Addition
//Input:          Integer ,Integer
//Output:         Integer
//@Author:        Kishan Vivek Jawale
//Description:    This is the First code written in Logic Building Batch
//Date:           12/04/2022
//
/////////////////////////////////////////////////////////////////////

int Addition(int First,int Second)//User Defined Function
{
    
//Updater Start
if (First<0)
{
    First = -First;
}
if (Second < 0)
{
    Second= -Second;
}
//Updater End

       long int Addition=0;
       Addition=First+Second;
       return Addition;
}
//////////////////////////////////////////////////////////
//write a program to perform addition of 2 numbers
//////////////////////////////////////////////////////////

int main()
{   
    //Variable Declarations....
    long int iFirst=0;
    long int iSecond=0;
    long int iAddition=0;

    //Accepting the  Inputs From user
    printf("Enter the first number \n");
    scanf("%d",&iFirst);
    printf("Enter the second number \n");
    scanf("%d",&iSecond);

    iAddition=Addition(iFirst,iSecond); //Calling the function Addition
    printf("Addition = %d \n",iAddition);
    return 0; //convay the os that the program is completed successfully
}
//////////////////////////////////////////////////////////
//
//Input:    10     11
//Output:   21
//
//////////////////////////////////////////////////////////