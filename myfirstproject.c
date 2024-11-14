#include<stdio.h>
int main() {
	
	int rock=1,scissors=2,paper=3;
	int choice1,choice2; //the choice of each player
	char aname1 [20]; //to declare the 1st player's name
	char aname2 [20]; //to declare the 2st player's name
	int win1=0,win2=0; //points
	int i;
	
	printf("Hello players!!\n\n");
	printf("User no1 give your name :");
	scanf("%s",aname1);
	printf("%s",aname1);
	printf("\nUser no2 give your name :");
	scanf("%s",aname2);
	printf("%s",aname2);

	printf("\nReady for 3 rounds?");
	printf("\n\n**********Lets start!**********");
	
	for (i=1;i<=3;i++){ //to repeat for 3 rounds
		do {
		printf("\n\n%s give your choise :",aname1);
	       printf("\n-----------------");
	       printf("\nPress 1,2 or 3");
	       printf("\n1.ROCK \n2.SCICCORS \n3.PAPER");
	       printf("\n-----------------\n");
	      scanf("%d",&choice1);
	       
	   printf("\n%s give your choise :",aname2);
	       printf("\n-----------------");
	       printf("\nPress 1,2 or 3");
	       printf("\n1.ROCK \n2.SCICCORS \n3.PAPER");
	       printf("\n-----------------\n");
	      scanf("%d",&choice2);
	   }while (!(choice1<=4 && choice2<=4)); //validity check

	if (choice1==1 && choice2==1){
		win1++;
		win2++;
			printf("%d<--->%d",win1,win2);
	}
	else if (choice1==2 && choice2==2){
		win1++;
		win2++;
	   	printf("%d<--->%d",win1,win2);
	}
	else if (choice1==3 && choice2==3){
		win1++;
		win2++;
	   	printf("%d<--->%d",win1,win2);
	}
    else if (choice1==1 && choice2==2){
    	win1++;
			printf("%d<--->%d",win1,win2);
	}
    else if (choice1==2 && choice2==1){
    	win2++;
			printf("%d<--->%d",win1,win2);
	}
	else if (choice1==3 && choice2==2){
		win2++;
			printf("%d<--->%d",win1,win2);
	}
	else if (choice1==3 && choice2==1){
		win1++;
		 printf("%d<--->%d",win1,win2);
	}
	else if (choice1==2 && choice2==3){
		win1++;
		  printf("%d<--->%d",win1,win2);
	}
	else if (choice1==1 && choice2==3){
		win2++;
		  printf("%d<--->%d",win1,win2);
	}
	
	     }
	   printf("\n--------------------------------");	
	   printf("\n--------------------------------");
	   printf("\n--------------------------------");      
	 printf("\n%s your score is: %d points.",aname1,win1);
	 printf("\n%s your score is: %d points.",aname2,win2);
	 printf("\n%d<--->%d",win1,win2);
	 if (win1>win2){
	 	printf("\n\n**Winner is %s**",aname1);
	 }
	 else if (win1<win2){
	 	printf("\n\n**Winner is %s**",aname2);
	 }
	else if (win1==win2){
		printf("\n\n**Game is Draw**");
	}

} 









