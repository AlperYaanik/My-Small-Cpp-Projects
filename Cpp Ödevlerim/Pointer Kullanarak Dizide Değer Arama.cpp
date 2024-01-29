#include <iostream>
using namespace std;

int main() {
  // Dizi Oluşturuluyor Ve Kullanıcı Girişi Alınıyor
  int arr[10] = {};
  cout << "Lütfen 10 eleman giriniz\n";
  for (int i = 0; i < 10; i++) {
    cin >> arr[i];
  }

  int *ptr = arr;
  int value, found = 0;

  cout << "Aranıcak elemanı seçiniz ";
  cin >> value;
  // Pointerin Değeri Eşit mi diye Bakıyoruz Ve Pointerın adresini arttırıyoruz
  for (int i = 0; i < 10; i++) {
    if (*ptr == value) {
      cout << "Aradğınız eleman bu sırada bulunuyor:" << i << endl;
      found = 1;
    }
    ptr++;
  }
  // Eğer Pointera Eşit Değilse Bulunamadı Mesajı Yazdırıyoruz
  if (found == 0) {
    cout << "Aradğınız eleman bulunmuyor " << endl;
  }

  return 0;
}