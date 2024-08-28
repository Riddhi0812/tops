#include<stdio.h>

main()
{

    int Num,rev_Num=0,remainder,a; 

    printf("Enter the number to reverse: ");

    scanf("%d",&Num);

    a=Num;

    for(;Num>0;){

        remainder=Num%10;

        rev_Num=rev_Num*10+remainder;

        Num=Num/10;

    }

    printf("Reverse of %d is %d",a,rev_Num);

}
