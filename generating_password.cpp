#include<iostream>
#include<ctime>
#include<string>
#include<bits/stdc++.h>
using namespace std;

string getpassword(int len)
{
   string password="";
   string characters="aquickbrownfoxjumpsoverthelazydogABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890@";
   int charsize=characters.size();
   srand(time(0));
   int randomindex;
   for(int i=0;i<len;i++)
   {
      randomindex=rand()%charsize;
      password=password+characters[randomindex];
   }
   return password;
}
int main()
{
    int len;
    cout<<"enter the length of the password:\n";
    cin>>len;
    string password=getpassword(len);
    cout<<"generated password:"<<password;
}
