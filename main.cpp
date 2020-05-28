#include <iostream>
#include <cstdlib>
#include <string>
#include "Service.h"
#include "AddCar.h"
#include <windows.h>

using namespace std;


int main(){

	AddCar B;
	Service y;

	while(1){
            system("cls");
            char ans;
            cout<<"   |     AutoBooklet   |"<<endl;
            cout<<"   *-------------------*\n\n"<<endl;
            cout<<"[1] : pros8iki oximatos       [2] : service"<<endl;
            cout<<"[3] : Func 3                  [4] : Func 4"<<endl;
            cout<<"[5] : Exit\n"<<endl;
            cout<<"->";
            cin>>ans;

            switch(ans){
                case('1'):
					system("cls");
					B.add_plate();
					B.add_brand();
					B.add_odo();
					B.get_ari8mo();
					B.ShowCarInfo();
					break;
                case('2'):
                	system("cls");
				    y.Select_service();
					break;
                case('3'):break;
                case('4'):break;
                case('5'):exit(1);break;
            }
    }

	return 0;
}
