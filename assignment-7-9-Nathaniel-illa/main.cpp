#include "main.hpp"

int main()
{
    const int SIZE = 10;
    int usernum;
    vector<int> number(SIZE);

    // Seed the random number generator
    srand(time(NULL));

    // Create and sort the vector
    makeVector(number);
    // Print the initial vector
    printVector(number);

    // Get input from user and insert into the vector
    usernum = getInput();
    insertVector(number, usernum);
    // Print the vector after insertion
    printVector(number);

    // Get another input from user and delete from the vector
    usernum = getInput();
    // Print the vector before deletion
    printVector(number);
    deleteVector(number, usernum);
    // Print the vector after deletion
    printVector(number);

    return 0;
}