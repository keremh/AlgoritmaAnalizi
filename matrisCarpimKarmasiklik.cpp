#include <cstdlib>
#include <iostream>

using namespace std;



int main(int argc, char *argv[])
{
    int a,b,c,d,i,j,k;


  cout<<"kaca kaclik bir matris carpimi istiyorsunuz"<<endl;
  cout<<"1.matrisin satir sayisi :";
  cin>>a;
  cout<<"1.matrisin sutun sayisi :";
  cin>>b;


  cout<<"2.matrisin satir sayisi :";
  cin>>c;
  cout<<"2.matrisin sutun sayisi :";
  cin>>d;


  int mata[a][b],matb[c][d], matc[a][d];


  cout<<endl;


  if(b != c)
    {
      cout<<"bu işlem yapilamaz "<<endl;
      cout<<"1. matrisin sutun sayisi 2. matrisin satir sayisina eşit olmali"<<endl;
      return 0;
    }


  cout<<"============================================"<<endl;


  cout<<"birinci matrisin sayilarini girin"<<endl;


    for(i=0;i<a;i++)
      {
for(j=0;j<b;j++)
  {
    cout<<i+1<<". satir "<<j+1<<". sutun elemani : ";
    cin>>mata[i][j];
  }
cout<<endl;
      }


    cout<<"=========================================="<<endl;
  cout<<"ikinci matrisin sayilarini girin"<<endl;


    for(i=0;i<c;i++)
     { for(j=0;j<d;j++)
{
  cout<<i+1<<". satir "<<j+1<<". sutun elemani : ";
  cin>>matb[i][j];
}
     cout<<endl;
     }
  cout<<endl<<endl;
  for(i=0;i<a;i++)
    {
      for(j=0;j<b;j++)
cout<<mata[i][j]<<"\t";
      cout<<endl;
    }


  cout<<"==========================================="<<endl;;


  for(i=0;i<c;i++)
    {
      for(j=0;j<d;j++)
cout<<matb[i][j]<<"\t";
      cout<<endl;
    }
  cout<<"===========carpim sonucu=================="<<endl;


  for(i=0;i<a;i++)
    for(j=0;j<d;j++)
      matc[i][j]=0;


  //çarpma işleminin yapıldığı bölüm
  for(i=0;i<a;i++)
    for(j=0;j<d;j++)
      for(k=0;k<b;k++)
matc[i][j] = matc[i][j] + mata[i][k]*matb[k][j];




  cout<<endl<<endl;


  for(i=0;i<a;i++)
    {
      for(j=0;j<d;j++)
cout<<matc[i][j]<<"\t";
      cout<<endl;
    }
  //return 0;
}
