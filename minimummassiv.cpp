#include <iostream>

using namespace std;

int main()
{
	int n, N_1, N_2;

	cout << "Vvedite razmer massiva: ";
	cin >> n;
	cout << "Vvedite " << n << " elementov: ";
	
	int *A = new int[n];
	
	for (int i = 0; i < n; i++)
	{
		cin >> A[i];
	}
	
	int q = 0;
	
	while (q != 1)
	{
		cout << "Vvedite nachalo podmassiva, N_1: ";
		cin >> N_1;
	
		cout << "Vvedite konec podmassiva, N_2: ";
		cin >> N_2;
	
		if (N_2 > n)
		{
		cout << "N_2 ne dolzhen previshat n, vvedite snova"<<endl;;
		}
		else 
		{
		q = 1;	
		}
	}	
	
	int min = A[0];
	for (int i = N_1; i < N_2; i++)
	{
		if (A[i] < min)
		{
			min = A[i];
		}
	}
	int *p_min = &min;
	cout << "Min: " << min << endl;
	cout << "Adress min: " << p_min << endl;
	
	delete[] A;
	
	return 0;
}
