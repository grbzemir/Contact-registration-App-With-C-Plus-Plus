#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<conio.h>

using namespace std;

#define MAX 10

char ad[MAX][20];
char soyad[MAX][20];
char adres[MAX][20];
char meslek[MAX][20];

int cnt = 0;

int menu();

void kisiEkle();
void isimAra();
void soyadAra();
void adresAra();
void yazdir(int , int );
void listele();
void kayitYap(char * );

   
   int main()
   {
     
     int secim;
     secim=menu();

     while(secim!=0)

     {

        switch(secim)
    
    {
        case 1: 
        kisiEkle(); 
        break;

        case 2: 
        isimAra();
        break;

        case 3: 
        soyadAra(); 
        break;

        case 4: 
        adresAra(); 
        break;

        case 5: 
        listele(); 
        break;

        case 0: 
        cout<<"Cikis yapiliyor..."<<endl;
        break;

        default: cout<<"Yanlis secim yaptiniz..."<<endl;
        break;
    
     }

     secim=menu();

     }

     return 0;

   }

   int menu()
   {
     
     int secim;
     cout<<"\n\tKISI KAYIT UYGULAMASI"<<endl;
     cout<<"[1]-Kisi Ekle"<<endl;
     cout<<"[2]-Isim Ara"<<endl;
     cout<<"[3]-Soyad Ara"<<endl;
     cout<<"[4]-Adres Ara"<<endl;
     cout<<"[5]-Listele"<<endl;
     cout<<"[0]-Cikis"<<endl;
     cout<<"Seciminiz:";

     secim= getche() -'0';
     system("cls");
     cout<<endl;

     return secim;


     return 0;



   }

   void kisiEkle()
   {

    cout<<"Kisi Ekleme Ekrani.."<<endl;
    cout<<"Ad:"; cin>>ad[cnt];
    cout<<"Soyad:"; cin>>soyad[cnt];
    cout<<"Adres:"; cin>>adres[cnt];
    cout<<"Meslek:"; cin>>meslek[cnt];

    cout<<"Kayit basariyla yapildi..."<<endl;
    cnt++;

   }


   void isimAra()
   {

    char aranan[20];
    cout<<"Isim arama ekrani.."<<endl;
    cout<<"Aranan isim:"; 
    kayitYap(aranan );

    int i;
    int j;
    i=0;
    j=0;

    while (i<cnt)

    {

        if(strcmp(ad[i],aranan))

        {

            yazdir(i,j);
            j++;

        }

        i++;
        
    }

    if(j==0)

    {

        cout<<"Kayit bulunamadi..."<<endl;
    }

    }

    void soyadAra()
    {

    char aranan[20];
    cout<<"Soyad arama ekrani.."<<endl;
    cout<<"Aranan soyad:";
    kayitYap(aranan);

    int i;
    int j;
    i=0;
    j=0;

    while (i<cnt)

    {

        if(strcmp(soyad[i],aranan))

        {

            yazdir(i,j);
            j++;

        }

        i++;
        
    }

    if(j==0)

    {

        cout<<"Kayit bulunamadi..."<<endl;
    }

    }

    void adresAra()
    {

    char aranan[20];
    cout<<"Adres arama ekrani.."<<endl;
    cout<<"Aranan sehir adresi:";
    kayitYap(aranan);

    int i;
    int j;
    i=0;
    j=0;

    while (i<cnt)

    {

        if(strcmp(adres[i],aranan))

        {

            yazdir(i,j);
            j++;

        }

        i++;
        
    }

    if(j==0)

    {

        cout<<"Kayit bulunamadi..."<<endl;
    }

    }

    void yazdir(int i, int j)
    {
        if(j==0)
        {
            cout<<"Ad\tSoyad\tAdres\tMeslek"<<endl;
        }
    
        cout<<ad[i]<<"\t"<<soyad[i]<<"\t"<<adres[i]<<"\t"<<meslek[i]<<endl;

    }

    void listele()
    {

    int i;
    i=0;

    cout<<"Listeleme Ekrani.."<<endl; 
    cout<<"Ad\tSoyad\tAdres\tMeslek"<<endl;

    while(i<cnt)

    {

        cout<<ad[i]<<"\t"<<soyad[i]<<"\t"<<adres[i]<<"\t"<<meslek[i]<<endl;
        i++;

    }

    if(i==0)
    {

        system("cls");
        cout<<"Kayit bulunamadi..."<<endl;
    }

    }

    void kayitYap(char *ptr)
    {

     fgets(ptr,20,stdin);
     int n;
     n=strlen(ptr);
     ptr[n-1]='\0';

    }



