#include<bits/stdc++.h>
#include<iostream>

using namespace std;


int main()
{
    string message;
    string endDelimiter="01111110";

    cout<<"Enter a message : ";
    cin>>message;
    string messageAfterDestuff=message;

    cout<<"Enter Message is :  --- "<<message;

    int find=0;

    do
    {
        find= message.find("11111",find);
        if(find!=-1)
        {
           message= message.insert(find+5,"0");
           find=find+6;
        }

    }while(find!=-1 && find<message.length());

    cout<<"\nMessage after stuffying is   : "<<message;

    cout<<"\nMessage after destuffying is : "<<messageAfterDestuff;
}