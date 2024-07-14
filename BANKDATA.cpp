#include<iostream>
using namespace std;
class bank
{
	private:
		char iname[50],banam[20],ifsc[15];
		int accn,pin;
		float bal,with,dep,out;
	public:
		void input();
		void deposit();
		void display();
		void withdraw();	
};
void bank::input()
{
	cout<<"ENTER BANK NAME";
	cin.getline(banam,20);
	cout<<"ENETR ACCOUNT HOLDER NAME";
	cin.getline(iname,50);
	cout<<"ENTER IFSC CODE";
	cin.getline(ifsc,15);
	cout<<"ENTER ACCOUNT NUMBER";
	cin>>accn;
	cout<<"ENTER BALANCE IN BANK";
	cin>>bal;
	if(bal<0)
	{
		cout<<"PLEASE ENTER A POSITIVE AMT";
		cout<<"AGAIN ENTER BAL AMT";
		cin>>bal;
	}
}
void bank::deposit()
{
	cout<<"ENTER DEPOSIT AMT";
	cin>>dep;
	bal=bal+dep;
}
void bank::withdraw()
{
	cout<<"FIRST ENTER 4 DIGIT PIN TO WITHDRAW";
	cin>>pin;
	if(pin==1234)
	{
	
	cout<<"ENTER WITHDRAW AMT";
	cin>>with;
	if(with>bal)
	{
		cout<<"CANT WITHDRAW LESS BALANCE";
	}
	else
	{
		bal=bal-with;
    }
    }
    else
    {
    	cout<<"WRONG PIN TRY AGAIN";
    	
	}
	
}
void bank::display()
{
	cout<<"BANK NAME"<<" "<<banam;
	cout<<"\n"<<"ACC HOLDER NAME"<<" "<<iname;
	cout<<"\n"<<"IFSC CODE"<<" "<<ifsc;
	cout<<"\n"<<"ACC NUM"<<" "<<accn;
	cout<<"\n"<<"DEPOSIT IN ACC"<<" "<<dep;
	cout<<"\n"<<"WITHDRAW FROM ACC"<<" "<<with;
	if(bal>=10000)
	{
		cout<<"BALANCE IN ACCOUNT IS"<<" "<<bal;
	}
	else
	if(bal>0 && bal<=9999)
	{
		cout<<"BALANCE IN ACCOUNT IS"<<" "<<bal;
		out=10000-bal;
		cout<<"PLEASE ADD Rs.  "<<out<<"TO NOT GET CHARGED AS MIN ACC BAL IS 10000";
	}
	
}
int main()
{
	bank b;
	int n;
	do
	{
	
	cout<<"ENTER 1 TO WRITE DATA";
	cout<<"\n"<<"ENTER 2 TO DEPOSIT AMT";
	cout<<"\n"<<"ENTER 3 TO WITHDRAW AMT";
	cout<<"\n"<<"ENTER 4 TO DISPLAY FULL INFO";
	cout<<"\n"<<"ENTER 0 TO EXIT";
	cin>>n;
	switch(n)
	{
		case 1:
			b.input();
			break;
		case 2:
			b.deposit();
			break;
		case 3:
			b.withdraw();
			break;
		case 4:
			b.display();
			break;
		case 0:
            cout << "EXITING THE PROGRAM" << endl;
            return 0;
        default:
            cout << "INVLAID CHOICE SEE OPTIONS CAREFULLY" << endl;
            break;			
			
	}
	}while(n!=0);	
	
}
