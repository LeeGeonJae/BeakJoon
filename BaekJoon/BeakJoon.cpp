#include <iostream>
#include <vector>

using namespace std;

const int WIDTH = 101;
const int HEIGHT = 101;

int main() {
    int paperCount;
    cin >> paperCount;

    vector<vector<bool>> canvas(HEIGHT, vector<bool>(WIDTH, false));
    int blackArea = 0;

    for (int p = 0; p < paperCount; p++) 
    {
        int x, y;
        cin >> x >> y;

        for (int i = y; i < y + 10; i++) 
        {
            for (int j = x; j < x + 10; j++) 
            {
                if (!canvas[i][j]) {
                    canvas[i][j] = true;
                    blackArea++;
                }
            }
        }
    }

    cout << blackArea << endl;
    return 0;
}