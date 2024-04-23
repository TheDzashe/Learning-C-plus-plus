#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    const double RANDOM_MAX;
    int random;
    random = (RANDOM_MAX - rand())/static_cast<double>(RANDOM_MAX);
    cout << "Random number is " << random;
}