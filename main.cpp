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
            cout<<"[3] : Online Market           [4] : Func 4"<<endl;
            cout<<"[5] : Exit\n"<<endl;
            cout<<"->";
            cin>>ans;

            switch(ans){
                case('1'):
			system("cls");
			B.account();
			break;
                case('2'):
                	system("cls");
<<<<<<< HEAD
				    y.Select_service();
					break;
                case('3'):
                    x.select_category();
                    break;
=======
		        y.Select_service();
			break;
                case('3'):break;
>>>>>>> 9ed15e23f4762e6382e7c789c43e61f867a2b73f
                case('4'):break;
                case('5'):exit(1);break;
            }
    }

	return 0;
}
