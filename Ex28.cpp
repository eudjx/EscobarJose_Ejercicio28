#include<iostream>
#include<cmath>
#include<stdio.h> 


int N=20;
int *norma=new int [N];
double dx2dt2(double t, double x)
{
	int N;
    double k=1;
    double vx=10;
	double vy=15;
	int n=2;
	double g=9.8;
	for (int i=0; i<20; i++)
	{
		norma[i]=sqrt(pow(vx,2)+pow(vy-g*i,2));
	}
	for (int i=0; i<20; i++)
	{
		return -k*pow(vx,n)*(vx/norma[i]);
	}
    
}

double dy2dt2(double t, double y)
{
	int N;
    double k=1;
    double vx=10;
	double vy=15;
	int n=2;
	double g=9.8;
    
	for (int i=0; i<20; i++)
	{
		norma[i]=sqrt(pow(vx,2)+pow(vy-g*i,2));
	}
	for (int i=0; i<20; i++)
	{
		return -g-k*pow(vx,n)*(vx/norma[i]);
	}
    
}



int main()
{
	
	double t0=0, x=1, t=2, h=0.1, y=1;
	int N=(int)((t-t0)/h);
    double k1, k2, k3 , k4;
    double v0y=15;
    for (int i=0; i<20; i++)
    {
		double g=9.8;
        k1=h*dx2dt2(i, x);
        k2=h*dx2dt2(i+0.5*h,x+0.5*k1);
        k3=h*dx2dt2(i+0.5*h,x+0.5*k2);
        k4=h*dx2dt2(i+h,x+k3);
        
        x=x+(1.0/6.0)*(k1+2*k2+2*k3+k4);
        
        t0=t0+h;
		std::cout<</**//**/t0<<"    "<<(x)*(-1)<<std::endl;
    }
    
     for (int i=0; i<20; i++)
    {
		double g=9.8;
        k1=h*dy2dt2(i, y);
        k2=h*dy2dt2(i+0.5*h,y+0.5*k1);
        k3=h*dy2dt2(i+0.5*h,y+0.5*k2);
        k4=h*dy2dt2(i+h,y+k3);
        
        y=y+(1.0/6.0)*(k1+2*k2+2*k3+k4);
        
        t0=t0+h;
		std::cout<</**//**/t0<<"    "<<(y)*(-1)<<std::endl;
    }
    return 0;
}
