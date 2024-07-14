#include<iostream>
using namespace std;
class complex
{
	private:
		int val1, val2;
	public:
		complex(){}
		
		complex(int v1,int v2)
		{
			val1=v1;
			val2=v2;
		}
		void input(int n1, int n2)
		{
			val1=n1;
			val2=n2;
		}	
		friend complex sumcomplex(complex o1, complex o2);
		void output()
		{
			cout<<"NUMBER IS  "<<val1<<" + "<<val2<<"i"<<"\n\n";
		}
};
complex sumcomplex(complex o1, complex o2) // not always necessary to pass what you have written originally
{
	
//	o3.input((o1.val1 + o2.val1),(o1.val2 + o2.val2));
	return (complex((o1.val1 + o2.val1),(o1.val2 + o2.val2)));
}
int main()
{
	int a,b,c,d;
	complex c1,c2,sum;
	cout<<"ENTER REAL PART OF CMPLX 1 N ";
	cin>>a;
	cout<<"ENTER IMG PART OF CMPLX 1 N ";
	cin>>b;
	cout<<"ENTER REAL PART OF CMPLX 2 N ";
	cin>>c;
	cout<<"ENTER IMG PART OF CMPLX 2 N ";
	cin>>d;
	c1.input(a,b);
	c1.output();
	c2.input(c,d);
	c2.output();
	sum=sumcomplex(c1,c2);
	sum.output();
	
	
	
}
