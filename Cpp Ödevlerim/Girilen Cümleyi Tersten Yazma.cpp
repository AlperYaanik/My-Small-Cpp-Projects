#include <iostream>
#include <cstring>
using namespace std;

string reverse( const char* x, int size);

int main() {
  string kelime;
  cout << "Bir cümle giriniz" << endl;//Kullanıcı Girişi
  getline(cin,kelime);
  int k = kelime.size();

  //Ters Çeviren Fonksiyonumuzu Çağırıyoruz
  string tersten = reverse(kelime.c_str(), k);
  cout << tersten<< endl;
  return 0;
}

string reverse(const char* x, int size) {//Ters Çevirme Fonksiyonu
  if (size == 0) {
    return string(1, x[size]);
  } else {//Kelimenin Tersini Bulma
    return x[size] + reverse(x, size - 1);
  }
}