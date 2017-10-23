#include <iostream>
using namespace std;

int main(){
	double LuasRumah = 42;
	double LantaiPkt = 193*1215;
	double Luas1Box = LantaiPkt*8/1000000;
	double JumlahBoxP, BiayaP, BiayaPG, TotalB;

	cout << " Luas Rumah				: "<<LuasRumah<<" m2"<<endl;
	cout << " Luas 1 box parket			: "<<Luas1Box<<" m2"<<endl;
	
	JumlahBoxP = LuasRumah/Luas1Box;
	cout << " Jumlah Box Parket			: "<<JumlahBoxP<<endl;
	
	BiayaP = JumlahBoxP*500;
	cout<< " Biaya Parket (Rp)			: "<<BiayaP<<endl;
	
	BiayaPG = LuasRumah*20;
	cout<< " Biaya Pasang (Rp)			: "<<BiayaPG<<endl;
}
