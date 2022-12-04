#include <fstream>
#include <string>
#include <iostream>
#include <math.h>
using namespace std;


int simple(int n) 
{
	for (int i = 2; i <= sqrt(n); i++) 
	{
		if (n % i == 0) 
		{
            printf("is not simple\n");
			return 0;
		}
	}
	return 1;
}

void kilkosti(string filename)
{
    ifstream file(filename);

	int number; 
    int parn = 0;
    int squares = 0;
    int rizn = 0;
    int prosti = 0;


	string s;
	int max_parni = 0;
    int max_neparni = 0;
	int max = 0;
	int number1 = 0;
	int m = 0;


	while (!file.eof()) 
    {
		getline(file, s);
		number = stoi(s);

		printf("%d\n", number);
		if (number % 2 == 0) 
        {
			parn++;
			if (number > max_parni) 
            {
				max_parni = number;
			}
		}
		else 
        {
			double k;
			k = sqrt(number);
			if (k == (int)k) 
            {
				squares++;
			}
			if (number > max_neparni) 
            {
				max_neparni = number;
			}
		}
		int x = simple(number);
		if (x != 0) 
        {
			prosti++;
		}
		if (number > max) 
        {
			max = number;
			number1++;
			if (number1 > m) 
            {
				m = number1;
			}

		}
        else 
        {
			max = 0;
			number1 = 0;
		}
	}


	rizn = max_parni - max_neparni;
	cout << "number of even numbers = " << parn << endl;
	cout << "number of squates = " << squares << endl;

	cout << "the difference between max even and max odd number =" << rizn << endl;
	cout << "number of sinple numbers = " << prosti << endl;

	cout << "length of the biggest increasing sequence = " << m + 1 << endl;

	file.close();
}


int main()
{
    kilkosti("myfile.txt");
}

