#include<iostream>
#include<stdlib.h>
#include<vector>
#include<string>
using namespace std;
int count=0;
template <typename T>
class Testing
{
    int code[500];
    string p;
    int date[500];
    int c[500];
public:
    vector<string> pname;
    int j;
    T option()
    {
        system("cls");
        int choice;
        cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
        cout<<"             1- To view registered citizens for testing (only admin):           \n";
        cout<<"             2- Booking for COVID testing                             \n";
        cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
        cout<<"  Enter your choice: ";
        cin>>choice;
        return choice;
    }
    T choose()
    {
        system("cls");
        int c;
        x:
        c=option();
        if(c==1 || c==2)
        {
            switch(c)
            {
                case 1:
                    admin();
                    break;
                case 2:
                    count++;
                    booking();
                    break;
                default:
                    cout<<"Choice not available\n";
                    break;
            }
        }
        else
            cout<<"wrong choice";
            goto x;
    }
    T calender()
    {
        int x,y;
        for (int x=0,y=0;x<=31;x++)
        {
            c[x]=y;
        }
    }
    T booking()
    {
        system("cls");
        int i;
        cout<<"\n                      March Calendar\n\n\n";
        cout<<"Mon\tTue\tWed\tThu\tFri\tSat\tSun\n\n";
		for (i=1;i<=31;i++)
		{
            if(c[i]==1)
            {
                cout<<"*\t";
            }
            else
                cout<<i<<"\t";
			if(i%7==0)
				cout<<"\n\n";
		}
        cout<<"\n\nPlease enter your name: ";
        cin>>p;
        pname.push_back(p);
		cout<<"Enter date: ";
		cin>>j;
		if (j>31||j<1)
			{
				cout<<"Wrong"<<endl;
				cout<<"Re-enter date: ";
				cin>>j;
			}
		if (c[j]==1)
			{
				cout<<"Sorry, date has been booked.\n";
				cin>>j;
			}
		else
        {
			c[j]=1;
			date[count]=j;
        }
        system("cls");
        cout<<"\t\t\t\t Date has been booked for Testing!!!!!\n";
        cout<<"Your COVID testing will be done on 11:30 am at "<<j<<" March,2021\n";
        system("pause");
    }
    T admin()
    {

        {
            cout<<"Name\t\t Date booked\n";
            vector<string>::iterator v= pname.begin();
            while(v!=pname.end())
            {
                for(int i=0;i<count;i++)
                {
                    cout<< *v<<"\t\t\t"<<date[i]<<"\n";
                    v++;
                }
            }
            system("pause");
        }


    }
};
int main()
{
	cout<<"                 National COVID Portal\n";
	cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
	cout<<"             1- COVID Testing           \n";
	cout<<"             2- COVID Vaccination          \n";
	cout<<"             3- Exit Portal                                    \n";
	cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
	int x;
	Testing<int> obj;
	cout<<"Enter choice: ";
	cin>>x;
	while(x!=3)
	{
		switch(x)
		{
			case 1:
				obj.choose();
				break;
			case 2:

				break;
			case 3:
				x=3;
				break;
			default:
				cout<<"Choice not available\n";
				break;
		}
	}
}
