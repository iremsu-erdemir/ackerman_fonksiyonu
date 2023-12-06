/*
*     Ackerman fonksiyonu aşağıdaki gibi tanımlanır.
*
*     A(0,n)      = n+1
*     A(m+1,0)    = A(m,1)
*     A(m+1,n+1)  = A(m,A(m+1,n))
*/

#include <stdio.h>
 
int ackermann(int m, int n)
{
        if (!m) return n + 1;
        if (!n) return ackermann(m - 1, 1);
        return ackermann(m - 1, ackermann(m, n - 1));
}
 
int main()
{
        int m, n;
        for (m = 0; m <= 4; m++)
                for (n = 0; n < 6 - m; n++)
                        printf("A(%d, %d) = %d\n", m, n, ackermann(m, n));
 
        return 0;
}
