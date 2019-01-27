#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
clrscr();
unsigned long amount=1000,deposit,withdraw;
int choice,pin,k;
while(pin!=1500)
{
cout<<"enter your pin number";
cin>>pin;
if(pin!=1500)
cout<<"please enter valid password\n";
}
char transaction='y';
do
{
cout<<"--------------------welcome to atm service---------------"<<endl;
cout<<"1.check balance\n";
cout<<"2.withdraw cash\n";
cout<<"3.deposite money\n";
cout<<"4.quit\n";
cout<<"--------------------------------------------------\n\n";
cout<<"enter your choice: ";
cin>>choice;
switch(choice)
{
case 1:
cout<<"\n your balance in rs:"<<amount;
break;
case 2:
cout<<"\n enter amount you want to withdraw:";
cin>>withdraw;
if(withdraw % 100 !=0)
{
cout<<"\n please enter amount in multiple of 100";
}
else if(withdraw>(amount-500))
{
cout<<"\n insufficient balance";
}
else
{
amount=amount-withdraw;
cout<<"\n please collect cash";
cout<<"\n your current balance is"<<amount;
}
break;
case 3:
cout<<"\n enter the amount to deposit";
cin>>deposit;
amount=amount+deposit;
cout<<"your balance is :"<<amount;
break;
case 4:
cout<<"\n thanks for using atm";
break;
default:
cout<<"\n invalid choice";
}
cout<<"\n\n\n do you wish to do another transaction?(y/n):\n";
fflush(stdin);
cin>>transaction;
if(transaction=='n'||transaction=='N')
k=1;
}while(k!=1);
cout<<"\n thanks fot using ATM service";
getch();
}