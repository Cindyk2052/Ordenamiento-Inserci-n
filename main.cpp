#include <iostream>
#include <fstream>
using namespace std;

ofstream archivo;
void ingresar(int a[], int n);
void imprimir (int a[], int n);
void insercion (int a[], int n);
void operaciones (int a[], int n);



int main() {

  string nombre;
  cout << "Ingrese el nombre del archivo: ";
  getline(cin, nombre);
  archivo.open(nombre.c_str(), ios::app);
  
  int arreglo[12];
  int n = 10;
  ingresar (arreglo, n);
  cout << "Arreglo original: ";
  imprimir (arreglo, n);
  cout << endl;
  archivo << endl;
  cout << "Arreglo ordenado: ";
  
  insercion (arreglo, n);
  cout << endl;
  archivo << endl;
  operaciones (arreglo, n);
  return 0;  
}

void ingresar(int a[], int n){
    for (int i=0; i<n; i++)
    {
        cout << "Ingrese el elemento al arreglo: ";
        cin >> a[i];
    }

}

void imprimir (int a[], int n){
  archivo << "Arreglo original: ";  
    for (int i=0; i<n; i++)
    {
      cout << "[" << a[i] << "]";
      archivo << "[" << a[i] << "]";
    }

}

void insercion (int a[], int n){
  int aux;
  for(int i = 0; i < n; i++){
    aux = a[i];
    int p = i;

    while (p > 0){
      if (a[p-1] > aux){
        a[p] = a[p-1];
        a[p-1] = aux;
      }
      p--;
    }
  }

  archivo << "Arreglo ordenado: ";
  for (int i = 0; i < n; i++){
    cout << "[" << a[i] << "]";
    archivo << "[" << a[i] << "]";
  }
}

void operaciones (int a[], int n){
  int total = 0;
  for (int i= 0; i < n; i++){
    total = i+1; 
  }
  cout << "Total de elementos: " << total << endl;
  archivo << "Total de elementos: " << total << endl;
  double sum = 0;
  for (int i=0; i < n; i++){
    sum += a[i];
  }
  cout << "Suma de elementos: " << sum;
  archivo << "Suma de elementos: " << sum << endl;
}

