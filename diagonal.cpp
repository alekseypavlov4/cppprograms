#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int main()
{
	int n;  
	cout << "Vvedite razmer matrix: ";
	cin >> n;
	
	vector <vector <int> > vec(n);
	
	for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            vec[i].push_back(rand() % 10);
            cout << setw(2) << vec[i][j] << " ";
    	}
    	cout << setw(2) << endl;
    }
    
    cout << endl;
    cout << endl;
	
	for (int i = 0; i < n; i++)
	{
        int x;
        x = vec[i][i];
        vec[i][i] = vec[i][n-1 - i];
        vec[i][n-1 - i] = x;
    }
    
    for (int i = 0; i < n; i++)
	{
        for (int j = 0; j < n; j++)
		{
            cout << setw(2) << vec[i][j] << " ";
        }
        cout << setw(2) << endl;
    }

    srand(time(NULL));
    return 0;
}
