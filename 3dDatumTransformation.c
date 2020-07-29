#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
 	setlocale(LC_ALL, "Turkish");

 	double Xed50, Yed50, Zed50, Xdon, Ydon, Zdon, Xote, Yote, Zote, kolc;
 	double Xwgs84, Ywgs84, Zwgs84, k1, k2, k3;
	double Xdonwgs84, Ydonwgs84, Zdonwgs84, Xotewgs84, Yotewgs84, Zotewgs84, kolcwgs84;
	double k1wgs84, k2wgs84, k3wgs84;

 			//// ED50 Datumundan WGS84 Datumuna Dönüşüm!!!
	printf(" === ED50 Datumundan WGS84 Datumuna Dönüşüm!!! === \n");
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
	/// Bilinmeyenlerin hesaplanması!!!
	/* WGS84 Datumunda 3 Boyutlu Kartezyen Koordinatlar;
	Xwgs84, Ywgs84, Zwgs84;
	k1, k2, k3;
	k1 = (kolc / 1000000) * Xed50 + Xote;
	Xwgs84 = ((1 * Xed50) + (Zdon * Yed50) + (-Ydon * Zed50)) + k1;
	k2 = (kolc / 1000000) * Yed50 + Yote;
	Ywgs84 = ((-Zdon * Xed50) + (1 * Yed50) + (Xdon * Zed50)) + k2;
	k3 = (kolc / 1000000) * Zed50 + Zote;
	Zwgs84 = ((Ydon * Xed50) + (-Xdon * Yed50) + (1 * Zed50)) + k3; */
	printf(" ===  WGS84 Datumunda 3 Boyutlu Kartezyen Koordinatlar!!! === \n");
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

			////  WGS84 Datumundan ED50  Datumuna Dönüşüm!!!
	printf(" === WGS84 Datumundan ED50  Datumuna Dönüşüm!!! === \n");
	/// Bilinenleri isteyelim.
	/* WGS84 Datumunda 3 Boyutlu Kartezyen Koordinatlar;
	Xwgs84, Ywgs84, Zwgs84; */
 	printf("Xwgs84 değerini giriniz: ");
	scanf("%lf", &Xwgs84);
 	printf("Ywgs84 değerini giriniz: ");
	scanf("%lf", &Ywgs84);
 	printf("Zwgs84 değerini giriniz: ");
	scanf("%lf", &Zwgs84);
	/* WGS84 Datumundan ED50  Datumuna dönüşümü sağlayacak 3 Boyutlu Dönüşüm Parametreleri;
	Xdonwgs84, Ydonwgs84, Zdonwgs84; */
 	printf("Xdonwgs84 değerini giriniz: ");
	scanf("%lf", &Xdonwgs84);
 	printf("Ydonwgs84 değerini giriniz: ");
	scanf("%lf", &Ydonwgs84);
 	printf("Zdonwgs84 değerini giriniz: ");
	scanf("%lf", &Zdonwgs84);
	// Xotewgs84, Yotewgs84, Zotewgs84;
 	printf("Xotewgs84 değerini giriniz: ");
	scanf("%lf", &Xotewgs84);
 	printf("Yotewgs84 değerini giriniz: ");
	scanf("%lf", &Yotewgs84);
 	printf("Zotewgs84 değerini giriniz: ");
	scanf("%lf", &Zotewgs84);
	// kolcwgs84;
 	printf("kolcwgs84 değerini giriniz: ");
	scanf("%lf", &kolcwgs84);
	/// Bilinmeyenlerin hesaplanması.
	/* ED50 Datumunda 3 Boyutlu Kartezyen Koordinatlar;
	Xed50, Yed50, Zed50;
	k1wgs84, k2wgs84, k3wgs84;
	k1wgs84 = (kolcwgs84 / 1000000) * Xwgs84 + Xotewgs84;
	Xed50 = ((1 * Xwgs84) + (Zdonwgs84 * Ywgs84) + (-Ydonwgs84 * Zwgs84)) + k1wgs84;
	k2wgs84 = (kolcwgs84 / 1000000) * Ywgs84 + Yotewgs84;
	Yed50 = ((-Zdonwgs84 * Xwgs84) + (1 * Ywgs84) + (Xdonwgs84 * Zwgs84)) + k2wgs84;
	k3wgs84 = (kolcwgs84 / 1000000) * Zed50 + Zotewgs84;
	Zed50 = ((Ydonwgs84 * Xwgs84) + (-Xdonwgs84 * Ywgs84) + (1 * Zwgs84)) + k3wgs84; */
	printf(" ===  ED50 Datumunda 3 Boyutlu Kartezyen Koordinatlar!!! === \n");
	k1wgs84 = (kolcwgs84 / 1000000) * Xwgs84 + Xotewgs84;
	printf("k1wgs84 değeri: %f\n", k1wgs84);
	Xed50 = ((1 * Xwgs84) + (Zdonwgs84 * Ywgs84) + (-Ydonwgs84 * Zwgs84)) + k1wgs84;
	printf("Xed50 değeri: %f\n", Xed50);
	k2wgs84 = (kolcwgs84 / 1000000) * Ywgs84 + Yotewgs84;
	printf("k2wgs84 değeri: %f\n", k2wgs84);
	Yed50 = ((-Zdonwgs84 * Xwgs84) + (1 * Ywgs84) + (Xdonwgs84 * Zwgs84)) + k2wgs84;
	printf("Yed50 değeri: %f\n", Yed50);
	k3wgs84 = (kolcwgs84 / 1000000) * Zed50 + Zotewgs84;
	printf("k3wgs84 değeri: %f\n", k3wgs84);
	Zed50 = ((Ydonwgs84 * Xwgs84) + (-Xdonwgs84 * Ywgs84) + (1 * Zwgs84)) + k3wgs84;
	printf("Zed50 değeri: %f\n", Zed50);

	return 0;
}
