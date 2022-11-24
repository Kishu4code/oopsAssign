#include <iostream>
#include <string>

using namespace std;

class Area
{
	public:
	float x,y,p;
	Area(){}
	float area(float a)
	{
		x=3.14*a*a;
		y=2*3.14*a;
		return x;
	}
	float area (float a, float b)
	{
		x=a*b;
		y=2*(a+b);
		return x;
	}
	float price(int ppa)
	{
		p=ppa*x;
		return p;
	}
	float fence(int a)
	{
		return y*a;
	}
};
class info :public Area
{
	public:
		string name;
		int age,n;
		string sex;
		void input()
		{
			
			cout<<"enter name:\n";
			cin>>name;
			cout<<"enter age:\n";
			cin>>age;
			cout<<"enter sex:\n";
			cin>>sex;
			cout<<"enter no. of plots\n";
			cin>>n;
		}
		void calculate()
		{
			int d;
			float c,e;
			int p,q;
			int a[n],fp[n],lp[n];
			cout<<"enter land price per unit area\n";
			cin>>p;
			cout<<"enter fence price per unit area\n";
			cin>>q;
			Area g;
			for(int i=0;i<n;i++)
			{
				cout<<"1 circle\n";
				cout<<"2 square\n";
				cout<<"3 rectangle\n";
				cout<<"enter your choice";
				cin>>d;
				switch(d)
				{
					case 1:
					cout<<"enter radius\n";
					cin>>c;
					a[i]=g.area(c);
					lp[i]=g.price(p);
					fp[i]=g.fence(q);
					break;
					case 2:
					cout<<"enter a side of square\n";
					cin>>c;
					a[i]=g.area(c,c);
					lp[i]=g.price(p);
					fp[i]=g.fence(q);
					break;
					case 3:
					cout<<"enter a side of rectangle\n";
					cin>>c;
					cout<<"enter another side of rectangle\n";
					cin>>e;
					a[i]=g.area(c,e);
					lp[i]=g.price(p);
					fp[i]=g.fence(q);
					break;
				}
			}
			print();
			for(int i=0;i<n;i++)
			{
				cout<<"area: "<<a[i]<<"\n";
				cout<<"cost of land : "<<lp[i]<<"\n";
				cout<<"cost of fencing : "<<fp[i]<<"\n";
			}
		}
		void print()
		{
			cout<<"Name : "<<name<<"\n";
			cout<<"Age : "<<age<<"\n";
			cout<<"Sex : "<<sex<<"\n";
			cout<<"No. of plots : "<<n<<"\n";
		}
};
int main()
{
	info s;
	s.input();
	s.calculate();
}