
//EXP 8:SINGLE INHERITANCE 2

#include<iostream.h>
#include<conio.h>
class parent
{
	private:
	int nump;
	public:
	parent()
	{
		nump=100;
		cout<<"in constructor: nump="<<nump<<endl;

	}
	void disp1()
	{
		cout<<"number in parent class is:"<<nump<<endl;
	}
};

class child:public parent
{
	private:
	int numc;
	public:
	child()
	{
		numc=200;
		cout<<"in constructor:numc="<<numc<<endl;

	}
	void disp2()
	{
		cout<<"number in child class is:"<<numc<<endl;

	}

};

void main()
{
	clrscr();
	child c1;
	c1.disp2();
	c1.disp1();
	getch();
}
/*
in constructor: nump=100
in constructor:numc=200                                                         
number in child class is:200                                                    
number in parent class is:100                                                   
*/
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
