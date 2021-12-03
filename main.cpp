#include <iostream>
#include <math.h>
using namespace std;
int input2darray(int n, int m, int a[100][100])
{
	int i,j;
    for (i = 0; i < n; i++)
    {
	for (j = 0; j < m; j++)
	{
	    cin >> a[i][j];
	}
    }
    return 0;
}
double odd(int n, int m, int a[100][100])
{
	int i,j,sum=0;
	double average;
    for (i = 0; i < n; i++)
    {
	for (j = 0; j < m; j++)
	{
	    if(j%2==1)
	    {
		sum=sum+a[i][j];
	    }
	}
    }
    average=sum*1.0/n;
    return average;
}
double even(int n, int m, int a[100][100])
{
	int i,j,sum=0;
	double average;
    for (i = 0; i < n; i++)
    {
	for (j = 0; j < m; j++)
	{
	    if(j%2==0)
	    {
		sum=sum+a[i][j];
	    }
	}
    }
    average=sum*1.0/n;
    return average;
}
int main()
{
	int n,m,k;
	double average;
	int a[100][100];
	int i;
	int b[2];
	cout<<"Nhap so diem thuoc tap A va liet ke cac diem: ";
	cin>>n;
	input2darray(n,2,a);
	double xA=even(n,2,a);
	double yA=odd(n,2,a);
	cout<<"Nhap so diem thuoc tap B va liet ke cac diem: ";
	cin>>m;
	input2darray(m,2,a);
	double xB=even(m,2,a);
	double yB=odd(m,2,a);
	cout<<"Nhap so diem thuoc tap C va liet ke cac diem: ";
	cin>>k;
	input2darray(k,2,a);
	double xC=even(k,2,a);
	double yC=odd(k,2,a);
// Output:
	while(1)
	{
		cout<<"Nhap vao diem X: ";
		for (i = 0; i < 2; i++)
		{
			cin>>b[i];
		}
			if (b[0]==27 || b[1]==27)
			{
				break;
			} else {
			//compute distance from point A to point X
			double distanceA=sqrt(pow(b[0]-xA,2)+pow(b[1]-yA,2));
			//compute distance from point B to point X
			double distanceB=sqrt(pow(b[0]-xB,2)+pow(b[1]-yB,2));
			//compute distance from point C to point X
			double distanceC=sqrt(pow(b[0]-xC,2)+pow(b[1]-yC,2));
			//find minimum distance
			double min=distanceA;
			if(distanceB<min)
			{
				min=distanceB;
			}
			if(distanceC<min)
			{
				min=distanceC;
			}
			if (min==distanceA)
			{
				cout<<"X thuoc tap A\n";
			} else if (min==distanceB)
			{
				cout<<"X thuoc tap B\n";
			} else if (min==distanceC)
			{
				cout<<"X thuoc tap C\n";
			}
			}
	} 
	return 0;
}