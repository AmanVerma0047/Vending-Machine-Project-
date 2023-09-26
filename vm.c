#include<stdio.h>

void print_options();
void print_menu();


int option;
int choice;
int amt_to_pay;


void print_options(){
    printf("--------Vending Machine--------\n");
    printf("1.)Open Menu\n");
    printf("2.)Open Cart\n");
    printf("3.)Exit\n");
	//options ends here
	printf("Enter the option:");
	scanf("%d",&option);

	switch(option){
	case 1:print_menu();
           break;
    case 2:printf("need to be work on!!");
           break;
    case 3:printf("\nThanks For Using Vending Machine Project Made by Aman Verma!!\n");
           exit(1);
	}

}

void print_menu(){

	printf("--------Menu--------\n");
	printf("1.)Samosa\t-5rs\t6.)Chola\t-35rs\n");
	printf("2.)Biryani\t-40rs\t7.)Dal Chawal\t-20rs\n");
	printf("3.)Chilifries\t-15rs\t8.)Rajma\t-15rs\n");
	printf("4.)Chai\t\t-7rs\t9.)Spanish Toritllas\t-1000rs\n");
	printf("5.)Pizza\t-100rs\t10.)Close Menu");
	printf("\n--------------------------------------\n");
	//menu ends here
	printf("Enter the item number to be purchase:");
	scanf("%d",&choice);
}


void main(){
	do{
       print_options();

	}while(choice!=10);

}//main closed!!
