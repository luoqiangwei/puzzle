#include "strstream.h"

void initStrInputStream(StrInputStream* ssin, char* s)
{
    while(*s == ' ' || *s == "\t")
    {
        s++;
    }
    ssin->begin = ssin->current = s;
}

void sisReWind(StrInputStream* ssin)
{
    ssin->current = ssin->begin;
}

int sisEof(StrInputStream* ssin)
{
    return (strlen(ssin->current) == 0 || (*(ssin->current) == '\r' || (*(ssin->current) == '\n')));
}

int readInt(StrInputStream* ssin, int* x)
{
    char s[80];
    int n;
    while(*(ssin->current) == ' ' || *(ssin->current) == '\t')
    {
        (ssin->current)++;
    }
    sscanf(ssin->current, "%s", s);
    n = strlen(s);
    if(!n)
    {
        return 1;
    }
    ssin->current += n;
    *x = atoi(s);
    return 0;
}

int readDouble(StrInputStream* ssin, double* x)
{
    char s[80];
    int n;
    while(*(ssin->current) == ' ' || *(ssin->current) == '\t')
    {
        (ssin->current)++;
    }
    sscanf(ssin->current, "%s", s);
    n = strlen(s);
    if(!n)
    {
        return 1;
    }
    ssin->current += n;
    *x = atof(s);
    return 0;
}

int readChar(StrInputStream* ssin, char* x)
{
    char s[80];
    int n;
    while(*(ssin->current) == ' ' || *(ssin->current) == '\t')
    {
        (ssin->current)++;
    }
    sscanf(ssin->current, "%s", s);
    n = strlen(s);
    if(!n)
    {
        return 1;
    }
    ssin->current += n;
    *x = s;
    return 0;
}

int readString(StrInputStream* ssin, char* x)
{
    char s[80];
    int n;
    while(*(ssin->current) == ' ' || *(ssin->current) == '\t')
    {
        (ssin->current)++;
    }
    sscanf(ssin->current, "%s", s);
    n = strlen(s);
    if(!n)
    {
        return 1;
    }
    ssin->current += n;
    *x = s;
    return 0;
}