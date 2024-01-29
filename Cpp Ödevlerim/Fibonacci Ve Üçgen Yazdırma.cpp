#include <iostream>
using namespace std;
void fibonacci(int x);
void triangel(int x);

int main() {//İstekleri Kullanıcıdan Alıyoruz
  int sayı;
  int decision;
  cout << "Fibonacci için 0 ; Üçgen için 1 giriniz" << endl;
  cin >> decision;
  switch (decision) {//Switch İle Seçim Yapıldı
  case 0:
    cout << "Fibonacci sayısı girin" << endl;
    cin >> sayı;
    fibonacci(sayı);
    break;
  case 1:
    cout << "Üçgen için tek sayı girin" << endl;
    cin >> sayı;
    triangel(sayı);
    break;
  default:
    main();
    break;
  }
}

void fibonacci(int x) {//Fibonacci Fonksiyonu
  int i = 0;
  int l = 1;
  int k;
  cout << "*" << endl;
  while (k <= x) {
    k = i + l;
    if (k <= x) {
      //Fibonacci Kuralına Göre Yıldız Yazdırılıyor
      for (int j = 0; j < k; j++) {
        cout << "*";
      }
      i = l;
      l = k;
    }
    cout << endl;
  }
}

void triangel(int x) { //Üçgen Fonksiyonu
  int num;

  if (x % 2 != 0) {//Çift Sayı Kontrolü
    num = x;
    for (int a = 1; a <= x; a += 2) {

      for (int j = 0; j <= num / 2; j++) {// Boşlukları Yazdırma
        cout << " ";
      } 
      num -= 2;

      for (int i = 1; i <= a; i++) { //Üçgeni Yazdırma
        cout << "*";
      }
      cout << endl;
    }

  } else {//Tek Sayı Girilirse Tekrardan İstenecek
    cout << "Tek sayı giriniz" << endl;
    cin >> x;
     return triangel(x);
  }
}