#include <stdio.h>
#include <string.h>


main ()
{
struct data
    {
    int in,stok,harga;
    char nama[10];
    };
int n=0,x=0,y=0,pilih,pil,pil2,i,jb;
data stok[10];
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


        if (y==0)

            {
            //stok[y].in=0;
            mulai:



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
        else
            {
            for (i=0;i<y;i++)
                {
                printf ("%d\t%s\t%d\t%d\n",stok[i].in,stok[i].nama,stok[i].stok,stok[i].harga);
                }
            }
        printf ("[1] barang baru\n");
        printf ("[2] Tambah stok\n");

        printf ("pilih:");
        scanf ("%d",&pil);

        if (pil==1)
            goto mulai;
        else
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




    //case 2:
      //  n++;

    }
}while(pilih!=0);
}

