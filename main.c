#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int Num;
    int Denom;
} FRAC;

FRAC Divide_fractions(FRAC n, FRAC m) {
    FRAC ans;
    ans.Num = n.Num * m.Denom;
    ans.Denom = n.Denom * m.Num;
    return ans;
}

FRAC add_fractions(FRAC N1, FRAC N2) {
    FRAC add;
    add.Num = (N1.Num * N2.Denom) + (N2.Num * N1.Denom);
    add.Denom = N1.Denom * N2.Denom;
    return add;
}

int main() {
    int i,dMin,aMin;
    FRAC N1, N2, N, K;
    printf("numerator of n1: ");
    scanf("%d", &N1.Num);
    printf("denominator of n1: ");
    scanf("%d", &N1.Denom);
    printf("numerator of n2: ");
    scanf("%d", &N2.Num);
    printf("denominator of n2: ");
    scanf("%d", &N2.Denom);
    N = Divide_fractions(N1, N2);
    K = add_fractions(N1, N2);
    if(K.Num>K.Denom)
        aMin=K.Denom;
    else
        aMin=K.Num;
    if(N.Num>N.Denom)
        dMin=N.Denom;
    else
        dMin=N.Num;
    for(i=2;i<=aMin;i++)
    {
        if(K.Num%i==0 && K.Denom%i==0)
        {
            K.Denom=K.Denom/i;
            K.Num=K.Num/i;
        }
    }
    for(i=2;i<=dMin;i++)
    {
         if(N.Num%i==0 && N.Denom%i==0)
        {
            N.Denom=N.Denom/i;
            N.Num=N.Num/i;
        }
    }


    if(N.Num%N.Denom==0)
        printf("result of divide of N1 and N2 IS %d \n",N.Denom/N.Num);
    else
        printf("result of divide of N1 and N2 IS %d/%d\n", N.Num, N.Denom);
    if(K.Num%K.Denom==0)
        printf("result of addition of N1 and N2 IS %d \n",K.Num/K.Denom);
    else
        printf("result of addition of N1 and N2 IS %d/%d\n", K.Num, K.Denom);

    return 0;
}
