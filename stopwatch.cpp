#include<iostream>
#include<windows.h>
#include<unistd.h>
#include<cstdlib>
using namespace std;
int main()
{
    short minutes,seconds;
    int time;
    do
    {
        cout<<"enter seconds: ";
        cin>>seconds;

    }while(seconds>59);
    do
    {
         cout<<"enter minutes: ";
        cin>>minutes;

    }while(minutes>59);
    time=(minutes!=0)?minutes*60:0;
    time+=seconds;
    for(int i=time;i>0;i--)
    {
        system("cls");
        cout<<"The time remaining is 0:"<<minutes<<":"<<seconds<<endl;
        minutes=(i%60==0)?--minutes:minutes;
        seconds=(seconds==0)?59:--seconds;
        //execution will stop for 1 sec before moving on
        //system("sleep 1");or system("TIMEOUT 1");
        sleep(1);
    }
    system("cls");
    cout<<"**************************************************\n\t\tTIMER ENDED!\a\n\t\tLasted for "<<time<<" seconds"<<"\n*****************************************************\n"<<endl;
    return 0;
}