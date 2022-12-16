#include <fstream>
#include <iostream>
using namespace std;

class Vector {
  private:
    int N;
    double *data; // Створино динамічний масив для розміщення чисел
     
  public:
    Vector(int N)  // Конструктор
    {
        this->N = N;
        data = new double[N];  // Ініціалізуємо наші дані
    }

  Vector(const Vector &other) // Копі-конструктор
    {
        this->N = other.N;
        data = new double[other.N];
        for (int i=0; i<this->N; i++)
            this->data[i] = other.data[i];
    }

    ~Vector()  // Деструктор
    {
        delete data;
    }

  void init(double *arr) // Метод для ініціалізації масиву з масиву дiйсних чисел
    {
        for (int i=0; i<this->N; i++)
            this->data[i] = arr[i];
    }

    void set(int pos, double val) // Записати значення до динамічного масиву    
    {
    if(pos<0 || pos >= this->N)  
            cout << "Index is out of range!" << endl;
        else
            this->data[pos]=val; 
    }

  static Vector* sum(Vector m1, Vector m2) // Векторний добуток двох векторів (m1, m2)
    {
    if (m1.N != m2.N) {
        cout << "Vectors must have the same size." << endl;
            return NULL;
        }  
        Vector* res = new Vector(m1.N);
        for (int i = 0; i < m1.N; i++) {
            res->data[i] = m1.data[i] + m2.data[i];
        }
        return res;
    }

  static double skalar(Vector m1, Vector m2) // Скалярний добуток двох векторів (m1, m2)
    {
    if (m1.N != m2.N) {
        cout << "Vectors must have the same size." << endl;
            return 0;
        }  
        double res = 0;
        for (int i = 0; i < m1.N; i++) {
            res += m1.data[i] * m2.data[i];
        }
        return res;
    }

  void inputFile(string filename) // Введення даних з файлу
    {
    ifstream myfile(filename);
        
    int N;
        myfile >> N; 

    this->N = N;
    this->data = new double[this->N]; 
        
    for (int i = 0; i < this->N; i++) 
            myfile >> this->data[i];
        myfile.close();
    }
    
    void outputFile(string filename) // Виведення даних до файлу
  {
    ofstream myfile;
        myfile.open (filename);

    myfile << this->N << endl;
    for (int i = 0; i < this->N; i++)
            myfile << this->data[i] << " ";

    myfile.close();
    }
};