#include <stdio.h>
#include <stdlib.h>
#include <conio.h> 
int main()
{
char c,ch1;
long int k,pin,ch,n,j=0,z;
long int cash,d,i=0;
int a1,b1,c1,d1,f1,g1,h1;
int a2,b2,c2,d2,f2,g2,h2;
int a3,b3,c3,d3,f3,g3,h3;
struct file
{
long int acc;
long int pin;
char name[100];
int dcash;
int wcash;
float bal;
};
struct file f[3];
FILE *fp;
FILE *fp2;
FILE *fp3;
FILE *fp4;
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("                            **********************                  \n");
printf("                            $    !!!WELCOME!!!   $                  \n");
printf("                            $       TO THE       $                  \n");
printf("                            $ ATM BANKING SYSTEM $                 \n");
printf("                            **********************                 \n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("                               ||PRESS ENTER||                            \n");
if(scanf("%c",&c))
{
Lab1:
system("cls");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("                        Enter Your Record No.: ");
scanf("%d",&z);
printf("\n");
printf("                        Enter Your Name: ");
scanf("%s",f[z-1].name);
printf("\n");
printf("                        Enter Your Account Number: ");
scanf("%ld",&f[z-1].acc);
printf("\n");
printf("                        Enter Your PIN: ");
scanf("%ld",&f[z-1].pin);
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
if(f[z-1].pin==1234 && f[z-1].acc==121567)
{
system("cls");
Label:
printf("Name:%s                                                         Acc.No:%ld",f[z-1].name,f[z-1].acc);
printf("\n\n");
printf("        ----------------------------MAIN MENU----------------------------             \n");
printf("                                 1.CASH DEPOSIT\n");
printf("                                 2.CASH WITHDRAWL\n");
printf("                                 3.BALANCE\n");
printf("                                 4.RECORDS\n");
printf("                                 5.EXIT\n");
printf("\n\n");
printf("Enter the Choice: ");
scanf("%ld",&ch);
printf("\n\n\n");
switch(ch)
{
case 1:
system("cls");
fp=fopen("Bill1.1.txt","a");
printf("Enter Your Name:");
scanf("%s",f[z-1].name);
printf("\nEnter the Cash Deposits:$");
scanf("%d",&f[z-1].dcash);
fprintf(fp,"%s %d ",f[z-1].name,f[z-1].dcash);
fclose(fp);
scanf("%c",&ch1);
printf("\nDo you want to continue?<y/n>");
scanf("%c",&ch1);
if(ch1=='y')
{
	
	system("cls");
	goto Label;
}
else
{
	system("cls");
	goto Lab2;
}
break;

case 2:
system("cls");
fp2=fopen("Bill1.2.txt","a");
l1:
printf("Enter the Cash Withdraw:$");
scanf("%d",&f[z-1].wcash);
if(f[z-1].wcash<=f[z-1].dcash)
{
fprintf(fp2,"%d ",f[z-1].wcash);
a1=f[z-1].wcash/500;
	printf("number of 500 rupees notes: %d\n",a1);
	printf("\n");
	f[z-1].wcash=f[z-1].wcash%500;
	b1=f[z-1].wcash/100;
	printf("number of 100 rupees notes: %d\n",b1);
	printf("\n");
	f[z-1].wcash=f[z-1].wcash%100;
	c1=f[z-1].wcash/50;
	printf("number of 50 rupees notes: %d\n",c1);
	printf("\n");
	f[z-1].wcash=f[z-1].wcash%50;
	d1=f[z-1].wcash/20;
	printf("number of 20 rupees notes: %d\n",d1);
	printf("\n");
	f[z-1].wcash=f[z-1].wcash%20;
	f1=f[z-1].wcash/10;
	printf("number of 10 rupees notes: %d\n",f1);
	printf("\n");
	f[z-1].wcash=f[z-1].wcash%10;
	g1=f[z-1].wcash/5;
	printf("number of 5 rupees notes: %d\n",g1);
	printf("\n");
	f[z-1].wcash=f[z-1].wcash%5;
	h1=f[z-1].wcash/2;
	printf("number of 2 rupees notes: %d\n",h1);
	printf("\n");
	printf("\n");
	f[z-1].wcash=f[z-1].wcash%2;
	printf("number of 1 Rupee notes: %d\n",f[z-1].wcash);
	printf("\n");
}
else
{
system("cls");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("                        Cannot Possible to Withdraw.Try once Again!");
scanf("%c",&ch1);
system("cls");
goto l1;
}
fclose(fp2);
scanf("%c",&ch1);
printf("\nDo you want to continue?<y/n>");
scanf("%c",&ch1);
if(ch1=='y')
{
	system("cls");
	goto Label;
}
else
{
	system("cls");
	goto Lab2;
}
break;

case 3:
system("cls");
printf("Your Balance:$");
fp=fopen("Bill1.1.txt","r+");
fscanf(fp,"%d",&f[z-1].dcash);
fclose(fp);
fp2=fopen("Bill1.2.txt","r+");
fscanf(fp2,"%d",&f[z-1].wcash);
fclose(fp2);
fp3=fopen("Bill1.3.txt","a+");
f[z-1].bal=f[z-1].dcash-f[z-1].wcash;
fprintf(fp3,"%f ",f[z-1].bal);
printf("%.2f",f[z-1].bal);
fclose(fp3);
scanf("%c",&ch1);
printf("\nDo you want to continue?<y/n>");
scanf("%c",&ch1);
if(ch1=='y')
{
	system("cls");
	goto Label;
}
else
{
	system("cls");
	goto Lab2;
}
break;

case 4:
system("cls");
printf("Acc.No | Name | Cash-Deposited | Cash-Withdraw | Balance\n");
printf("---------------------------------------------------------\n");
fp=fopen("Bill1.1.txt","r+");
fp2=fopen("Bill1.2.txt","r+");
fp3=fopen("Bill1.3.txt","r+");
fscanf(fp,"%s %d",f[z-1].name,&f[z-1].dcash);
fscanf(fp2,"%d",&f[z-1].wcash);
fscanf(fp3,"%f",&f[z-1].bal);
printf("%ld | %s|   %d         |       %d     |  %f\n",f[z-1].acc,f[z-1].name,f[z-1].dcash,f[z-1].wcash,f[z-1].bal);
n=ftell(fp);
fseek(fp,n,0);
fscanf(fp,"%s %d",f[z-1].name,&f[z-1].dcash);
n=ftell(fp2);
fseek(fp2,n,0);
fscanf(fp2,"%d",&f[z-1].wcash);
n=ftell(fp3);
fseek(fp3,n,0);
fscanf(fp3,"%f",&f[z-1].bal);
printf("%ld | %s|   %d         |       %d     |  %f\n",f[z-1].acc,f[z-1].name,f[z-1].dcash,f[z-1].wcash,f[z-1].bal);
n=ftell(fp);
fseek(fp,n,0);
fscanf(fp,"%s %d",f[z-1].name,&f[z-1].dcash);
n=ftell(fp2);
fseek(fp2,n,0);
fscanf(fp2,"%d",&f[z-1].wcash);
n=ftell(fp3);
fseek(fp3,n,0);
fscanf(fp3,"%f",&f[z-1].bal);
printf("%ld | %s|   %d         |       %d     |  %f\n",f[z-1].acc,f[z-1].name,f[z-1].dcash,f[z-1].wcash,f[z-1].bal);
fclose(fp3);
fclose(fp2);
fclose(fp);
scanf("%c",&ch1);
scanf("%c",&ch1);
printf("\nDo you want to continue?<y/n>");
scanf("%c",&ch1);
if(ch1=='y')
{
	system("cls");
	goto Label;
}
else
{
	system("cls");
	goto Lab2;
}
break;

case 5:
	Lab2:
	system("cls");
	printf("                              THANK YOU!!!!\n");
	printf("                          TO VISIT OUR ATM BANK.\n");
	printf("\n");
	printf("                                 *   *\n");
	printf("                                *** ***\n");
	printf("                                 *   *\n");
	printf("                                   ^\n");
	printf("                             *           *\n");
	printf("                               *       *\n");
	printf("                                 *****\n");
	printf("\n");
	printf("                            HAVE A GOOD DAY!!");
	system("exit");
	break;
	
}
}
else if(f[z-1].pin==1212 && f[z-1].acc==121456)
{
system("cls");
Label1:
printf("Name:%s                                                      Acc.No:%ld",f[z-1].name,f[z-1].acc);
printf("\n\n");
printf("        ----------------------------MAIN MENU----------------------------             \n");
printf("                                 1.CASH DEPOSIT\n");
printf("                                 2.CASH WITHDRAWL\n");
printf("                                 3.BALANCE\n");
printf("                                 4.RECORDS\n");
printf("                                 5.EXIT\n");
printf("\n\n");
printf("Enter the Choice: ");
scanf("%ld",&ch);
printf("\n\n\n");
switch(ch)
{
case 1:
system("cls");
fp=fopen("Bill2.1.txt","a");
printf("Enter Your Name:");
scanf("%s",f[z-1].name);
printf("\nEnter the Cash Deposits:$");
scanf("%d",&f[z-1].dcash);
fprintf(fp,"%s %d ",f[z-1].name,f[z-1].dcash);
fclose(fp);
scanf("%c",&ch1);
printf("\nDo you want to continue?<y/n>");
scanf("%c",&ch1);
if(ch1=='y')
{
	system("cls");
	goto Label1;
}
else
{
	system("cls");
	goto Lab21;
}
break;

case 2:
system("cls");
fp2=fopen("Bill2.2.txt","a");
l12:
printf("Enter the Cash Withdraw:$");
scanf("%d",&f[z-1].wcash);
a2=f[z-1].wcash/500;
	printf("number of 500 rupees notes: %d\n",a2);
	printf("\n");
	f[z-1].wcash=f[z-1].wcash%500;
	b2=f[z-1].wcash/100;
	printf("number of 100 rupees notes: %d\n",b2);
	printf("\n");
	f[z-1].wcash=f[z-1].wcash%100;
	c2=f[z-1].wcash/50;
	printf("number of 50 rupees notes: %d\n",c2);
	printf("\n");
	f[z-1].wcash=f[z-1].wcash%50;
	d2=f[z-1].wcash/20;
	printf("number of 20 rupees notes: %d\n",d2);
	printf("\n");
	f[z-1].wcash=f[z-1].wcash%20;
	f2=f[z-1].wcash/10;
	printf("number of 10 rupees notes: %d\n",f2);
	printf("\n");
	f[z-1].wcash=f[z-1].wcash%10;
	g2=f[z-1].wcash/5;
	printf("number of 5 rupees notes: %d\n",g2);
	printf("\n");
	f[z-1].wcash=f[z-1].wcash%5;
	h2=f[z-1].wcash/2;
	printf("number of 2 rupees notes: %d\n",h2);
	printf("\n");
	printf("\n");
	f[z-1].wcash=f[z-1].wcash%2;
	printf("number of 1 Rupee notes: %d\n",f[z-1].wcash);
	printf("\n");
if(f[z-1].wcash<=f[z-1].dcash)
{
fprintf(fp2,"%d ",f[z-1].wcash);
}
else
{
system("cls");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("                        Cannot Possible to Withdraw.Try once Again!");
scanf("%c",&ch1);
system("cls");
goto l12;
}
fclose(fp2);
scanf("%c",&ch1);
printf("\nDo you want to continue?<y/n>");
scanf("%c",&ch1);
if(ch1=='y')
{
	system("cls");
	goto Label1;
}
else
{
	system("cls");
	goto Lab21;
}
break;

case 3:
system("cls");
printf("Your Balance:$");
fp=fopen("Bill2.1.txt","r+");
fscanf(fp,"%d",&f[z-1].dcash);
fclose(fp);
fp2=fopen("Bill2.2.txt","r+");
fscanf(fp2,"%d",&f[z-1].wcash);
fclose(fp2);
fp3=fopen("Bill2.3.txt","a+");
f[z-1].bal=f[z-1].dcash-f[z-1].wcash;
fprintf(fp3,"%f ",f[z-1].bal);
printf("%.2f",f[z-1].bal);
fclose(fp3);
scanf("%c",&ch1);
printf("\nDo you want to continue?<y/n>");
scanf("%c",&ch1);
if(ch1=='y')
{
	system("cls");
	goto Label1;
}
else
{
	system("cls");
	goto Lab21;
}
break;

case 4:
system("cls");
printf("Acc.No | Name | Cash-Deposited | Cash-Withdraw | Balance\n");
printf("---------------------------------------------------------\n");
fp=fopen("Bill2.1.txt","r+");
fp2=fopen("Bill2.2.txt","r+");
fp3=fopen("Bill2.3.txt","r+");
fscanf(fp,"%s %d",f[z-1].name,&f[z-1].dcash);
fscanf(fp2,"%d",&f[z-1].wcash);
fscanf(fp3,"%f",&f[z-1].bal);
printf("%ld | %s|   %d         |       %d     |  %f\n",f[z-1].acc,f[z-1].name,f[z-1].dcash,f[z-1].wcash,f[z-1].bal);
n=ftell(fp);
fseek(fp,n,0);
fscanf(fp,"%s %d",f[z-1].name,&f[z-1].dcash);
n=ftell(fp2);
fseek(fp2,n,0);
fscanf(fp2,"%d",&f[z-1].wcash);
n=ftell(fp3);
fseek(fp3,n,0);
fscanf(fp3,"%f",&f[z-1].bal);
printf("%ld | %s|   %d         |       %d     |  %f\n",f[z-1].acc,f[z-1].name,f[z-1].dcash,f[z-1].wcash,f[z-1].bal);
n=ftell(fp);
fseek(fp,n,0);
fscanf(fp,"%s %d",f[z-1].name,&f[z-1].dcash);
n=ftell(fp2);
fseek(fp2,n,0);
fscanf(fp2,"%d",&f[z-1].wcash);
n=ftell(fp3);
fseek(fp3,n,0);
fscanf(fp3,"%f",&f[z-1].bal);
printf("%ld | %s|   %d         |       %d     |  %f\n",f[z-1].acc,f[z-1].name,f[z-1].dcash,f[z-1].wcash,f[z-1].bal);
fclose(fp3);
fclose(fp2);
fclose(fp);
scanf("%c",&ch1);
scanf("%c",&ch1);
printf("\nDo you want to continue?<y/n>");
scanf("%c",&ch1);
if(ch1=='y')
{
	system("cls");
	goto Label1;
}
else
{
	system("cls");
	goto Lab21;
}
break;

case 5:
	Lab21:
	system("cls");
	printf("                              THANK YOU!!!!\n");
	printf("                          TO VISIT OUR ATM BANK.\n");
	printf("\n");
	printf("                                 *   *\n");
	printf("                                *** ***\n");
	printf("                                 *   *\n");
	printf("                                   ^\n");
	printf("                             *           *\n");
	printf("                               *       *\n");
	printf("                                 *****\n");
	printf("\n");
	printf("                            HAVE A GOOD DAY!!");
	system("exit");
	break;
}
}
else if(f[z-1].pin==1313 && f[z-1].acc==121899)
{
system("cls");
Label13:
printf("Name:%s                                                      Acc.No:%ld",f[z-1].name,f[z-1].acc);
printf("\n\n");
printf("        ----------------------------MAIN MENU----------------------------             \n");
printf("                                 1.CASH DEPOSIT\n");
printf("                                 2.CASH WITHDRAWL\n");
printf("                                 3.BALANCE\n");
printf("                                 4.RECORDS\n");
printf("                                 5.EXIT\n");
printf("\n\n");
printf("Enter the Choice: ");
scanf("%ld",&ch);
printf("\n\n\n");
switch(ch)
{
case 1:
system("cls");
fp=fopen("Bill3.1.txt","a");
printf("Enter Your Name:");
scanf("%s",f[z-1].name);
printf("\nEnter the Cash Deposits:$");
scanf("%d",&f[z-1].dcash);
fprintf(fp,"%s %d ",f[z-1].name,f[z-1].dcash);
fclose(fp);
scanf("%c",&ch1);
printf("\nDo you want to continue?<y/n>");
scanf("%c",&ch1);
if(ch1=='y')
{
	system("cls");
	goto Label13;
}
else
{
	system("cls");
	goto Lab22;
}
break;

case 2:
system("cls");
fp2=fopen("Bill3.2.txt","a");
l13:
printf("Enter the Cash Withdraw:$");
scanf("%d",&f[z-1].wcash);
if(f[z-1].wcash<=f[z-1].dcash)
{
fprintf(fp2,"%d ",f[z-1].wcash);
a2=f[z-1].wcash/500;
	printf("number of 500 rupees notes: %d\n",a3);
	printf("\n");
	f[z-1].wcash=f[z-1].wcash%500;
	b3=f[z-1].wcash/100;
	printf("number of 100 rupees notes: %d\n",b3);
	printf("\n");
	f[z-1].wcash=f[z-1].wcash%100;
	c3=f[z-1].wcash/50;
	printf("number of 50 rupees notes: %d\n",c3);
	printf("\n");
	f[z-1].wcash=f[z-1].wcash%50;
	d3=f[z-1].wcash/20;
	printf("number of 20 rupees notes: %d\n",d3);
	printf("\n");
	f[z-1].wcash=f[z-1].wcash%20;
	f3=f[z-1].wcash/10;
	printf("number of 10 rupees notes: %d\n",f3);
	printf("\n");
	f[z-1].wcash=f[z-1].wcash%10;
	g3=f[z-1].wcash/5;
	printf("number of 5 rupees notes: %d\n",g3);
	printf("\n");
	f[z-1].wcash=f[z-1].wcash%5;
	h3=f[z-1].wcash/2;
	printf("number of 2 rupees notes: %d\n",h3);
	printf("\n");
	printf("\n");
	f[z-1].wcash=f[z-1].wcash%2;
	printf("number of 1 Rupee notes: %d\n",f[z-1].wcash);
	printf("\n");
}
else
{
system("cls");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("                        Cannot Possible to Withdraw.Try once Again!");
scanf("%c",&ch1);
system("cls");
goto l13;
}
fclose(fp2);
scanf("%c",&ch1);
printf("\nDo you want to continue?<y/n>");
scanf("%c",&ch1);
if(ch1=='y')
{
	system("cls");
	goto Label13;
}
else
{
	system("cls");
	goto Lab22;
}
break;

case 3:
system("cls");
printf("Your Balance:$");
fp=fopen("Bill3.1.txt","r+");
fscanf(fp,"%d",&f[z-1].dcash);
fclose(fp);
fp2=fopen("Bill3.2.txt","r+");
fscanf(fp2,"%d",&f[z-1].wcash);
fclose(fp2);
fp3=fopen("Bill3.3.txt","a+");
f[z-1].bal=f[z-1].dcash-f[z-1].wcash;
fprintf(fp3,"%f ",f[z-1].bal);
printf("%.2f",f[z-1].bal);
fclose(fp3);
scanf("%c",&ch1);
printf("\nDo you want to continue?<y/n>");
scanf("%c",&ch1);
if(ch1=='y')
{
	system("cls");
	goto Label13;
}
else
{
	system("cls");
	goto Lab22;
}
break;

case 4:
system("cls");
printf("Acc.No | Name | Cash-Deposited | Cash-Withdraw | Balance\n");
printf("---------------------------------------------------------\n");
fp=fopen("Bill3.1.txt","r+");
fp2=fopen("Bill3.2.txt","r+");
fp3=fopen("Bill3.3.txt","r+");
fscanf(fp,"%s %d",f[z-1].name,&f[z-1].dcash);
fscanf(fp2,"%d",&f[z-1].wcash);
fscanf(fp3,"%f",&f[z-1].bal);
printf("%ld | %s|   %d         |       %d     |  %f\n",f[z-1].acc,f[z-1].name,f[z-1].dcash,f[z-1].wcash,f[z-1].bal);
n=ftell(fp);
fseek(fp,n,0);
fscanf(fp,"%s %d",f[z-1].name,&f[z-1].dcash);
n=ftell(fp2);
fseek(fp2,n,0);
fscanf(fp2,"%d",&f[z-1].wcash);
n=ftell(fp3);
fseek(fp3,n,0);
fscanf(fp3,"%f",&f[z-1].bal);
printf("%ld | %s|   %d         |       %d     |  %f\n",f[z-1].acc,f[z-1].name,f[z-1].dcash,f[z-1].wcash,f[z-1].bal);
n=ftell(fp);
fseek(fp,n,0);
fscanf(fp,"%s %d",f[z-1].name,&f[z-1].dcash);
n=ftell(fp2);
fseek(fp2,n,0);
fscanf(fp2,"%d",&f[z-1].wcash);
n=ftell(fp3);
fseek(fp3,n,0);
fscanf(fp3,"%f",&f[z-1].bal);
printf("%ld | %s|   %d         |       %d     |  %f\n",f[z-1].acc,f[z-1].name,f[z-1].dcash,f[z-1].wcash,f[z-1].bal);
fclose(fp3);
fclose(fp2);
fclose(fp);
scanf("%c",&ch1);
scanf("%c",&ch1);
printf("\nDo you want to continue?<y/n>");
scanf("%c",&ch1);
if(ch1=='y')
{
	system("cls");
	goto Label13;
}
else
{
	system("cls");
	goto Lab22;
}
break;

case 5:
	Lab22:
	system("cls");
	printf("                              THANK YOU!!!!\n");
	printf("                          TO VISIT OUR ATM BANK.\n");
	printf("\n");
	printf("                                 *   *\n");
	printf("                                *** ***\n");
	printf("                                 *   *\n");
	printf("                                   ^\n");
	printf("                             *           *\n");
	printf("                               *       *\n");
	printf("                                 *****\n");
	printf("\n");
	printf("                            HAVE A GOOD DAY!!");
	system("exit");
	break;
}
}
else
{
	system("cls");
	scanf("%c",&ch1);
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("                           OHH....INCORRECT PASSWORDS!!\n");
	printf("                                    Try Again!!");
	scanf("%c",&ch1);
	if(j==3)
	{
		goto Lab22;
	}
	else
	{
		j++;
		goto Lab1;
	}
}
}
return 0;
}


