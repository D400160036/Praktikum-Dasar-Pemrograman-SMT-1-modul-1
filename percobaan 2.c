#include<stdio.h>
#include<math.h>
int main ()
{
    int a,b;
    int c;
    float f;
    printf("Operasi Aritmatika 2 Variabel\n\n");
    printf("Masukkan Nilai a : \n");
    scanf("%d",&a);
    printf("Masukkan Nilai b : \n");
    scanf("%d",&b);
    c=a+b;
    printf("Hasil %d+%d=%d\n",a,b,c);
    f=70.0/3.0;
    printf("nilai dari f : %f\n",f);
    return 0;
}
