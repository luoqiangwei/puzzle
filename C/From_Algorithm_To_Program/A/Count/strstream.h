#pragma once
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char* begin;
    char* current;
}StrInputStream;

void initStrInputStream(StrInputStream *, char *);
void sisReWind(StrInputStream*);
int sisEof(StrInputStream*);
int readInt(StrInputStream*, int*);
int readDouble(StrInputStream*, double*);
int readChar(StrInputStream*, char*);
int readString(StrInputStream*, char*);
