//overload operator+and==for string

#include<iostream.h>
#include<conio.h>
#include<string.h>

class string
{
	int len;
	char *nm;
	public:
		string() //default cons.
		{
			len=0;
			nm=new char[len+1];
		}
		string(char *s) //parameterized cons.
		{
			len=strlen(s);
			nm=new char[len+1];
			//nm=s;
			strcpy(nm,s);
		}
		void put()
		{
			cout<<"\n name= "<<nm;
		}
		friend string operator+(string s1,string s2);
		int operator==(string);
};

string operator+(string s1,string s2)
{
	string s3;
	s3.len=s1.len+s2.len;
	s3.nm=new char[s3.len+1];
	strcpy(s3.nm,s1.nm);
	strcpy(s3.nm,s2.nm);
	return(s3);
}

int string :: operator==(string s2)
{
	if(strcmp(nm,s2.nm)==0)
		return 1;
	else
		return 0;
}

void main()
{
	char nm1[20],nm2[20];
	clrscr();
	cout<<"enter two strings:";
	cin>>nm1>>nm2;

	string s1(nm1),s2(nm2),s3;

	s3=s1+s2; //s3==operator+(s1,s2);

	s1.put();
	s2.put();
	s3.put();

	if(s1==s2)  //if(s1=operator==(s2))
		cout<<"\n same";
	else
		cout<<"\n not same";
	getch();
}
/*enter two strings:1
1
name=1
name=1
name=1
same */