#include <stdio.h>

// Veri yap�lar� ve algoritma KS-1 �devi
// N'inci Tribonacci Say�s�
// S�meyra S�mer
// 5210505067

int tribonacci(int n) {
	int t0 = 0, t1 = 1, t2 = 1, tn; // ba�lang�� de�erlerini atad�m.
	
	if (n == 0) 
	return t0; // n=0 ise ilk Tribonacci say�s� olan 0'� d�nd�rd�m.
	
	if (n == 1 || n == 2) 
	return 1; // n=1 veya n=2 ise 1 d�nd�rd�m.
	
	int i;
	
	for (i = 3; i <= n; i++) { // n'den k���k olan t�m Tribonacci say�lar�n� hesaplamak i�in for d�ng�s� yazd�m.
		tn = t0 + t1 + t2; // tn de�erini hesaplad�m.
		t0 = t1; // t0'� g�ncelledim.
		t1 = t2; // t1'i g�ncelledim.
		t2 = tn; // t2'yi g�ncelledim.
	}
	return tn; // tn de�erini d�nd�rd�m.
}

int main() {
	
	printf("Veri yapilari ve algoritma KS-1 odevi\n");
	printf("N'inci Tribonacci Sayisi\n");
	printf("Sumeyra Sumer\n");
	printf("5210505067\n");
	printf("-----------------------------------------------------------------------------\n");
	
	int n;
	
	printf("Lutfen negatif olmayan bir n tamsayisi girin: "); // kullan�c�dan bir n tamsay�s� istedim.
	scanf("%d", &n); // kullan�c�n�n girdi�i de�eri n de�i�kenine aktard�m.
	
	printf("T(%d) = %d\n", n, tribonacci(n)); // T(n) de�erini hesaplad�m ve ekrana yazd�rd�m.
	return 0;
}
