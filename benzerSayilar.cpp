#include <iostream>
#include <cmath>
using namespace std;

int main(){
	unsigned int basSayisi=0, ilkRakam, sonRakam, temp;
	int sayi;
	A10:;
	cout << "Sayi giriniz: ";
	cin >> sayi;
	if (sayi<=10){
		goto A10;
	}
	temp=sayi;
	while (temp>0){
		temp/=10;
		basSayisi++;
	}
	if (basSayisi%2==0){
		sonRakam=sayi%10;
		ilkRakam=sayi/pow(10,basSayisi-1);
		if (ilkRakam==sonRakam){
			cout << sayi << " benzer sayidir.";
			goto A20;
		}
	}
	cout << sayi << " benzer sayi degildir.";
	A20:;
	cout << "\n\n\n";
	system("pause");
	return 0;
}

/* BENZER SAYILAR -- CIFT BASAMAKLI VE ILK RAKAMI ILE SON RAKAMI AYNI OLAN SAYI

A0. BASLA
A1. BASSAYISI=0
A2. SAYI OKU
A3. EGER(SAYI<=10) MI? (E) A2. GIT
A4. TEMP=SAYI
A5. TEMP/=10
A6. BASSAYISI++
A7. EGER(TEMP>0) MI? (E) A5. GIT
A8. EGER(BASSAYISI%2==0) MI? (H) A14. GIT
A9. SONRAKAM=SAYI%10
A10. ILKRAKAM=SAYI/pow(10,BASSAYISI-1)
A11. EGER(SONRAKAM==ILKRAKAM) MI? (H) A14. GIT
A12. "benzer sayidir" YAZ
A13. A15. GIT
A14. "benzer sayi degildir" YAZ
A15. DUR

*/
