
//EXP 8:MULTILEVEL INHERITANCE 2

#include<iostream.h>
#include<conio.h>
class grandparent
{
	private:
	int numg;
	public:
	grandparent()
	{
		numg=100;
		cout<<"in constructor: numg="<<numg<<endl;

	}
	void disp1()
	{
		cout<<"number in grandparent class is:"<<numg<<endl;
	}
};

class parent:grandparent
{
	private:
	int nump;
	public:
	parent()
	{
		nump=200;
		cout<<"in constructor:nump="<<nump<<endl;

	}
	void disp2()
	{
		cout<<"number in parent class is:"<<nump<<endl;
		disp1();
	}
};
class child: parent
{
	private:
	int numc;
	public:
	child()
	{
		numc=300;
		cout<<"in constructor numc="<<numc<<endl;
	}

	void disp3()
	{
		cout<<"number in child class is:"<<numc<<endl;
		disp2();
	}
};


void main()
{
	clrscr();
	child c1;
	c1.disp3();
	getch();
}
/*
in constructor: numg=100
in constructor:nump=200                                                         
in constructor numc=300                                                         
number in child class is:300                                                    
number in parent class is:200                                                   
number in grandparent class is:100                                              
*/
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
