#include <stdio.h>
int IsWithinRange(float X, float min, float max);
int main()
{
    int WithinRange, banyak_mahasiswa=0, banyak_lulus=0, banyak_tidak_lulus=0;
    float min=0,max=4, IP_rata_rata=0, jumlah=0, A,mark=-999;
    scanf("%f",&A);
    if(A==mark){
        printf("Tidak ada data");
        printf("\n");
        return 0;
    }
    while (A!=mark){
        WithinRange = IsWithinRange(A,min, max);
        if(WithinRange==1){
            jumlah = jumlah+A;
            banyak_mahasiswa++;
            if(A>=2.75){
                banyak_lulus++;
            }else{
                banyak_tidak_lulus++;
            }
        }
        scanf ("%f",&A);
    }
    IP_rata_rata = jumlah/banyak_mahasiswa;
    printf("%d \n",banyak_mahasiswa);
    printf("%d \n",banyak_lulus);
    printf("%d \n", banyak_tidak_lulus);
    printf("%.2f", IP_rata_rata);
    printf("\n");
    return 0;
}
int IsWithinRange (float X, float min, float max)
{
    if(X>=min && X<=max){
        return 1;
    }
    return 0;
}

