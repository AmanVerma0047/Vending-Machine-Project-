#include<stdio.h>
/*          Project Name: Vending Machine
            Made By: Aman Verma
            course: BCA 1st Semester
*/
//declaration of variables here
int choice;
int amt_to_pay;

// function
void fun(char food[],int price){
printf("\nYou Picked %s for %dRS!",food,price);
printf("\nEnter amount to pay:");
scanf("%d",&amt_to_pay);
if (amt_to_pay>price)
    {
    printf("Here Your leftover amount:%d\n",amt_to_pay-price);
    }
else if(amt_to_pay ==price)
    {
    printf("Thanks for purchase!\n");
    }
else if(amt_to_pay<price)
    {
    printf("Your payment not successful! Please Try again!\n");
    }
}



void main()
{
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
        fun("Samosa",5);
        break;

    case 2:
        fun("Biryani",40);
        break;
    case 3:
        fun("Chilifries",15);
        break;
    case 4:
        fun("Chai",7);
        break;
    case 5:
        fun("Pizza",100);
        break;
    case 6:
        fun("Chola",35);
        break;
    case 7:
        fun("Dal Chawal",20);
        break;
    case 8:
        fun("Rajma",15);
        break;
    case 9:
        fun("Spanish Tortilla",1000);
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
