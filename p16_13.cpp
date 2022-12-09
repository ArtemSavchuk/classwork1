#include <iostream>
#include <stdlib.h>
#include <fstream>

using namespace std;

class Good
{
    public:
    string name;
    string articul;
    string unit;
    double price;
    string delDate;
    //public:
    //Good()
    //{
    //}
    Good(){}
    Good(string name1, string articul1, string unit1, double price1, string delDate1)
    {
        name = name1;
        articul = articul1;
        unit = unit1;
        price = price1;
        delDate = delDate1;
    }
    

    
};

class Toy : public Good
{   
    public:
    int min_age;
    int max_age;
};

class Food : public Good
{   
    public:
    int expiration_date;
};

class Machinery : public Good
{   
    public:
    bool guarantee;
    int guarantee_date;
};

void toyOuptup(Toy &toy)
{
    cout << "name: " << toy.name << "\narticul: " << toy.articul ;
    cout << "\ndel.date: " << toy.delDate << "\nprice: " << toy.price << "unit: " << toy.unit;
}

int fileCreator(string filename)
{
    ofstream file("data.dat");
    //FILE *file = fopen(filename, "wb");
    int n;
    cout << "n = ";
    cin >> n;

    

    for(int i = 0; i < n; i++)
    {
        string type;
        cout << "type of good: ";
        cin >> type;
        
        //fwrite(&type, sizeof(string), 1, file);
        if(type == "Toy")
        {   
            file.write((char*)&type, sizeof(type));

            Toy toy;
            cout << "name of toy: ";
            string s;
            cin >> s;
            //cin >> toy.name;
            toy.name = s;
            cout << "\n" << toy.name;
            //file.write((char*)&toy.name, sizeof(toy.name));

            cout << "articul: ";
            cin >> toy.articul;
            cout << "\n" << toy.articul;

            cout << "price: ";
            cin >> toy.price;
            cout << "\n" << toy.price;

            cout << "delivery date: ";
            cin >> toy.delDate;
            cout << "\n" << toy.delDate;

            cout << "unit: ";
            cin >> toy.unit;
            cout << "\n" << toy.unit;

            cout << "min age: ";
            cin >> toy.min_age;
            cout << "\n" << toy.min_age;

            cout << "max age: ";
            cin >> toy.max_age;
            cout << "\n" << toy.max_age;
            toyOuptup(toy);
            file.write((char*)&toy, sizeof(toy));
        }
        else if(type == "Food")
        {
            file.write((char*)&type, sizeof(type));

            Food food;
            cout << "name: ";
            cin >> food.name;

            cout << "articul: ";
            cin >> food.articul;

            cout << "price: ";
            cin >> food.price;

            cout << "delivery date: ";
            cin >> food.delDate;

            cout << "unit: ";
            cin >> food.unit;

            cout << "expiration date: ";
            cin >> food.expiration_date;

            file.write((char*)&food, sizeof(food));

        }
        else if(type == "Machinery")
        {
            file.write((char*)&type, sizeof(type));

            Machinery mach;
            cout << "name of toy: ";
            cin >> mach.name;

            cout << "articul: ";
            cin >> mach.articul;

            cout << "price: ";
            cin >> mach.price;

            cout << "delivery date: ";
            cin >> mach.delDate;

            cout << "unit: ";
            cin >> mach.unit;

            file.write((char*)&mach, sizeof(mach));
        }
    }
    file.close();
    return n;
}


void fileReader(int n, string filename)
{
    //FILE * file = fopen(filename, "rb");
    fstream file1("data.dat");
    Toy arrT[n];
    Food arrF[n];
    Machinery arrM[n];
    int countTt = 0;
    int countFf = 0;
    int countMm = 0;
    //delete[] arrT;
    //delete[] arrF;
    //delete[] arrM;

    for(int i = 0; i < n; i++)
    {
        string str;
        file1.read((char*)&str, sizeof(str));
        cout << str << endl;

        if(str == "Toy")
        {   
            countTt++;
            cout << "check1" << endl;
            Toy s_in1;
            file1.read((char*)&s_in1, sizeof(s_in1));
            cout << "toy name = " << s_in1.name << endl;
            //arrT = (Toy*)realloc(arrT, countTt * sizeof(Toy));
            arrT[countTt-1] = s_in1;
        }
        else if(str == "Food")
        {
            countFf++;
            cout << "check2" << endl;
            Food food;
            file1.read((char*)&food, sizeof(food));
            //arrF = (Food*)realloc(arrF, countFf * sizeof(Food));
            arrF[countFf-1] = food;
            cout << endl << food.name << endl;
        }
        else if(str == "Machinery")
        {
            countMm++;
            cout << "check3" << endl;
            Machinery mach;
            file1.read((char*)&mach, sizeof(mach));
            //arrM = (Machinery*)realloc(arrM, countMm * sizeof(Machinery));
            arrM[countMm-1] = mach;
            cout << arrM[countMm-1].name;
        }
    }
    cout << "countt = " << countTt << endl;
    for(int i = 0; i < countTt; i++)
    {
        cout << arrT[i].name << " " << arrT[i].min_age;
    }

    file1.close();
    
}

int main()
{
    

    
    
    /*
   ofstream file("data.dat");
   string s = "qwe";
   string s1 = "rty";
   file.write((char*)&s, sizeof(s));
   file.write((char*)&s1, sizeof(s));
   file.close();

   fstream file1("data.dat");
   string s2;
   file1.read((char*)&s2, sizeof(s2));
   cout <<endl << "s = " << s2;
   file1.read((char*)&s2, sizeof(s2));
   cout <<endl << "s = " << s2;
   
    file1.close();
    */
   /*
   ofstream file("data.dat");
   Toy toy;
   toy.name = "q1";
   toy.articul = "q2";
   toy.delDate = "q3";
   toy.max_age = 3;
    toy.min_age = 1;
    toy.price = 4;
    toy.unit = "1";
    file.write((char*)&toy, sizeof(toy));
    file.close();
    fstream file1("data.dat");
    Toy toy1;
    file1.read((char*)&toy1, sizeof(toy1));
    cout << toy1.name << toy1.articul << toy1.max_age;
    */

   int n = fileCreator("data.dat");
   fileReader(n, "data.dat");
    /*
   string str;
   cin >> str;
   ofstream file("data.dat");
    Toy toy;
    toy.articul = "qwe"; toy.delDate = "wer"; toy.max_age = 2; toy.min_age = 1; toy.name = "asd0"; toy.price = 22;
    toy.unit = "ghj";
   file.write((char*)&str, sizeof(str));
   file.write((char*)&toy, sizeof(toy));

   file.close();
    fstream file1("data.dat");
    string s_in;
    file1.read((char*)&s_in, sizeof(s_in));
    Toy s_in1;
    file1.read((char*)&s_in1, sizeof(s_in1));
    cout << s_in;
    cout << s_in1.name << " " << s_in1.price;
    file1.close();
    */
   //Toy * arrT = new Toy[1];
   //arrT = (Toy*)realloc(arrT, 1 * sizeof(Toy));

}