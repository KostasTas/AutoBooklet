
#include <iostream>
#include <cstdlib>
#include <string>
#include "myaccount.h"


void MyAccount::account(){
		char x;
		    cout<<"[1] : tropopoihsh logariasmoy  [2] : pros8iki oximatos"<<endl;
            cout<<"[3] : Live Chat                [4] : Reminder"<<endl;
            cout<<"[5] : Exit\n"<<endl;
            cout<<"->";
		cin>>x;
		switch(x){
			case('1'):
				system("cls");
				cout<<"dasd"<<endl;
				break;
			case('2'):
			    system("cls");
				A.add_plate();
				A.add_brand();
				A.add_odo();
				A.get_ari8mo();
				A.ShowCarInfo();
				break;
		}
    }
