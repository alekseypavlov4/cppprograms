#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int main()
{
	srand(time(NULL));
	int n;  
	cout << "Vvedite razmer matrix: ";
	cin >> n;
	
	vector <vector <int> > vec(n);
	vector <int> mas(n);
	
	for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            vec[i].push_back(rand() % 100);
            cout << setw(4) << vec[i][j] << " ";
    	}
    	cout << endl;
    }
    
    cout << endl;
    cout << endl;
    
    int sum = 0;
    
    for (int j = 0; j < n; j++)
	{
		sum = 0;
        for (int i = 0; i < n; i++)
		{
            sum += vec[i][j];
        }
        cout << "Sum stolbca " << j+1 << " = " << sum << endl;
        mas[j] = sum;
    }
    
    cout << endl;
    cout << endl;
    
    int min = 1000000;
    int k = 0;
    
    for (int i = 0; i < n; i++)
	{
		if (mas[i]<min)
		{
			min = mas[i];
			k += 1;
		}
	}
	
    cout << "min summa elementov stolbca = " << min << endl;
    cout << "stolbec pod nomerom " << k << endl;
    
	return 0;   
}
    
    
    
    
