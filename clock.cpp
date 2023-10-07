#include<bits/stdc++.h>
//  #include<stdio.h>
#include<windows.h>
#include<unistd.h>//includes the sleep function
 using namespace std;
int main()
{
    int h,m,s;
    int d=1;//difference in one second or delay of 1 thousand  milliseconds and we will use in the function sleep
     printf("set time:\n");
  cout<<"set time:\n";
    cin>>h>>m>>s;
    // scanf("%d%d%d",&h,&m,&s);
    if(h>12||m>60||s>60)
    {
        cout<<"Error!\n";
        // printf("Error\n");
        exit(0);

    }
    while(1)//this is an infinite loop and anything inside will repeat itself to ifinity
    {
        s++;
        if(s>59)
        {
            m++;
            s=0;
        }
        if(m>59)
        {
            h++;
            m=0;
        }
        if(h>12)
        {
            h=1;
        }
        cout<<"\nClock:";
        // printf("\nClock");
        printf("\n%02d:%02d:%02d",h,m,s);//output is in format of 00:00:00
        sleep(d);//this slows down the  while loop  and mke it more like a real clock;
        system("cls");//zclear the screen
    }
}