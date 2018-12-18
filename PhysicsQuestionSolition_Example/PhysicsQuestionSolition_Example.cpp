// PhysicsQuestionSolition_Example.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

void serbestDusme(float hiz, float &zaman, float &yukseklik) { // Gelen de�erler ile zaman ve y�kseklik hesaplan�yor.
	const float G = 9.80665; //(m/s2) // sabit olan g de�eri tan�mland�.
							 // h = v2/2g; y�kseklik formul�
	float h = (hiz*hiz) / (2 * G); // y�kseklik hesaplan�yor.
	yukseklik = h; // hesaplanan de�er yukseklik de�i�kenine aktar�l�yor.
				   // t = v/g; zaman formul�
	float t = hiz / G; // zaman hesaplan�yor.
	zaman = t; // hesaplanan de�er zaman de�i�kenine aktar�l�yor.

}

int main()
{
	float hiz, zaman, yukseklik; // h�z, zaman ve y�kseklik de�erlerini tutan de�i�kenler.
	cout << "Hiz (m/s) giriniz: "; // h�z de�erini okunas� i�in kullan�c�y� bilgilendiriyor.
	cin >> hiz; // okunan de�eri hiz de�i�kenine aktar�yor.
	serbestDusme(hiz, zaman, yukseklik); // serbestDusme fonsiyonu �e��r�l�yor.
	cout << "Zaman: " << zaman << " saniye" << endl; // serbestDusme fonksiyonu ile hesaplanan Zaman de�eri ekrana yaz�l�yor.
	cout << "Yukseklik: " << yukseklik << " metre" << endl; // serbestDusme fonksiyonu ile hesaplanan Yukseklik de�eri ekrana yaz�l�yor.
	system("pause"); // Konsol Ekran� durduruldu.
	return 0;
}

