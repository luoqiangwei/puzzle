#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "strstream.h"



void search(FILE* in, FILE* out);
int searchItem();

int main()
{
    FILE* in = fopen("inputdata.txt", "r");
    FILE* out = fopen("outputdata.txt", "w");
    

    search(in, out);
    return 0;
}

void search(FILE* in, FILE* out)
{
    assert(in && out);
    while(!feof(in))
    {
        int i;
        StrInputStream sin;
        char type, second[250];
    }
}