#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	char str;
	int c=0;
	int i=0,cu=0,cl=0,cv=0,cvu=0,cvl=0,cc=0,ccu=0,ccl=0,cn=0,cs=0;
    ifstream inf("FILE.txt");
	while(inf.eof()==0)
	{
		 inf.get(str);
		
	//	 	
	
			if(str>='A' && str<='Z')
		{
			cu++;
			if(str=='A'||str=='E'||str=='I'||str=='O'||str=='U')
			{
				cvu++;
			}
			else
			{
				ccu++;
			}
		}
		else
		if(str>='a' && str<='z')
		{
			cl++;
			if(str=='a'||str=='e'||str=='i'||str=='o'||str=='u')
			{
				cvl++;
			}
			else
			{
				ccl++;
			}
		}
		else
		if(str>='0' && str<='9')
		{
			cn++;
		}
		else
		{
			cs++;
		}
		cout<<str;
	
    
    }
cv = cvu + cvl;
    cc = ccu + ccl;
    cout << "Uppercase: " << cu << endl;
    cout << "Lowercase: " << cl << endl;
    cout << "Vowels: " << cv << endl;
    cout << "Consonants: " << cc << endl;
    cout << "Uppercase Vowels: " << cvu << endl;
    cout << "Uppercase Consonants: " << ccu << endl;
    cout << "Lowercase Vowels: " << cvl << endl;
    cout << "Lowercase Consonants: " << ccl << endl;
    cout << "Numbers: " << cn << endl;
    cout << "Special Characters: " << cs << endl;

	inf.close();
}

