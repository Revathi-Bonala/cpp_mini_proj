#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
void login();
void registration();
void forgot();
int main()
{
    int c;
    cout<<"\t\t\t\a_______________________________________________________________________________________\n\n\n";

    cout<<"\t\t\t\a                              WELCOME TO THE LOGIN PAGE      \a\n\n\n";
     cout<<"\t\t\t\a_______________________________________________________________________________________\n\n\n";
    cout<<"\t\t\t___________________________________*** MENU***     ___________________________________\n\n";
    cout<<"                                                                              \n\n";        
    cout<<"\t|press 1 to LOGIN                         |"<<endl;
    cout<<"\t|press 2 to REGISTER                      |"<<endl;
    cout<<"\t|press 3 if you forgot your PASSWORD      |"<<endl;
    cout<<"\t|press 4 to EXIT                          |"<<endl;
    cout<<"\n\t\t\t please enter your choice:";
    cin>>c;
    switch(c)
    {
        case 1:
            login();
            break;
         case 2:
             registration();
             break;
         case 3:
              forgot();
              break;
        case 4:
            cout<<"___________________________________THANK YOU__________________________________________\n"; 
            break;
            default:
            system("cls");
                cout<<"\t\t\t please select from the options given below\n"<<endl;
                main();
    }

}
void login()
{
    int count;
    string userId,Password,id,pass;
    system("cls");
    cout<<"\t\t\t Please enter the username and password:"<<endl;
    cout<<"\t\t\t USERNAME ";
    cin>>userId;
        cout<<"\t\t\t PASSWORD ";
    cin>>Password;
    //ifstream class is used to read the data from the file
    ifstream input("records.txt");
    while(input>>id>>pass)//reading id and passord is there exit in file
    {
        if(id==userId && pass==Password)
        {
            count=1;//count=1 indicates the entered password and id merges with file or already the id registered by user
            system("cls");
        }
    }
    input.close();//closing the file
    if(count==1)
    {
        cout<<userId<<"\n Your LOGIN is successful\n Thanks for logging in! \n";
        main();
    }
    else
    {
        cout<<"\n LOGIN ERROR \n Please check your username and password\n";
        main();
    }

}
void registration()
{
    string ruserid,rpassword,rid,rpass;
    system("cls");
    cout<<"\t\t\t Enter the username :";
    cin>>ruserid;
    cout<<"\t\t\t Enter the password :";
    cin>>rpassword;
    ofstream f1("records.txt",ios::app);
    //this class is offstream class used to write inside the file
    //ios input output stream
    //app mode open the file and append the output in the end
    f1<<ruserid<<" "<<rpassword<<endl;
    system("cls");
    cout<<"\t\t\t______________Registration is successful_______________\n\n";
}
void forgot()
{
    int option;
   
    cout<<"\t\t\t Press 1 to check the password in file\n";
    cout<<"\t\t\t Press 2 to back to menu\n";
    cout<<"\t\t\t Enter the option:";
    cin>>option;
   
    switch(option)
    {
        case 1:
        {
             string suserid,spassword,sid,spass;
             int count=0;
             cout<<"\n\t\t\t Enter the remembered username:";
             cin>>suserid;
             ifstream f2("records.txt");
    
    while(f2>>sid>>spass)
    {
        if(sid==suserid)
        {
            count=1;
          
        }
    }
    if(count==1)
    {
        cout<<"\n\n Your account is found!\n";
        cout<<"\n\n Your password is:"<<spass;
        main();
    }
    else
    {
        cout<<"\n\t Sorry! Your account is not found!\n";
        main();
    }
    break;
        }
        case 2:
        {
         main();
        }
        default:
               cout<<"\t\t\t Wrong choice!Please try again"<<endl;
               forgot();
    }
}
