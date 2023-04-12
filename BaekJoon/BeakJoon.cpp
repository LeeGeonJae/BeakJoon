#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

string solution(vector<string> seoul) 
{
    string answer = "";
    int Count = 0;

    for (int i = 0; i < seoul.size(); i++)
    {
        if (seoul[i] == "Kim")
        {
            Count = i;
            break;
        }
    }
    
    answer.push_back(Count + '0');

    answer = "김서방은 " + to_string(Count) + "에 있다";

    return answer;
}

int main() 
{
    cout << solution({"jane", "jane", "jane", "jane", "jane", "jane", "Kim", "jane", "jane", "jane"});

    return 0;
}