#include <vector>

using namespace std;

vector<int> calcular_primos(int n)
{
    vector<int> primos;
    for (int i = 2; i <= n; i++)
    {
        bool es_primo = true;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                es_primo = false;
                break;
            }
        }
        if (es_primo)
        {
            primos.push_back(i);
        }
    }
    return primos;
}