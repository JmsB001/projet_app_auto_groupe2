#include <iostream>
using namespace std;

void triBulles(int T[], int n)
{
    for (int k = 0; k < n - 1; k++)
    {
        for (int i = n - 1; i > k; i--)
        {
            if (T[i] < T[i - 1])
            {
                int temp = T[i];
                T[i] = T[i - 1];
                T[i - 1] = temp;
            }
        }
    }
}

int main()
{
    int T[] = {2, 3, 1, 4, 0};
    int n = 5;

    triBulles(T, n);

    cout << "Tableau trie : ";

    for (int i = 0; i < n; i++)
    {
        cout << T[i] << " ";
    }

    cout << endl;

    return 0;
}