#include <stdio.h>
#include <string.h>


main ()
{
struct data
    {
    int in,stok,harga;
    char nama[10];
    };
int n=0,x=0,y=0,pilih,pil,pil2,i,jb,cb,tot;
data stok[10],laporan[10];


 stok[y].in=y+1;
            printf ("Masukan barang\n");
            printf ("nama barang:");
            scanf("%s",&stok[y].nama);
            printf ("jumlah barang (kg):");
            scanf ("%d",&stok[y].stok);
            printf ("harga :");
            scanf ("%d",&stok[y].harga);
            y++;

do{

kembali:
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
            //}
        printf ("[1] barang baru\n");
        printf ("[2] Tambah stok\n");

        printf ("pilih:");
        scanf ("%d",&pil);

        if (pil==1)
        {
            stok[y].in=y+1;
            printf ("Masukan barang\n");

            printf ("nama barang:");
            scanf("%s",&stok[y].nama);
            printf ("jumlah barang (kg):");
            scanf ("%d",&stok[y].stok);
            printf ("harga :");
            scanf ("%d",&stok[y].harga);
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
                    printf ("masukan jumlah barang");
                    scanf ("%d",&jb);
                    stok[i].stok=stok[i].stok+jb;
                    }
                }
        }
        else
            {
            goto kembali;
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

    strcpy (laporan[n].nama,stok[i].nama);
    laporan[n].stok=jb;
    laporan[n].harga=tot;
    laporan[n].in=n+1;
    n++;

    }
    }break;

case 3:

for (i=0;i<n;i++)
{
printf("%d\t%s\t%d\tRp.%d\n",laporan[i].in,laporan[i].nama,laporan[i].stok,laporan[i].harga);
}


    }
}while(pilih!=0);
}

