#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int x1,x2,x3,y1,y2,y3,k;
    scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3 );
    k=0;

    if ((x1==x2)||(y1==y2)||(abs(x1-x2)==abs(y1-y2)))
    {
        printf("The threat between 1 and 2 a pair of Queens\n");
        k++;
    }
    if ((x1==x3)||(y1==y3)||(abs(x1-x3)==abs(y1-y3)))
    {
       printf("The threat between 1 and 3 a pair of Queens\n");
       k++;
    }
    if ((x2==x3)||(y2==y3)||(abs(x2-x3)==abs(y2-y3)))
    {
       printf("The threat between 2 and 3 a pair of Queens\n");
       k++;
    }
    if (k==0) printf("There's no threat\n");

    return 0;
}

// [4 6 1 3 4 2] - "The threat between 1 and 2 a pair of Queens"
// [2 9 3 6 6 3] - "The threat between 2 and 3 a pair of Queens"
// [4 4 5 6 7 4] - "The threat between 1 and 3 a pair of Queens"
// [2 9 3 7 4 4] - "There's no threat"
