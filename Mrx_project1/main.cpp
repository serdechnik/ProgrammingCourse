#include <math.h>
#include <stdio.h>
const int n=3;
const int c[n]={5,2,1};
int main()
{
    int coins[n];
    int money;
    printf("sum of money: ");
    scanf("%d",&money);
    for (int i=0;i<n;i++)
    {
        coins[i]= money / c[i];
        printf("\n%d rub. - %d coin",c[i],coins[i]);
        money=money % c[i];
    }
    getch();
    return 0;
}
