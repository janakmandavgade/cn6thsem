#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string message;
    cout<<"enter a message : ";
    cin>>message;

    string flag="flag";
    string esc="esc";

    int find=0;
    int findesc=0;
    do
    {
        findesc=message.find(esc,findesc);
        if(findesc!=-1)
        {
            message=message.insert(findesc,esc);
            cout<<"\nMessage "<<message;
            findesc+=6;
        }


    }while( findesc!=-1 && findesc<message.length());

    do
    {
        find=message.find(flag,find);
        if(find!=-1)
        {
            message=message.insert(find,esc);
            cout<<"\nMessage "<<message;
            find=find+7;
        }
        
    }while(find!=-1 && find<message.length());

    cout<<"\nMessage After Stuffing    :  "<<message;

}