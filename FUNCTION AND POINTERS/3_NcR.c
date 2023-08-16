#include <stdio.h>

int main()
{
    int n, r;
    printf("enter n:");
    scanf("%d", &n);
    printf("enter r:");
    scanf("%d", &r);
    int nfact = 1, rfact = 1, nrfact = 1;
    for (int i = 1; i <= n; i++)
    {
        nfact = nfact * i;
    }
    for (int i = 1; i <= r; i++)
    {
        rfact = rfact * i;
    }
    for (int i=1; i <= n - r; i++)
    {
        nrfact = nrfact * i;
    }

    int ncr = nfact / (rfact * nrfact);
    printf("the NcR value is %d", ncr);
    return 0;
}