#include <iostream>
using namespace std;

int main()
{
     int n, m, k;
    cin >> n >> m>>k;
    long long int multiple=n*m;
    if (k > multiple)
    {
        cout << "NIE";
        return 0;
    }
    if (k % n == 0 or k % m == 0)
    {
        cout << "TAK";
    }
    else
    {
        cout << "NIE";
    }
}

