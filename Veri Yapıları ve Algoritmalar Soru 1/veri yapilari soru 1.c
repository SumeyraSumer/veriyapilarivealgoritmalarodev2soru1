#include <stdio.h>

// Veri yapýlarý ve algoritma KS-1 ödevi
// N'inci Tribonacci Sayýsý
// Sümeyra Sümer
// 5210505067

int tribonacci(int n) {
	int t0 = 0, t1 = 1, t2 = 1, tn; // baþlangýç deðerlerini atadým.
	
	if (n == 0) 
	return t0; // n=0 ise ilk Tribonacci sayýsý olan 0'ý döndürdüm.
	
	if (n == 1 || n == 2) 
	return 1; // n=1 veya n=2 ise 1 döndürdüm.
	
	int i;
	
	for (i = 3; i <= n; i++) { // n'den küçük olan tüm Tribonacci sayýlarýný hesaplamak için for döngüsü yazdým.
		tn = t0 + t1 + t2; // tn deðerini hesapladým.
		t0 = t1; // t0'ý güncelledim.
		t1 = t2; // t1'i güncelledim.
		t2 = tn; // t2'yi güncelledim.
	}
	return tn; // tn deðerini döndürdüm.
}

int main() {
	
	printf("Veri yapilari ve algoritma KS-1 odevi\n");
	printf("N'inci Tribonacci Sayisi\n");
	printf("Sumeyra Sumer\n");
	printf("5210505067\n");
	printf("-----------------------------------------------------------------------------\n");
	
	int n;
	
	printf("Lutfen negatif olmayan bir n tamsayisi girin: "); // kullanýcýdan bir n tamsayýsý istedim.
	scanf("%d", &n); // kullanýcýnýn girdiði deðeri n deðiþkenine aktardým.
	
	printf("T(%d) = %d\n", n, tribonacci(n)); // T(n) deðerini hesapladým ve ekrana yazdýrdým.
	return 0;
}
