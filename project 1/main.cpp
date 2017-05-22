#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

main ()
{
struct waktu
    {
    int tanggal,bulan,tahun,jam,mnt;
    };
struct data
    {
    int in,stok,harga;
    char nama[10],ket[15];
    struct waktu jam;
    };
struct tm now[100];
int n=0,x=0,y=0,pilih,pil,pil2,i,jb,cb,tot;
data stok[10],laporan[10];
time_t t;

 stok[y].in=y+1;
            printf ("Masukan barang\n");
            printf ("nama barang:");
            scanf("%s",&stok[y].nama);
            printf ("jumlah barang (kg):");
            scanf ("%d",&stok[y].stok);
            printf ("harga :");
            scanf ("%d",&stok[y].harga);
            strcpy (laporan[n].nama,stok[y].nama);
            strcpy(laporan[n].ket,"barang baru");
            laporan[n].stok=stok[y].stok;
            laporan[n].harga=stok[y].harga;
            laporan[n].in=n+1;
            t=time(NULL);
            now[n]=*localtime(&t);

            n++;
            y++;


do{


printf ("menu utama\n");
printf ("[1] lihat stok barang\n");
printf ("[2] Pembayaran\n");
printf ("[3] laporan\n");
printf ("[4] keluar\n");

printf ("pilih menu\n");
scanf ("%d",&pilih);

switch (pilih)
    {
    case 1:
               for (i=0;i<y;i++)
                {
                printf ("%d\t%s\t%d\t%d\n",stok[i].in,stok[i].nama,stok[i].stok,stok[i].harga);
                }

        printf ("[1] barang baru\n");
        printf ("[2] Tambah stok\n");

        printf ("pilih:");
        scanf ("%d",&pil);

        if (pil==1)
        {
            t=time(NULL);
            now[n]=*localtime(&t);
            stok[y].in=y+1;
            printf ("Masukan barang\n");

            printf ("nama barang:");
            scanf("%s",&stok[y].nama);
            printf ("jumlah barang (kg):");
            scanf ("%d",&stok[y].stok);
            printf ("harga :");
            scanf ("%d",&stok[y].harga);
            strcpy (laporan[n].nama,stok[y].nama);
            strcpy(laporan[n].ket,"barang baru");
            laporan[n].stok=stok[y].stok;
            laporan[n].harga=stok[y].harga;
            laporan[n].in=n+1;
            //laporan[n].jam.tanggal=now.tm_mday;
            //laporan[n].jam.bulan=now.tm_mon+1;
            //laporan[n].jam.tahun=(now.tm_year+1900)%1000;
            //laporan[n].jam.jam=now.tm_hour;
            //laporan[n].jam.mnt=now.tm_min;
            n++;
            y++;


        }
        else if (pil==2)
            {
            for (i=0;i<y;i++)
                {
                printf ("%d\t%s\t%d\t%d\n",stok[i].in,stok[i].nama,stok[i].stok,stok[i].harga);
                }

        printf ("pilih barang");
        scanf ("%d",&pil2);

            for (i=0;i<y;i++)
                {
                    if (pil2==stok[i].in)
                    {
                    t=time(NULL);
                    now[n]=*localtime(&t);
                    printf ("masukan jumlah barang");
                    scanf ("%d",&jb);
                    stok[i].stok=stok[i].stok+jb;
                    strcpy (laporan[n].nama,stok[i].nama);
                    strcpy(laporan[n].ket,"tambah stok");
                    laporan[n].stok=stok[i].stok;
                    laporan[n].harga=stok[i].harga;
                    laporan[n].in=n+1;
                    n++;


                    }
                }
        }


        break;





    case 2:
     for (i=0;i<y;i++)
        {
        printf ("%d\t%s\t%d\t%d\n",stok[i].in,stok[i].nama,stok[i].stok,stok[i].harga);
        }

printf ("pilih barang:");
scanf ("%d",&cb);
    for (i=0;i<y;i++)
    {
    if (stok[i].in==cb)
    {
    printf ("nama barang :%s\n",stok[i].nama);
    printf ("harga barang :Rp.%d/kg\n",stok[i].harga);
    printf ("jumlah barang :");
    scanf ("%d",&jb);
    stok[i].stok=stok[i].stok-jb;
    tot=jb*stok[i].harga;
    printf ("total harga :Rp.%d\n",tot);
    t=time(NULL);
    now[n]=*localtime(&t);
    strcpy (laporan[n].nama,stok[i].nama);
    strcpy (laporan[n].ket,"terjual\t");
    laporan[n].stok=jb;
    laporan[n].harga=tot;
    laporan[n].in=n+1;
    n++;
    system ("clear");
    printf ("pasar ternaklele");
    printf ("jl.buntu 05\ntelp 021XXX karawang\n\n");
    printf("===========================================\n");
    printf ("no transaksi\t:%d\n",n);
    printf ("nama barang\t:%s\n",stok[i].nama);
    printf ("harga\t\t:%d\n",stok[i].harga);
    printf ("quantity\t:%d\n",jb);
    printf ("jumlah harga\t:Rp.%d\n",tot);
    printf("===========================================\n");
    printf("%d/%d/%d\t%d:%d\n",now[n-1].tm_mday,now[n-1].tm_mon+1,now[n-1].tm_year+1900,now[n-1].tm_hour,now[n-1].tm_min);
    printf("terimakasih atas kunjungan anda\n");


    }
    system ("read enterkey && clear");
    }break;

case 3:

for (i=0;i<n;i++)
{
printf("%d\t%s\t%d\tRp.%d\t%s\t%d/%d/%d\t%d:%d\n",laporan[i].in,laporan[i].nama,laporan[i].stok,laporan[i].harga,laporan[i].ket,now[i].tm_mday,now[i].tm_mon+1,now[i].tm_year+1900-2000,now[i].tm_hour,now[i].tm_min);
}

printf ("cari nomor transaksi:");
scanf ("%d",&cb);
for (i=0;i<n;i++)
    {
    if (cb==laporan[i].in)
    {
    printf("%d\t%s\t%d\tRp.%d\t%s\t%d/%d/%d\t%d:%d\n",laporan[i].in,laporan[i].nama,laporan[i].stok,laporan[i].harga,laporan[i].ket,now[i].tm_mday,now[i].tm_mon+1,now[i].tm_year+1900-2000,now[i].tm_hour,now[i].tm_min);
    }
    }


    }
}while(pilih!=4);
}

