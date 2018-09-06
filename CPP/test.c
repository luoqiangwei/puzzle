#include <stdio.h>
void Minesweeper( int x, int y );//轰炸法
 
 
void Sweepmine( int x, int y );//排雷法
 
 
int    X, Y, M, N = 0;
int    num_mine, num_safe; //分别记录雷快的数目，和安全块的数目
int    num = 1;
char    b[100][100];
/*-------------------------------------------------------------*/
int main()
{
    while ( scanf( "%d%d", &X, &Y ) && !(X == 0 && Y == 0) )
    {
        num_mine = 0; num_safe = 0;
        for ( int i = 0; i < X; i++ )
        {
            getchar(); /*clear data buffer cache*/
            for ( int j = 0; j < Y; j++ )
            {
                scanf( "%c", &b[i][j] );
                if ( b[i][j] == '.' )
                {
                    b[i][j] = '0';
                    num_safe++;
                }else
                    num_mine++;
            }
        }
        N++; /*the token of field;*/
        if ( num_mine <= num_safe ) //判断用哪种方法
        {
            for ( int i = 0; i < X; i++ )
                for ( int j = 0; j < Y; j++ )
                    if ( b[i][j] == '*' )
                        Minesweeper( i - 1, j - 1 );
            //printf( "Minesweeper!\n" );
        }else  {
            for ( int i = 0; i < X; i++ )
                for ( int j = 0; j < Y; j++ )
                    if ( b[i][j] != '*' )
                        Sweepmine( i - 1, j - 1 );
            //printf( "Sweepmine!\n" );
        }
 
 
        printf( "Field #%d:\n", N );
        for ( int i = 0; i < X; i++ )
            for ( int j = 0; j < Y; j++ )
            {
                printf( "%c", b[i][j] ); if ( (j + 1) % Y == 0 )
                    printf( "\n" );
            }
        printf( "\n" );
    }
}
 
 
/*-------------------------------------------------------------*/
void Minesweeper( int x, int y )
{
    for ( int i = x; i <= x + 2; i++ )
        for ( int j = y; j <= y + 2; j++ )
            if ( i >= 0 && i < X && j >= 0 && j < Y && b[i][j] != '*' )
                b[i][j] += 1;
    return;
}
 
/*-------------------------------------------------------------*/
void Sweepmine( int x, int y )
{
    for ( int i = x; i <= x + 2; i++ )
        for ( int j = y; j <= y + 2; j++ )
            if ( i >= 0 && i < X && j >= 0 && j < Y && b[i][j] == '*' )
                b[x + 1][y + 1] += 1;
    return;
}
