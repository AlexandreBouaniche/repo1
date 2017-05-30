#include <iostream>
#include <string>
#include "maths.h"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    int n(0);
    cout << "Entrez le nombre initial: " << endl;
    cin >> n;
    n = ajouteDeux(n);
    cout << "resultat: " << n << endl;

    return 0;
}
