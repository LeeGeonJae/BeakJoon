#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

long long solution(int a, int b) 
{
    long long answer = 0;

    if (a < b)
        for (int i = a; i <= b; i++)
            answer += i;
    else
        for (int i = b; i <= a; i++)
            answer += i;

    return answer;
}

int main() 
{
    cout << solution(3, 5);

    return 0;
}