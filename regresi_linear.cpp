
	#include <iostream>
	#include <conio.h>
	#include <iomanip>
	#include <math.h>
	
	using namespace std;
	
	int main()
	{
	float X[300];
	float Y[300];
	float data, totalX, totalY, totalXY, totalXK, totalYK,
	kuadrattotalX;
	
	int i, ulang, korelasi;
	do
	{
	 totalX=0, totalY=0, totalXY=0, totalXK=0, totalYK=0;
	 cout << endl;
	 cout << "Masukan Jumlah N : " ; cin >> data ;
	 cout << endl ;
	 
	//input data
	 for (i=0 ; i<data ; i++)
	 {
	 cout << "INPUT X-" << i+1 << " : " ; cin >> X[i];
	 cout << "INPUT Y-" << i+1 << " : " ; cin >> Y[i];
	 cout << endl;
	 }
	 cout << endl;
	 
	 //menghitung Total XY
	 for (i=0 ; i<data ; i++)
	 totalXY=totalXY+(X[i]*Y[i]);
	 
	 //menghitung nilai jumlah X dan Y
	 for (i=0 ; i<data ; i++)
	 {
	 totalX=totalX+X[i];
	 totalY=totalY+Y[i];
	 }
	 
	 //menghitung total X kuadrat
	 for (i=0 ; i<data ; i++)
	 totalXK=totalXK+(X[i]*X[i]);
	 
	 //menghitung total Y Kuadrat
	 for (i=0 ; i<data ; i++)
	 totalYK=totalYK+(Y[i]*Y[i]);
	 
	 // menghitung kuadrat total X
	 for (i=0 ; i<data ; i++)
	 kuadrattotalX=totalX*totalX;
	 
	 // mendefinisikan pangkat 2 dari rumus R
	 float pkt1 = 2;
	 float nX = data*totalX;
	 float pangkatA = pow(nX,pkt1);
	 
	 // mendefinisikan akar A 
	 float akarA = sqrt((data*totalXK)-(pangkatA));
	 
	 // mendefinisikan pangkat 2 dari R
	 float pkt2 = 2;
	 float nY = data*totalY;
	 float pangkatB = pow(nY,pkt2);
	 
	 // mendefinisikan akar B 
	 float akarB = sqrt((data*totalYK)-(pangkatB));
	 
	 //menghitung nilai korelasi R
	 float r =((data*totalXY)- (totalX*totalY)) / ( akarA + akarB );
	 
	 //menghitung nilai koefisien determinasi
	 float koefisiendeterminasi = (r*r) * (100/100);
	 
	 // kriteria korelasi R
	 if (r<0.09)
	 {
	 cout << "Hubungan korelasi diabaikan"; cin >> korelasi;
	 }
	 if (r<0.29)
	 {
	 cout << "Hubungan korelasi rendah"; cin >> korelasi;
	 }
	 if (r<0.49)
	 {
	 cout << "Hubungan korelasi moderat"; cin >> korelasi;
	 }
	 if (r<0.70)
	 {
	 cout << "Hubungan korelasi sedang"; cin >> korelasi;
	 }
	 if (r>0.70)
	 {
	    cout << "Hubungan korelasi sangat kuat"; cin >> korelasi;
	 }
	 // menampilkan hasil R dan Determinasi
	 cout << "Output : " << endl;
	 cout << "a. Nilai Korelasi R = " << r << endl;
	 cout << "b. Nilai Koefisien Determinasi = " << koefisiendeterminasi << endl;
	 cout << "c. Kekuatan Hubungan dari Nilai Korelasi (R) = " << korelasi <<
	endl;
	getch();
	
	 // mengulang program
	 cout << " " << endl;
	 cout << "Ingin mengulang [Y|T] ?" ;
	 ulang=getch();
	 } while (ulang=='Y' || ulang=='y');
	return 0;
	}
