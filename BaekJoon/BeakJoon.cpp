#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int solution(int num) 
{
    int answer = 0;
    double number = num;

    while (number != 1.0)
    {
        if ((int)number % 2 == 0)
            number /= 2.0;
        else
            number = number * 3.0 + 1;

        answer++;

        if (answer == 500)
            return -1;
    }
    return answer;
}

int main() 
{
    cout << solution(626331);

    return 0;
}