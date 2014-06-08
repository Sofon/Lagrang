//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit6.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm6 *Form6;
//---------------------------------------------------------------------------
__fastcall TForm6::TForm6(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
double f(double const &x)
{     return x*sin(x*x);
	//return 1/(1+3*fabs(x+1));
}
double f1(double const &x)
{
	return x*sin(x*x);
}
long double Lagrange(int n, double const x1[100], double const y[100], double x)
{
	long double lagrx=0;
	for (int i=0; i<=n; i++)
	{
		long double P=1;
		for (int j=0; j<=n; j++)
			if (j-i)
				P*=(x-x1[j])/(x1[i]-x1[j]);
		lagrx+=P*y[i];
	}
	return lagrx;
}
void __fastcall TForm6::Button1Click(TObject *Sender)
{
	Series2->Clear();
	Series3->Clear();

	double a=0, b=3.14/2, x1[100], y[100];
	int n=StrToInt(Edit1->Text);
	double x=a, la, fault;
	bool flag=true;

	for (int i=0; i<=n; i++)
		{
			x1[i]=a+i*(b-a)/n;
			y[i]=f1(x1[i]);
		}

	while (x<=b)
		{
			la=Lagrange(n,x1,y,x);
			fault=f1(x)-la;
			if (fabs(fault)>1E-3) flag=false;
			Series2->AddXY(x,la,"");
			Series3->AddXY(x,fault,"");
			x+=0.01*(b-a)/n;
		}

	if (!flag) ShowMessage("Точность E=0,001 не достигнута");
}
//---------------------------------------------------------------------------
void __fastcall TForm6::Button2Click(TObject *Sender)
{
	Series2->Clear();
	Series3->Clear();

	double a1=0, a2=0, b=3.14/2, x1[100], y1[100], x2[100], y2[100];
	int n=StrToInt(Edit1->Text);
	double x11=a1, x22=a2, la, fault;
	bool flag=true;

	for (int i=0; i<=n; i++)
		{
			x1[i]=a1+i*(a2-a1)/n;
			y1[i]=f(x1[i]);
		}

	for (int i=0; i<=n; i++)
		{
			x2[i]=a2+i*(b-a2)/n;
			y2[i]=f(x2[i]);
		}

	while (x11<=a2)
		{
			la=Lagrange(n,x1,y1,x11);
			fault=f(x11)-la;
			if (fabs(fault)>1E-3) flag=false;
			Series2->AddXY(x11,la,"");
			Series3->AddXY(x11,fault,"");
			x11+=0.01*(b-a1)/n;
		}

	while (x22<=b)
		{
			la=Lagrange(n,x2,y2,x22);
			fault=f(x22)-la;
			if (fabs(fault)>1E-3) flag=false;
			Series2->AddXY(x22,la,"");
			Series3->AddXY(x22,fault,"");
			x22+=0.01*(b-a2)/n;
		}

	if (!flag) ShowMessage("Точность E=0,001 не достигнута");
}
//---------------------------------------------------------------------------
void __fastcall TForm6::FormCreate(TObject *Sender)
{
  	double x=0;
	for (int i=1; i<154; i++)
	{
		Series1->AddXY(x,f(x),"",clRed);
		x+=0.01;
	}
	return;

}
//---------------------------------------------------------------------------
