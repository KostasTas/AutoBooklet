#include "MyCar.h"


using namespace std;

void MyCar::ShowCarInfo(){
	cout<<"Ari8mos_plaisiou_autokinitou: "<<frame_number<<endl;
    cout<<"Marka: "<<car_brand<<endl;
    cout<<"Modelo: "<<car_model<<endl;
    cout<<"Xiliometra: "<<odometre<<endl;
}

string MyCar::get_ari8mo(){
	return frame_number;
	return car_brand;
	return car_model;
}

int MyCar::get_odometre(){
	return odometre;
}
