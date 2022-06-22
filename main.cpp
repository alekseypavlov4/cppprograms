#include <iostream>
#include <cmath>
#include "VERYLONG.H"

using namespace std;

bool prime(long long n)
{ 
	for(long long i=2;i<=sqrt(n);i++)
		if(n%i==0)
			return false;
	return true;
}

int n_func(int q, int p)
{
	int n = q * p;
	cout << "n = " << n << endl;
	return n;
}

int f_func(int q, int p)
{
	int f = (p - 1) * (q - 1);
	cout << "Function Eilera = " << f << endl;
	return f;
}

int d_func(int f, int e)
{
	int d = 0;
	int quit = 0;
	while (quit != 1)
	{
		d += 1;
		if (((e * d)%f) == 1)
		{
			if (d != e)
			{
				quit = 1;
			}
		}
	}
	return d;
}

int main()
{
	int variant;
	cout << "1: encryption, 2: decryption, 3: encryption - decryption" << endl;
	cin >> variant;
	if (variant == 1)
	{
		int quit = 0;
		int q, p;
		
		while(quit != 1)
		{
			cout << "encryption" << endl;
			cout << "Vvedite prostoe chislo q: " << endl;
			cin >> q;
			cout << "Vvedite prostoe chislo p: " << endl;
			cin >> p;
		
			if ((prime(q) == false)and(prime(p) == false))
			{
				cout << "Chisla ne prostie, poprobuite snova" << endl;
			}
			else
			{
				quit = 1;
			}
		}
		
		Verylong n = n_func(q, p);
		
		int f = f_func(q, p);
		
		Verylong e = 5;
		
		int d = d_func(f, e);
		
		cout << "Minimalnoe chislo d = " << d << endl;
		cout << "Otkritiy kluch [" << e << "(e);" << n << "(n)]" << endl;
		cout << "Zakritiy kluch [" << d << "(d);" << n << "(n)]" << endl;
		
		cout << endl;
		
		cout << "Shifrovanie:" << endl;
		Verylong m;
		quit = 0;
		while (quit != 1)
		{
			cout << "Vvedite soobshenie dlya zashifrovki < n" << endl;
			cin >> m;
			if (Verylong(n)<Verylong(m))
			{
				cout << "Soobshenie > n, poprobuite snova" << endl;
			}
			else
			{
				quit = 1;
			}
		}
		Verylong a = pow(m,e);
		Verylong c = Verylong(a) % Verylong(n);
		cout << "Zashifrovannoe soobshenie: " << c << endl;
	}
	
	else if (variant == 2)
	{
		Verylong d, n, c;
		cout << "Deshifrovanie" << endl;
		cout << "Zashifrovannoe soobshenie: " << endl;
		cin >> c;
		cout << "Zakritiy kluch d: " << endl;
		cin >> d;
		cout << "Zakritiy kluch n: " << endl;
		cin >> n;
		Verylong a = pow(c,d);
		Verylong m = Verylong(a) % Verylong(n);
		cout << "Rasshifrovannoe soobshenie: " << m << endl;
	}
	
	else if (variant == 3)
	{
		int quit = 0;
		int q, p;
		
		while(quit != 1)
		{
			cout << "Shifrovanie" << endl;
			cout << "Vvedite prostoe chislo q: " << endl;
			cin >> q;
			cout << "Vvedite prostoe chislo p: " << endl;
			cin >> p;
		
			if ((prime(q) == false)and(prime(p) == false))
			{
				cout << "Chisla ne prostie, poprobuite snova" << endl;
			}
			else
			{
				quit = 1;
			}
		}
		
		Verylong n = n_func(q, p);
		
		int f = f_func(q, p);
		
		Verylong e = 5;
		
		int d = d_func(f, e);
		
		cout << "Minimalnoe chislo d = " << d << endl;
		cout << "Otkritiy kluch [" << e << ";" << n << "]" << endl;
		cout << "Zakritiy kluch [" << d << ";" << n << "]" << endl;
		
		cout << endl;
		
		cout << "Shifrovanie:" << endl;
		Verylong m;
		quit = 0;
		while (quit != 1)
		{
			cout << "Vvedite soobshenie dlya zashifrovki < n" << endl;
			cin >> m;
			if (Verylong(n)<Verylong(m))
			{
				cout << "Soobshenie > n, poprobuite snova" << endl;
			}
			else
			{
				quit = 1;
			}
		}
		Verylong a = pow(m,e);
		Verylong c = Verylong(a) % Verylong(n);
		cout << "Zashifrovannoe soobshenie: " << c << endl;
		cout << endl;
		cout << "Rasshifrovat?" << endl;
		cout << "1 - Da, 2 - Net" << endl;
		int variant_2;
		cin >> variant_2;
		if (variant_2 == 1)
		{
			Verylong d, n, c;
			cout << "Deshifrovanie" << endl;
			cout << "Zashifrovannoe soobshenie < n: " << endl;
			cin >> c;
			cout << "Zakritiy kluch d: " << endl;
			cin >> d;
			cout << "Zakritiy kluch n: " << endl;
			cin >> n;
			Verylong a = pow(c,d);
			Verylong m = Verylong(a) % Verylong(n);
			cout << "Rasshifrovannoe soobshenie: " << m << endl;
		}
		else if (variant_2 == 2)
		{
			return 0;
		}
	}
}


