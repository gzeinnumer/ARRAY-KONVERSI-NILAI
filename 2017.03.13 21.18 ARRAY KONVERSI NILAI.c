/*
nama    : M Fadli Zein
Nobp    : 1601081035
Kelas   : TK1B
Np      : Array Dasar
*/

#include"stdio.h"
main()
{
    int nilai[100];
    int i;
    char huruf[15];

    for(i=0; i<5; i++)
    {
        printf("Masukan Nilai Mahasiswa %d:  ",i+1); scanf("%d",&nilai[i]);
    }
    for(i=0; i<5; i++)
    {
        if(nilai[i]>=81 && nilai[i]<=100)
        {
            huruf[i]='A';
        }
        else if(nilai[i]>=71 && nilai[i]<=80)
        {
            huruf[i]='B';
        }
        else if(nilai[i]>=56 && nilai[i]<=70)
        {
            huruf[i]='C';
        }
        else if(nilai[i]>=56 && nilai[i]<=70)
        {
            huruf[i]='D';
        }
        else
        {
            huruf[i]='E';
        }
    }
    printf("\n\n");
    for(i=0; i<5; i++)
    {
        printf("Nilai Mahasiswa Ke-%d Dengan Nilai %d Dan Keterangan %c \n",i+1,nilai[i],huruf[i]);
    }
}
