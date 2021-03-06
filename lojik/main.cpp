#include <iostream>
#include "makine.h"

using namespace std;

// Yunus Emre Ak
// Sefa Yalcındag
// Niyazi Eren

int main () {
	Makine makine;

	makine.başlat();
}

void Makine::başlat() {
	while (true) {
		cout << "x'i gir: ";
		
		bitAl();
		system("cls");
		zyiGöster();
		diziyiGöster();
		sonlandır();
	}
}

void Makine::diziyiOluştur() {
	dizi = (bool*)malloc(sizeof(bool));

	boyut = 1;
}

void Makine::diziyiGenişlet() {
	if (dizi == NULL) 
		diziyiOluştur();
	else 
		dizi = (bool*)realloc(dizi, sizeof(bool) * ++boyut);
}

void Makine::diziyeEkle(bool x) {
	diziyiGenişlet();
	dizi[boyut - 1] = x;
}

void Makine::zyiGöster() {
	if (boyut >= 3 &&
		dizi[boyut - 3] == 0 &&
		dizi[boyut - 2] == 1 &&
		dizi[boyut - 1] == 1
		)
		z = 1;
	else
		z = 0;

	cout << "z = " << z << endl;
}

void Makine::bitAl() {
	bool x;
	cin >> x;
	diziyeEkle(x);
}

void Makine::diziyiGöster() {
	cout << "Dizi: ";

	for (int i = 0; i < boyut; i++)
		cout << dizi[i];

	cout << endl << "-----------------\n";
}

void Makine::sonlandır() {
	if (boyut >= 3 &&
		dizi[boyut - 3] == 1 &&
		dizi[boyut - 2] == 0 &&
		dizi[boyut - 1] == 0) {

		cout << "100 dizisi yakalandi. Makine sonlandirildi" << endl;
		system("pause");
		exit(0);
	}
}