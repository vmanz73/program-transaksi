#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
struct data
    {
    int in,stok,harga;
    char nama[10],ket[15];
    };
void ss()
{
system ("gnome-screenshot -w");
}
void clr ()
{
system ("read enterkey");
system ("clear");
}
void cari (struct data a[10],int b,int x,bool *f,int *i)
    {
    int y;
    *f=false;
    for (y=0;y<x;y++)
    {
        if (a[y].in==b)
        {
        *f=true;
        *i=y;
        break;
        }
    }
    }
void struk (struct data a[10],struct tm now[10],int n)
{
printf ("pasar ternaklele\n");
    printf ("jl.buntu 05\ntelp 021XXX karawang\n\n");
    printf("===========================================\n");
    printf ("no transaksi\t:%d\n",a[n].in);
    printf ("nama barang\t:%s\n",a[n].nama);
    printf ("harga\t\t:%d\n",a[n].harga/a[n].stok);
    printf ("quantity\t:%d\n",a[n].stok);
    printf ("jumlah harga\t:Rp.%d\n",a[n].harga);
    printf("===========================================\n");
    printf("%d/%d/%d\t%d:%d\n",now[n].tm_mday,now[n].tm_mon+1,now[n].tm_year+1900,now[n].tm_hour,now[n].tm_min);
    printf("terimakasih atas kunjungan anda\n");
}
int kurang (struct data a[10],int b,int i)
{

int hasil;
hasil=a[i].stok-b;
return hasil;
}
int kali (struct data a[10],int b,int i)
{
int h;
h=a[i].harga*b;
return h;
}
main ()
{


struct tm now[10];
bool found;
int n=0,x=0,y=0,pilih,pil,pil2,i,jb,cb,tot;
struct data stok[10],laporan[10];
time_t t;


do{


printf ("menu utama\n");
printf ("[1] lihat stok barang\n");
printf ("[2] Pembayaran\n");
printf ("[3] laporan\n");
printf ("[4] keluar\n");

printf ("pilih menu :");
scanf ("%d",&pilih);
system ("clear");
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

            n++;
            y++;


        }
        else if (pil==2)
            {
            for (i=0;i<y;i++)
                {
                printf ("%d\t%s\t%d kg\tRp.%d\n",stok[i].in,stok[i].nama,stok[i].stok,stok[i].harga);
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
clr();

        break;





    case 2:
     for (i=0;i<y;i++)
        {
        printf ("%d\t%s\t%d kg\tRp.%d\n",stok[i].in,stok[i].nama,stok[i].stok,stok[i].harga);
        }

printf ("pilih barang:");
scanf ("%d",&cb);
cari(stok,cb,y,&found,&i);
    if (found==true)
    {
    printf ("nama barang :%s\n",stok[i].nama);
    printf ("harga barang :Rp.%d/kg\n",stok[i].harga);
    printf ("jumlah barang :");
    scanf ("%d",&jb);
    stok[i].stok=kurang (stok,jb,i);
    tot=kali (stok,jb,i);
    printf ("total harga :Rp.%d\n",tot);
    t=time(NULL);
    now[n]=*localtime(&t);
    strcpy (laporan[n].nama,stok[i].nama);
    strcpy (laporan[n].ket,"terjual\t");
    laporan[n].stok=jb;
    laporan[n].harga=tot;
    laporan[n].in=n+1;
    clr();
    struk (laporan,now,n);
    ss();
    clr();
    n++;



    }

    break;

case 3:

for (i=0;i<n;i++)
{
printf("%d\t%s\t%d\tRp.%d\t%s\t%d/%d/%d\t%d:%d\n",laporan[i].in,laporan[i].nama,laporan[i].stok,laporan[i].harga,laporan[i].ket,now[i].tm_mday,now[i].tm_mon+1,now[i].tm_year+1900-2000,now[i].tm_hour,now[i].tm_min);
}

printf ("cari nomor transaksi:");
scanf ("%d",&cb);
system ("clear");
cari (laporan,cb,n,&found,&i);
    if (found==true)
    {
     if (strcmp(laporan[i].ket,"terjual\t")==0)
     {
     struk(laporan,now,i);
     }
     else
     printf("%d\t%s\t%d kg\tRp.%d\t%s\t%d/%d/%d\t%d:%d\n",laporan[i].in,laporan[i].nama,laporan[i].stok,laporan[i].harga,laporan[i].ket,now[i].tm_mday,now[i].tm_mon+1,now[i].tm_year+1900-2000,now[i].tm_hour,now[i].tm_min);
    }
clr();

break;


    }
}while(pilih!=4);
}

