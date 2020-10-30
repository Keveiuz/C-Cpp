#include <stdio.h>
#define INF 0x3f3f3f

int a[10000], max = INF, min = -INF;

int main()
{
    int n ;
    printf("Please type in how many data you want to compare :\n");
    scanf("%d" , &n);

    printf("Now you can type in the data :\n");
    for(int i = 1 ; i <= n ; i ++)
    {
        scanf("%d" , &a[i]);
    }
    
    for(int i = 1 ; i <= n ; i ++)
    {
        if(a[i] > max) max = a[i];
        if(a[i] < min) min = a[i];
    }

    printf("RESULT:\n");
    printf("Maximum : %d\n" , max);
    printf("Minimum : %d\n" , min);
    return 0 ;
}


