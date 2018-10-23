#include "sir_caractere.h"

using namespace std;

int main()
{
    char secventa[100];
    char cuvant[10];

        cin.get(secventa,100);
        cin.get();
        cin.get(cuvant,10);

        cout<<nr_aparitii(secventa,cuvant);
}
