#include <cstdlib>
#include <iostream>

using namespace std;

int us(int sayi, int ussu){
    int sonuc=1;
    for(int i=1;i<=ussu;i++)
    sonuc=sonuc*sayi;
    return sonuc;
}

int main(int argc, char *argv[])
{
    
    int sayi;
    int uss;
    cout<<"Bir sayi giriniz: "<<endl;
    cin>>sayi;
 
    cout <<"ussunu giriniz: "<<endl;
    cin>>  uss;

    cout<<"Hesaplanan deger: "<<us(sayi,uss)<<endl;
    
}
