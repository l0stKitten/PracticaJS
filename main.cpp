#include <iostream>
#include <time.h>       /* time */
using namespace std;

int main() {
  int fila, col;
  
  // num de filas
  cout << "Ingresa el número de filas\n";
  cin >> fila;
  
  // num de columnas
  cout << "Ingresa el número de columnas \n";
  cin >> col;
  
  // instaciar la matriz y vectores
  int matriz[fila][col];
  int sumfila[fila], sumcol[col];

  srand( time(0) ); //Randomize seed initialization

  for (int i = 0; i < fila; i++){
    sumfila[i] = 0;
  }
  for (int i = 0; i < col; i++){
    sumcol[i] = 0;
  }
  
  for (int i = 0; i < fila; i++){
    for (int j = 0; j < col; j++){
      matriz[i][j] = rand() % 11;
      sumcol[j] += matriz[i][j];
      sumfila[i] += matriz[i][j];

      cout << matriz[i][j] << " ";
    }
    cout << endl;
  }

  // -------------Print Vectores-------------

  cout << " Suma de las filas " << endl;
  for (int i = 0; i < fila; i++){
    cout << sumfila[i] << " ";
  }

  cout << "\n Suma de las columnas " << endl;
  for (int i = 0; i < col; i++){
    cout << sumcol[i] << " ";
  }
	
  return 0;
}