#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int MinNumber;
    int MaxNumber;
    int arr[10000] = {};
    int Sum = 0;
    vector<int> PrimeNumber;

    cin >> MinNumber >> MaxNumber;

    if (MinNumber < 2) MinNumber = 2;

    for (int i = 2; i <= MaxNumber; i++)
        arr[i] = i;

    for (int i = 2; i <= sqrt(MaxNumber); i++) {
        if (arr[i] == 0) continue;
        for (int j = 2 * i; j <= MaxNumber; j += i)
            arr[j] = 0;
    }

    for (int i = MinNumber; i <= MaxNumber; i++) {
        if (arr[i] != 0)
            PrimeNumber.push_back(arr[i]);
    }

    for (int i = 0; i < PrimeNumber.size(); i++)
        Sum += PrimeNumber[i];

    if (PrimeNumber.size() > 0) {
        cout << Sum << endl;
        cout << PrimeNumber[0];
    }
    else
        cout << -1;

    return 0;
}