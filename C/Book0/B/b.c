#include <stdio.h>

char s[] = "123";

int n = sizeof s / sizeof (char) - 1;

void disppath(char path[], int d)
{
    printf(" 输出一个子集: {");
    for(int i = 0; i < d; i++)
        printf("%c, ", path[i]);
    if(d >= 0) printf("%c", path[d]);
    printf("}\n");
}

int dfs(char path[], int d, int start)
{
    if(start == n)
        disppath(path, d);
    else
    {
        dfs(path, d, start + 1);
        d++;
        path[d] = s[start];
        dfs(path, d, start + 1);
    }
}

int main(int argc, char const *argv[])
{
    int d = -1;
    char path[100];
    printf("s:%s\n", s);
    dfs(path, d, 0);
    return 0;
}
