#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "strstream.h"
#include "search.h"
#include "compare.h"

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
    char first[80];
    assert(in && out);
    while(!feof(in))
    {
        int i;
        StrInputStream sin;
        char type, second[250];
        initStrInputStream(&sin, first);
        readChar(&sin, &type);
        switch(type)
        {
            case 'i':
                int key, a[80], n = 0;
                readInt(&sin, &key);
                fgets(second, 80, in);
                initStrInputStream(&sin, second);
                while(!sisEof(&sin))
                {
                    readInt(&sin, &a[n++]);
                }
                i = linearSearch(a, sizeof(int), n, &key, intGreater);
                break;
            case 'f':
                int key, a[80], n = 0;
                readDouble(&sin, &key);
                fgets(second, 80, in);
                initStrInputStream(&sin, second);
                while(!sisEof(&sin))
                {
                    readDouble(&sin, &a[n++]);
                }
                i = linearSearch(a, sizeof(double), n, &key, doubleGreater);
                break;
            case 'c':
                int key, a[80], n = 0;
                readChar(&sin, &key);
                fgets(second, 80, in);
                initStrInputStream(&sin, second);
                while(!sisEof(&sin))
                {
                    readChar(&sin, &a[n++]);
                }
                i = linearSearch(a, sizeof(char), n, &key, charGreater);
                break;
            case 's':
                int key, a[80], n = 0;
                readString(&sin, &key);
                fgets(second, 80, in);
                initStrInputStream(&sin, second);
                while(!sisEof(&sin))
                {
                    readString(&sin, &a[n++]);
                }
                i = linearSearch(a, sizeof(char *), n, key, strcmp);
                break;
        }
        if(i > -1)
        {
            fprintf(out, "%d\n", i);
        }
        else
        {
            fprintf(out, "not found!\r\n");
        }
        fgets(first, 80, in);
        fclose(in);
        fclose(out);
        return 0;
    }
}