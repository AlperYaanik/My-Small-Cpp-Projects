#include <iostream>
using namespace std;

class yemek {
protected:
    string ad;
    float fiyat;
    string ozellik;

public:
    // Yemek sınıfının constructoru
    yemek(string ad, float fiyat, string ozellik) : ad(ad), fiyat(fiyat), ozellik(ozellik) {}

    // Sipariş et fonksiyonu
    virtual void siparis_et() {
        cout << "Yemek siparişi verildi." << endl;
    }
};

class kebap : public yemek {
public:
    // Kebap sınıfının constructoru
    kebap(string ad, float fiyat, string ozellik) : yemek(ad, fiyat, ozellik) {}

    // Sipariş et fonksiyonunun aşırı yüklenmiş hali
    void siparis_et() override {
        cout << ozellik << " " << ad << " siparişi verildi, pişiyor." << endl;
    }
};

class makarna : public yemek {
public:
    // Makarna sınıfının constructoru
    makarna(string ad, float fiyat, string ozellik) : yemek(ad, fiyat, ozellik) {}

    // Sipariş et fonksiyonunun aşırı yüklenmiş hali
    void siparis_et() override {
        cout << ozellik << " " << ad << " siparişi verildi, bekleyiniz." << endl;
    }
};

class kumpir : public yemek {
public:
    // Kumpir sınıfının constructoru
    kumpir(string ad, float fiyat, string ozellik) : yemek(ad, fiyat, ozellik) {}

    // Sipariş et fonksiyonunun aşırı yüklenmiş hali
    void siparis_et() override {
        cout << ozellik << " " << ad << " siparişi verildi, patates çıkarılıyor." << endl;
    }
};