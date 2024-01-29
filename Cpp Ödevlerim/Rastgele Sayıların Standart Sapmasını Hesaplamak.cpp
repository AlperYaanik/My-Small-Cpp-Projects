//Kütüphaneleri Çağırıyoruz
#include <iostream>
#include <random>
#include <ctime>
#include <array>
#include <cmath>
using namespace std;

int main() {
//Rastgele Sayıları Üretiyoruz
default_random_engine engine(static_cast<unsigned int>(time(0)));
uniform_int_distribution<unsigned int>randomInt(0,999);
  
  array<unsigned int,10> arr1{};
for(int i=0;i<10;i++){//Rastgele Sayılar ile Dizi Oluşturuyoruz
  arr1[i]=randomInt(engine);
  cout<< i <<". Sayı: "<<arr1[i]<<endl;
}
   double sum = 0;
    for (int i = 0; i < 10; i++) {//Dizi Elemanlarını Topluyoruz
        sum += arr1[i];
    }
    double ortalama = sum / 10; //Ortalama Hesaplıyoruz
    
    double diff = 0;
    double square_sum = 0;
    for (int i = 0; i < 10; i++) {//Dizi Elemanlarını Karelerini Topluyoruz
        diff = arr1[i] - ortalama;
        square_sum += pow(diff, 2);
    }
    
    double variance = square_sum / 9;
    double standard_sapma = sqrt(variance);
  //Standart Sapma Hesaplıyoruz ve Yazdırıyoruz
    cout << "Standard Sapma: " << standard_sapma << endl;
    
    return 0;
}