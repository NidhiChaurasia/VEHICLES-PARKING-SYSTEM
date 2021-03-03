#include<iostream>
using namespace std;
int main()
{
    int c=0;
    int r=0;
    int b=0;
    int u_input;
    int amount=0,count=0;
    //menu
    while(true)
    {
    cout<<"Press 1 for Rickshaw"<<endl;
    cout<<"Press 2 for Bus"<<endl;
    cout<<"Press 3 for Car"<<endl;
    cout<<"Press 4 to show record"<<endl;
    cout<<"Press 5 to delete the record"<<endl;
    cin>>u_input;
    if(u_input==1)
    {
        if(count<=50)
        {
            r++;
        amount=amount+100;
        count=count+1;
    }
    else
        cout<<"No more vehicles,Parking is full"<<endl;
    }
   else if(u_input==2)
    {
        if(count<=50)
        {
            b++;
        amount=amount+200;
        count=count+1;
    }
    else
        cout<<"No more vehicles,Parking is full"<<endl;
    }
    else if(u_input==3)
    {
        if(count<=50)
        {
            c++;
        amount=amount+100;
        count=count+1;
    }
    else
        cout<<"No more vehicles,Parking is full"<<endl;
    }
    else if(u_input==4)
    {
        cout<<"******************"<<endl;
        cout<<"The total amount ="<<amount<<endl;
        cout<<"The total number of vehicles parked ="<<count<<endl;
        cout<<"Total no. of Car Parked="<<c<<endl;
        cout<<"Total no. of Bus Parked="<<b<<endl;
        cout<<"Total no. of Rickshaw Parked="<<r<<endl;

    }
   else if(u_input==5)
    {
        amount=0;
        count=0;
        r=0;
        b=0;
        c=0;
        cout<<"***************"<<endl<<endl;
        cout<<"RECORD DELETED"<<endl;
         cout<<"***************"<<endl<<endl;
    }
    else{
        cout<<"Invalid number"<<endl;
 }   }
 return 0;
}
