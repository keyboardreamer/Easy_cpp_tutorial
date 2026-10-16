#include <iostream>
using namespace std;

int main()
{
    for (char killer = 'A'; killer <= 'F'; killer++)
    {
        bool A = (killer != 'A');
        bool F = (killer == 'F');

        bool B = (killer == 'A') || (killer == 'C');
        bool C = !A && !B;
        bool D = !C && !F;
        bool E = A && D && !B && !C && !F;

        int truthCount = A + B + C + D + E + F;

        if (truthCount >= 3)
        {
            cout << killer << endl;
        }
    }

    return 0;
}
