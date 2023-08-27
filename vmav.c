#include<stdio.h>
/*          Project Name: Vending Machine
            Made By: Aman Verma
            course: BCA 1st Semester
*/


void main()
{
	//declaration of variables here
	int choice;
	int amt_to_pay;
	//declaration ends here
	//menu
	printf("--------Vending Machine Project--------\n");
	printf("1.)Samosa\t-5rs\t6.)Chola\t-35rs\n");
	printf("2.)Biryani\t-40rs\t7.)Dal Chawal\t-20rs\n");
	printf("3.)Chilifries\t-15rs\t8.)Rajma\t-15rs\n");
	printf("4.)Chai\t\t-7rs\t9.)Spanish Toritllas\t-1000rs\n");
	printf("5.)Pizza\t-100rs\t10.)Exit");
	printf("\n--------------------------------------\n");
	//menu ends here
	printf("Enter the item number to be purchase:");
	scanf("%d",&choice);

while (choice!=10)
{



    //swicth starts
	switch(choice)
	{
	case 1:
	    printf("\nYou Picked SAMOSA for 5RS!");
        printf("\nEnter amount to pay:");
        scanf("%d",&amt_to_pay);
        if (amt_to_pay>5)
            {
            printf("Here Your leftover amount:%d\n",amt_to_pay-5);
            }
	  else if(amt_to_pay ==5)
            {
            printf("Thanks for purchase!\n");
            }
      else if(amt_to_pay<5)
            {
            printf("Your payment not successful! Please Try again!\n");
            }
        break;
    case 2:
        printf("\nYou Picked BIRYANI for 40RS");
        printf("\nEnter amount to pay:");
        scanf("%d",&amt_to_pay);
        if (amt_to_pay>40)
            {
            printf("Here Your leftover amount:%d\n",amt_to_pay-40);
            }
        else if(amt_to_pay==40)
            {
            printf("Thanks For Purchase!\n");
            }
        else if(amt_to_pay<40)
            {
            printf("Your payment not successful! Please Try again!\n");
            }
        break;
    case 3:
        printf("\nYou Picked CHILIFRIES for 15RS");
        printf("\nEnter amount to pay:");
        scanf("%d",&amt_to_pay);
        if (amt_to_pay>15)
            {
            printf("Here Your leftover amount:%d\n",amt_to_pay-15);
            }
        else if(amt_to_pay==15)
            {
            printf("Thanks For Purchase!\n");
            }
        else if(amt_to_pay<15)
            {
            printf("Your payment not successful! Please Try again!\n");
            }
        break;
    case 4:
        printf("\nYou Picked CHAI for 7RS");
        printf("\nEnter amount to pay:");
        scanf("%d",&amt_to_pay);
        if (amt_to_pay>7)
            {
            printf("Here Your leftover amount:%d\n",amt_to_pay-7);
            }
        else if(amt_to_pay==7)
            {
            printf("Thanks For Purchase!\n");
            }
        else if(amt_to_pay<7)
            {
            printf("Your payment not successful! Please Try again!\n");
            }
        break;
    case 5:
        printf("\nYou Picked PIZZA for 100RS");
        printf("\nEnter amount to pay:");
        scanf("%d",&amt_to_pay);
        if (amt_to_pay>100)
            {
            printf("Here Your leftover amount:%d\n",amt_to_pay-100);
            }
        else if(amt_to_pay==100)
            {
            printf("Thanks For Purchase!\n");
            }
        else if(amt_to_pay<100)
            {
            printf("Your payment not successful! Please Try again!\n");
            }
        break;
    case 6:
        printf("\nYou Picked CHOLA for 35RS");
        printf("\nEnter amount to pay:");
        scanf("%d",&amt_to_pay);
        if (amt_to_pay>35)
            {
            printf("Here Your leftover amount:%d\n",amt_to_pay-35);
            }
        else if(amt_to_pay==35)
            {
            printf("Thanks For Purchase!\n");
            }
        else if(amt_to_pay<35)
            {
            printf("Your payment not successful! Please Try again!\n");
            }
        break;
    case 7:
        printf("\nYou Picked DAL CHAWAL for 20RS");
        printf("\nEnter amount to pay:");
        scanf("%d",&amt_to_pay);
        if (amt_to_pay>20)
            {
            printf("Here Your leftover amount:%d\n",amt_to_pay-20);
            }
        else if(amt_to_pay==20)
            {
            printf("Thanks For Purchase!\n");
            }
        else if(amt_to_pay<20)
            {
            printf("Your payment not successful! Please Try again!\n");
            }
        break;
    case 8:
        printf("\nYou Picked RAJMA for 15RS");
        printf("\nEnter amount to pay:");
        scanf("%d",&amt_to_pay);
        if (amt_to_pay>15)
            {
            printf("Here Your leftover amount:%d\n",amt_to_pay-15);
            }
        else if(amt_to_pay==15)
            {
            printf("Thanks For Purchase!\n");
            }
        else if(amt_to_pay<15)
            {
            printf("Your payment not successful! Please Try again!\n");
            }
        break;
    case 9:
        printf("\nYou Picked SPANISH TORTILLAS for 1000RS");
        printf("\nEnter amount to pay:");
        scanf("%d",&amt_to_pay);
        if (amt_to_pay>1000)
            {
            printf("Here Your leftover amount:%d\n",amt_to_pay-1000);
            }
        else if(amt_to_pay==1000)
            {
            printf("Thanks For Purchase!\n");
            }
        else if(amt_to_pay<1000)
            {
            printf("Your payment not successful! Please Try again!\n");
            }
        break;
    case 10:
        choice = 10;
    default:
        printf("Invalid Option!\n");
    }//switch ends here..
//menu again
printf("--------Vending Machine Project--------\n");
printf("1.)Samosa\t-5rs\t6.)Chola\t-35rs\n");
printf("2.)Biryani\t-40rs\t7.)Dal Chawal\t-20rs\n");
printf("3.)Chilifries\t-15rs\t8.)Rajma\t-15rs\n");
printf("4.)Chai\t\t-7rs\t9.)Spanish Toritllas\t-1000rs\n");
printf("5.)Pizza\t-100rs\t10.)Exit");
printf("\n--------------------------------------\n");
//menu ends here
printf("Enter the item number to be purchase:");
scanf("%d",&choice);

}//loop ends
printf("\nThanks For Using Vending Machine Project Made by Aman Verma!!\n");
return 0;
}//main ending bracket
