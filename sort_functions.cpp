#include <vector>

using namespace std;

vector<int> bubble_sort(vector<int> numeros)
{
    for (int i = 0; i < numeros.size(); i++)
    {
        for (int j = 0; j < numeros.size() - 1; j++)
        {
            if (numeros[j] > numeros[j + 1])
            {
                int temp = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temp;
            }
        }
    }
    return numeros;
}

vector<int> quick_sort(vector<int> numeros)
{
    if (numeros.size() <= 1)
    {
        return numeros;
    }
    int pivot = numeros[numeros.size() / 2];
    vector<int> left;
    vector<int> right;
    vector<int> result;
    for (int i = 0; i < numeros.size(); i++)
    {
        if (i == numeros.size() / 2)
        {
            continue;
        }
        if (numeros[i] < pivot)
        {
            left.push_back(numeros[i]);
        }
        else
        {
            right.push_back(numeros[i]);
        }
    }
    vector<int> left_sorted = quick_sort(left);
    vector<int> right_sorted = quick_sort(right);
    result.insert(result.end(), left_sorted.begin(), left_sorted.end());
    result.push_back(pivot);
    result.insert(result.end(), right_sorted.begin(), right_sorted.end());
    return result;
}