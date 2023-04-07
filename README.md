# veriyapilarivealgoritmalarodev2soru1

N'inci Tribonacci Sayısı


ALGORİTMANIN AMACI


Bu algoritmanın amacı, kullanıcının girdiği n sayısına göre Tribonacci dizisindeki n. sayıyı hesaplamaktır. Tribonacci dizisi, Fibonacci dizisine benzer şekilde ilk iki elemanı 1 olan ve sonraki elemanın, önceki üç elemanın toplamıyla elde edildiği bir sayı dizisidir. Örneğin, Tribonacci dizisi şöyle başlar: 1, 1, 2, 4, 7, 13, 24, 44, 81, ...
Algoritma, öncelikle n değerinin sıfır veya pozitif olup olmadığını kontrol eder. Eğer n sıfırsa, ilk Tribonacci sayısı olan 0'ı döndürür. Eğer n 1 veya 2 ise, 1 döndürür. Eğer n 3 veya daha büyük bir değer ise, for döngüsü kullanarak Tribonacci dizisindeki n. sayıyı hesaplar ve bu değeri döndürür.
Algoritmanın genel işleyişi şöyle özetlenebilir:

•	Kullanıcıdan n sayısı istenir.

•	n sayısının geçerli olup olmadığı kontrol edilir.

•	Tribonacci dizisindeki n. sayı hesaplanır.

•	Hesaplanan değer ekrana yazdırılır.


ALGORİTMA NE İÇİN KULLANILIR/KULLANILABİLİR?


Bu algoritma Tribonacci dizisindeki belirli bir indeksteki sayıyı hesaplamak için kullanılır.
Bu algoritma, kullanıcının belirli bir indeks n girdiğinde, T(n) Tribonacci sayısını hesaplar ve ekrana yazdırır.


ALGORİTMANIN ÇALIŞMA ŞEKLİ


Bu program Tribonacci sayılarını hesaplamak için yazılmıştır. Tribonacci sayıları, Fibonacci sayılarına benzer şekilde oluşur, ancak her bir sayı önceki üç sayının toplamıdır. Yani, T(n) = T(n-1) + T(n-2) + T(n-3) şeklinde tanımlanırlar.
Program başlangıçta t0, t1 ve t2 değişkenlerine sırasıyla 0, 1 ve 1 değerlerini atar. Bu değişkenler, ilgili Tribonacci sayılarının hesaplanması için kullanılacaktır.
Daha sonra, program n değişkeninin değerine göre üç farklı durumda işlem yapar. Eğer n=0 ise, ilk Tribonacci sayısı olan 0 değerini döndürür. Eğer n=1 veya n=2 ise, T(1) ve T(2) sayılarının değeri olan 1'i döndürür.
Eğer n, 3'ten büyük ise, program bir for döngüsü içinde tüm Tribonacci sayılarını hesaplar. Döngü her turunda, t0, t1 ve t2 değişkenleri güncellenir ve tn değişkeni yeni bir Tribonacci sayısı olarak hesaplanır. Döngü n'e kadar devam eder ve sonunda tn değeri döndürülür.
Son olarak, program kullanıcıdan bir n değeri isteyerek Tribonacci sayısını hesaplar ve ekrana yazdırır. Program tamamlandığında 0 değeri döndürür ve çalışmayı sonlandırır.




