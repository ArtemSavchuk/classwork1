#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

typedef struct 
{
	int height;
	string name;
} Mountain;


Mountain input_mountain() 
{
	Mountain mount;
    cout << "name = ";
	cin >> mount.name;
	cout << "height =  ";
	cin >> mount.height;
	return mount;
}

void output_mountain(Mountain mount) 
{
	cout << mount.name << ", " << mount.height  << "\n";
}

Mountain highest(Mountain arr[], int size) 
{
	int height_max = 0;
    int number;
	for (int i = 0; i < size; i++) 
    {
		if(arr[i].height > height_max)
        {
            height_max = arr[i].height;
            number = i;
        }
	}

	return arr[number];
}

Mountain m_name(Mountain arr[], int size,string name) 
{
	for (int i = 0; i < size; i++) 
    {
		if (arr[i].name == name) 
        {
            return arr[i];
        }
	}
    Mountain m1;
    m1.height = 0;
    m1.name = "noname";
	cout << "There is no such mountain" ;
    return m1;
}


void allFunc()
{
    Mountain m1;
    Mountain m2;
    Mountain m3;

    m1 = input_mountain();
    m2 = input_mountain();
    m3 = input_mountain();

    output_mountain(m1);
    output_mountain(m2);
    output_mountain(m3);

    Mountain arr[3] = {m1, m2, m3};
    Mountain m4 = highest(arr, 3);
    output_mountain(m4);

    Mountain m5 = m_name(arr, 3, "Hoverla");
    output_mountain(m5);
}

int main()
{
    allFunc();
}


