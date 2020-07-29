#include <studio.h>
#include <math.h>
#include <locale.h>

int main()
{
 	setlocale(LC_ALL, "Turkish");

 	double Xed50, Yed50, Zed50, Xdon, Ydon, Zdon, Xote, Yote, Zote, kolc;
 	double Xwgs84, Ywgs84, Zwgs84, k1, k2, k3;

 			//// ED50 Datumundan WGS84 Datumuna Dönüşüm
 	/// Bilinenleri isteyelim.
 	/* ED50 Datumunda 3 Boyutlu Kartezyen Koordinatlar;
 	Xed50, Yed50, Zed50; */
 	printf("Xed50 değerini giriniz: ");
	scanf("%lf", &Xed50);
 	printf("Yed50 değerini giriniz: ");
	scanf("%lf", &Yed50);
 	printf("Zed50 değerini giriniz: ");
	scanf("%lf", &Zed50);
	/* ED50 Datumundan WGS84 Datumuna dönüşümü sağlayacak 3 Boyutlu Dönüşüm Parametreleri;
	Xdon, Ydon, Zdon; */
 	printf("Xdon değerini giriniz: ");
	scanf("%lf", &Xdon);
 	printf("Ydon değerini giriniz: ");
	scanf("%lf", &Ydon);
 	printf("Zdon değerini giriniz: ");
	scanf("%lf", &Zdon);
	// Xote, Yote, Zote;
 	printf("Xote değerini giriniz: ");
	scanf("%lf", &Xote);
 	printf("Yote değerini giriniz: ");
	scanf("%lf", &Yote);
 	printf("Zote değerini giriniz: ");
	scanf("%lf", &Zote);
	// kolc;
 	printf("kolc değerini giriniz: ");
	scanf("%lf", &kolc);
	/// Bilinmeyenlerin hesaplanması.
	/* WGS84 Datumunda 3 Boyutlu Kartezyen Koordinatlar;
	Xwgs84, Ywgs84, Zwgs84;
	k1, k2, k3;
	k1 = (kolc / 1000000) * Xed50 + Xote;
	Xwgs84 = ((1 * Xed50) + (Zdon * Yed50) + (-Ydon * Zed50)) + k1;
	k2 = (kolc / 1000000) * Yed50 + Yote;
	Ywgs84 = ((-Zdon * Xed50) + (1 * Yed50) + (Xdon * Zed50)) + k2;
	k3 = (kolc / 1000000) * Zed50 + Zote;
	Zwgs84 = ((Ydon * Xed50) + (-Xdon * Yed50) + (1 * Zed50)) + k3; */
	k1 = (kolc / 1000000) * Xed50 + Xote;
	printf("k1 değeri: %f\n", k1);
	Xwgs84 = ((1 * Xed50) + (Zdon * Yed50) + (-Ydon * Zed50)) + k1;
	printf("Xwgs84 değeri: %f\n", Xwgs84);
	k2 = (kolc / 1000000) * Yed50 + Yote;
	printf("k2 değeri: %f\n", k2);
	Ywgs84 = ((-Zdon * Xed50) + (1 * Yed50) + (Xdon * Zed50)) + k2;
	printf("Ywgs84 değeri: %f\n", Ywgs84);
	k3 = (kolc / 1000000) * Zed50 + Zote;
	printf("k3 değeri: %f\n", k3);
	Zwgs84 = ((Ydon * Xed50) + (-Xdon * Yed50) + (1 * Zed50)) + k3;
	printf("Zwgs84 değeri: %f\n", Zwgs84);

	



	return 0;
}
