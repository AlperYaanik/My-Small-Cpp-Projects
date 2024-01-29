#include <iostream>
#include <random>
#include <ctime>
#include <vector>
using namespace std;

int main() {
  //Rastgele Eleman Üretme Bölümü
    default_random_engine engine(static_cast<unsigned int>(time(0)));
    uniform_int_distribution<unsigned int> randomInt(0, 5);

    vector<unsigned int> vec1{};
    cout<< "Düzenlenmemiş Vektör: ";
    //Vektöre Eleman Ekleme
  for (int i = 0; i < 10; i++){
        vec1.push_back(randomInt(engine)); 
        cout << vec1[i];
    }
cout<<endl<<"Eşsiz Vektör: ";
  //Değerleri Aynı Olan Elemanları Silme
    for (int i = 0; i < vec1.size(); i++) {
        for (int j = i + 1; j < vec1.size(); j++) {
            if (vec1[i] == vec1[j]) {
                vec1.erase(vec1.begin() + j); 
                j--; 
            }
        }
    }
//Vektör Yazdırılıyor
    for (int i = 0; i < vec1.size(); i++) {
        cout << vec1[i];
    }

    return 0;
}
