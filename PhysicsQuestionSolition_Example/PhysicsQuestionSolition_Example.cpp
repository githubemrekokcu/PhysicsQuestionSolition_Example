// PhysicsQuestionSolition_Example.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

void serbestDusme(float hiz, float &zaman, float &yukseklik) { // Gelen deðerler ile zaman ve yükseklik hesaplanýyor.
	const float G = 9.80665; //(m/s2) // sabit olan g deðeri tanýmlandý.
							 // h = v2/2g; yükseklik formulü
	float h = (hiz*hiz) / (2 * G); // yükseklik hesaplanýyor.
	yukseklik = h; // hesaplanan deðer yukseklik deðiþkenine aktarýlýyor.
				   // t = v/g; zaman formulü
	float t = hiz / G; // zaman hesaplanýyor.
	zaman = t; // hesaplanan deðer zaman deðiþkenine aktarýlýyor.

}

int main()
{
	float hiz, zaman, yukseklik; // hýz, zaman ve yükseklik deðerlerini tutan deðiþkenler.
	cout << "Hiz (m/s) giriniz: "; // hýz deðerini okunasý için kullanýcýyý bilgilendiriyor.
	cin >> hiz; // okunan deðeri hiz deðiþkenine aktarýyor.
	serbestDusme(hiz, zaman, yukseklik); // serbestDusme fonsiyonu çeðýrýlýyor.
	cout << "Zaman: " << zaman << " saniye" << endl; // serbestDusme fonksiyonu ile hesaplanan Zaman deðeri ekrana yazýlýyor.
	cout << "Yukseklik: " << yukseklik << " metre" << endl; // serbestDusme fonksiyonu ile hesaplanan Yukseklik deðeri ekrana yazýlýyor.
	system("pause"); // Konsol Ekraný durduruldu.
	return 0;
}

