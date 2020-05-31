#include <iostream>
#include <cstdlib>
#include <string>
#include "Service.h"

#include <windows.h>
#include "myaccount.h"
#include "OnlineMarket.h"


using namespace std;


int main(){

	MyAccount B;
	Service y;
	OnlineMarket x;

	while(1){
            system("cls");
            char ans;
            cout<<"   |   AutoBooklet   |"<<endl;
            cout<<"   *-----------------*\n\n"<<endl;
            cout<<"[1] : O logariasmos mou       [2] : Service"<<endl;
            cout<<"[3] : Online Market           [4] : My car"<<endl;
            cout<<"[4] : Fuel                    [5] : Service file"<<endl;
            cout<<"[6] : Exit\n"<<endl;
            cout<<"->";
            cin>>ans;

            switch(ans){
                case('1'):
					system("cls");
					B.Add_car();
					break;
                case('2'):
                	system("cls");
				    y.Select_service();
					break;
                case('3'):
                    x.select_category();
                    break;
                case('4'):
                    cout<<"epilexte o logariasmos mou gia na kataxwrisete to oxhma sas";
                    break;
                case('6'):exit(1);break;
            }
    }

	return 0;
}
