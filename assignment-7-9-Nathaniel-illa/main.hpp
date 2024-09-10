#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

void makeVector(vector<int> &);
void insertVector(vector<int> &, int);
int deleteVector(vector<int> &, int);

int getInput(void);
void printVector(vector<int>);

void makeVector(vector<int> &number)
{
    srand(time(0));
    for (int i = 0; i < number.size(); i++)
        number[i] = rand() % 20;
    sort(number.begin(), number.end());
}

void insertVector(vector<int> &number, int usernum)
{
    // Find the position to insert the new number while maintaining sorted order
    auto it = lower_bound(number.begin(), number.end(), usernum);
    number.insert(it, usernum);
}

int deleteVector(vector<int> &number, int usernum)
{
    // Find the first occurrence of usernum
    auto it = find(number.begin(), number.end(), usernum);
    if (it != number.end())
    {
        number.erase(it);
        return 0; // Return 0 to indicate success
    }
    return -1; // Return -1 if the number was not found
}

int getInput(void)
{
    int num;
    cout << "Enter your input\n";
    cin >> num;
    return num;
}

void printVector(vector<int> number)
{
    for (auto iter = number.begin(); iter != number.end(); iter++)
        cout << setw(5) << *iter;
    cout << endl;
} 