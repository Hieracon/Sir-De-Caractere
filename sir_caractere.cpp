#include "sir_caractere.h"

int nr_aparitii(char secventa[100],char cuvant[10]){
    int nr;
    char *S1=secventa;
    char *p;

        nr=0;
        while((p = strstr(S1,cuvant)) != NULL){
            nr++;
            S1=p+strlen(cuvant);
        }
        return nr;
}
