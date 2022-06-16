#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main()
{
	int A[100];
	srand(time(NULL));
	
	for(int i=0; i<100; i++)
	{
		A[i]=rand()%100;
		cout << i+1 << ")" << setw(3) << A[i] << endl;
	}
	
	cout<<endl;
	cout<<endl;
	
	int min;
	for (int i=0; i<100-1; i++)
	{
		for (int j=0; j<100-i-1; j++)
		{
			if (A[j]>A[j+1])
			{
			min=A[j];
			A[j]=A[j+1];
			A[j+1]=min;
			}
		}
	}
	
	for (int i=0; i<100; i++)
	{
		cout << i+1 << ")" << setw(3) <<A[i]<<endl;
	}

	cout<<endl;
	cout<<endl;

	int k=0;
	for (int i=0; i<100-1; i++)
	{
		if(A[i]==A[i+1])
		{
			k++;
		}
		else
		{
			cout<<setw(3)<<A[i]<<" : "<<"kol-vo = "<<k+1<<","<<"par = "<<(k+1)/2<<","<<"troek = "<<(k+1)/3<<"\t"<<endl;
			k=0;
		}
		if (i==100-2)
		{
			cout<<setw(3)<<A[i]<<" : "<<"kol-vo = "<<k+1<<","<<"par = "<<(k+1)/2<<","<<"troek = "<<(k+1)/3<<"\t"<<endl;
		}
	}

	return 0;
}
