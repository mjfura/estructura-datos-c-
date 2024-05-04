#include <iostream>
#include <vector>
#include <string>
#include <chrono>
#include "numeros_primos.cpp"
#include "sort_functions.cpp"
using namespace std;
using namespace std::chrono;

int main()
{
    // CALCULAR PRIMOS
    auto start = high_resolution_clock::now();
    int NUMERO_LIMITE = 100000;
    vector<int> numeros_primos=calcular_primos(NUMERO_LIMITE);
    for (int i = 0; i < numeros_primos.size(); i++)
    {
        cout << numeros_primos[i] << " ";
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(stop - start);
    cout<<endl;
    cout << "Tiempo de ejecución imprimir números primos: " << duration.count() << " milisegundos" << endl;
    // !CALCULAR PRIMOS
    // BUBBLE SORT
    auto start2 = high_resolution_clock::now();

    vector<int> lista_desordenada = {5, 3, 2, 4, 1, 6, 7, 9, 5, 2, 1, 2, 4, 0, 7, 6, 4, 23, 45, 64, 12, 10, 22, 98, 46, 23, 31, 54, 12, 67, 98, 20, 25, 12, 19, 91, 43, 76};
    vector<int> lista_ordenada=bubble_sort(lista_desordenada);
    for (int i = 0; i < lista_ordenada.size(); i++)
    {
        cout << lista_ordenada[i] << " ";
    }
    cout<<endl;
    auto stop2 = high_resolution_clock::now();
    auto duration2 = duration_cast<microseconds>(stop2 - start2);
    cout << "Tiempo de ejecución bubble sort lista: " << duration2.count() << " microsegundos" << endl;
    // !BUBBLE SORT
    // QUICK SORT
    auto start3 = high_resolution_clock::now();

    vector<int> lista_desordenada2 = {5, 3, 2, 4, 1, 6, 7, 9, 5, 2, 1, 2, 4, 0, 7, 6, 4, 23, 45, 64, 12, 10, 22, 98, 46, 23, 31, 54, 12, 67, 98, 20, 25, 12, 19, 91, 43, 76};
    vector<int> lista_ordenada2=quick_sort(lista_desordenada2);
    for (int i = 0; i < lista_ordenada2.size(); i++)
    {
        cout << lista_ordenada2[i] << " ";
    }
    cout<<endl;
    auto stop3 = high_resolution_clock::now();
    auto duration3 = duration_cast<microseconds>(stop3 - start3);
    cout << "Tiempo de ejecución quick sort lista: " << duration3.count() << " microsegundos" << endl;
    // !QUICK SORT
    return 0;
}