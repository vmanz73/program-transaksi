#include <stdio.h>
#include <string.h>

main()
{
struct harga
    {
    char * durasi [3]={"1 jam","2 jam","4 jam"};
    int paket[3]={1,2,3};
    int tarif[3]={2500,4000,7000};

    };
struct data
    {
    char nama[10],durasi[10];
    int paket,tarif,ike;
    };
data laporan[10];
harga paket;
int pilih,i,p,n=0;
do{
printf ("menu\n");
printf ("[1] beli paket\n");
printf ("[2] laporan\n");
printf ("[3] keluar\n");

printf ("pilih :");
scanf ("%d",&pilih);

switch (pilih)
{
case 1:
printf ("kode\tdurasi\tharga\n");
for (i=0;i<3;i++)
{
printf ("%d\t%s\tRp.%d\n",paket.paket[i],paket.durasi[i],paket.tarif[i]);
}
printf ("no transaksi:%d\n",n+1);
printf ("nama:");
scanf ("%s",&laporan[n].nama);
printf ("no paket:");
scanf ("%d",&p);
    for (i=0;i<3;i++)
        {
        if (p==paket.paket[i])
        {
        printf ("harga :Rp.%d\n",paket.tarif[i]);
        printf ("durasi :%s\n",paket.durasi[i]);
        laporan[n].ike=n+1;
        laporan[n].tarif=paket.tarif[i];
        strcpy(laporan[n].durasi,paket.durasi[i]);

        }
        }
n++;
break;

case 2:
printf("no\tnama\tpaket\ttarif\n");

for (i=0;i<n;i++)
    {
    printf ("%d\t%s\t%s\tRp.%d\n",laporan[i].ike,laporan[i].nama,laporan[i].durasi,laporan[i].tarif);
    }break;
}
}while(pilih!=3);
}
