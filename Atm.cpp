#include<stdio.h>
#include<windows.h>
#include<time.h>
int main()
{
     system("color 3E");//change the colour of console
    // 0 = Black       8 = Gray
    // 1 = Blue        9 = Light Blue
    // 2 = Green       A = Light Green
    // 3 = Aqua        B = Light Aqua
    // 4 = Red         C = Light Red
    // 5 = Purple      D = Light Purple
    // 6 = Yellow      E = Light Yellow
    // 7 = White       F = Bright White

    int pin=1234,option,count=0,amount=1,enteredpin;//option:withdraw the money ,or ccheck the balance,depsoting the money from atm
    //count:shows how many times user entered the invalid pin by user if  user entered the  pin more than three times
    float balance=5000;
    int continuetransaction=1;
    //continue..:keep track whether the user want to  continue transaction or not
    time_t now;
    time(&now);
    printf("\n");
    printf("\t\t\t\t\t              %s",ctime(&now));
      printf("\t\t\t\t##############################   *WELCOME TO RMP ATM*   ##############################");
      while(pin!=enteredpin) 
      {
        printf("\nEnter the pin :");
        scanf("%d",&enteredpin);
        if(enteredpin!=pin)
        {
       Beep(610,500);//Beep(frequency of sound,duration);
       printf("invalid pin\n");
        }
        count++;
        if(count==3 && pin!=enteredpin)
        {
            exit(0);
        }

      } 
      while(continuetransaction!=0)
      {
    
           printf("\n\t\t\t\t########################*AVAILABLE TRANSACTIONS*#################################");
           printf("\n\n\t\t1.Withdrawl");
           printf("\n\t\t2.Deposit");
           printf("\n\t\t3.Check Balance");
           printf("\nplease select the option:");
           scanf("%d",&option);
           switch(option)
           {
            case 1:
                   while(amount%500 !=0)
                   {
                    printf("\n\t\tEnter amount: ");
                    scanf("%d",&amount);
                    if(amount%500!=0)
                    {
                        printf("\n\t\tAmount should be multiple of 500");//amount should be multipke of 500
                    }
                   }
                   if(balance<amount)
                   {
                   printf("\n\t\tsorry insufficint balance");
                   amount=1;
                   break;
                   }
                   else
                   {
                    balance=balance-amount;
                    printf("\n\t\tYou have withdrawn Rs.%d new balance is %.2f",amount,balance);
                    amount=1;
                    break;
                   }
            case 2:
              printf("\n\t\tPlease enter the amount:");
              scanf("%d",&amount);
              balance+=amount;
              printf("\n\t\tYou have deposited Rs.%d.Your new balance is %.2f",amount,balance);
              printf("\n\t\t############################################# *THANK YOU FOR BANKING WITH RMP BANK*   ###########################################");
               amount=1;
              break;



            case 3:
                  printf("\n\t\tYour balance is Rs.%.2f",balance);
                  break;
           


             default:
                     Beep(610,520);
                     printf("\n\t\tInvalid option!!!");
                  
              


           }
      
      printf("\n\t\tDo you wish to perform another transaction? Press1[YES],0[NO]");
      scanf("%d",&continuetransaction);
      
      }
}