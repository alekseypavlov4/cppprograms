#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main()
{
	int array[100];
	srand(time(NULL));
	
	for(int i=0; i<100; i++)
	{
		array[i]=rand()%100;
		cout << setw(3) << array[i] << endl;
	}
	
	cout<<"\t"<<endl;
	cout<<"\t"<<endl;
	
	int min;
	for (int i=0; i<100-1; i++)
	{
		for (int j=0; j<100-i-1; j++)
		{
			if (array[j]>array[j+1])
			{
			min=array[j];
			array[j]=array[j+1];
			array[j+1]=min;
			}
		}
	}
	
	for (int i=0; i<100; i++)
	{
		cout << setw(3) <<array[i]<<endl;
	}

	cout<<"\t"<<endl;
	cout<<"\t"<<endl;

	int k=0;
	for (int i=0; i<100-1; i++)
	{
		if(array[i]==array[i+1])
		{
			k++;
		}
		else
		{
			cout<<setw(3)<<array[i]<<" : "<<"kol-vo = "<<k+1<<","<<"par = "<<(k+1)/2<<","<<"troek = "<<(k+1)/3<<"\t"<<endl;
			k=0;
		}
		if (i==100-2)
		{
		cout<<setw(3)<<array[i]<<" : "<<"kol-vo = "<<k+1<<","<<"par = "<<(k+1)/2<<","<<"troek = "<<(k+1)/3<<"\t"<<endl;
		}
	}

	return 0;
}
