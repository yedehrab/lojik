#pragma once
#include <stdlib.h>

class Makine {
	public:
		bool* dizi;
		bool z;

		int boyut = 0;

		// Arayüz
		void başlat();

		// Veri alma fonksiyonları
		void bitAl();

		// Dizi işlemleri fonksiyonları
		void diziyiOluştur();
		void diziyiGenişlet();
		void diziyeEkle(bool x);

		// Kontrol fonksiyonları
		void zyiGöster();
		void diziyiGöster();
		void sonlandır();
};
		