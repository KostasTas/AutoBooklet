#include "myaccount.h"

using namespace std;


void MyAccount::Add_car(){

        cout<<"[1] : tropopoihsh logariasmoy  [2] : pros8iki oximatos"<<endl;
        cout<<"[3] : Live Chat                [4] : Reminder"<<endl;
        cout<<"[5] : Exit\n"<<endl;

  do{
        cout<<"pathste 0 gia pisw"<<endl;
        cout<<"->";
        cin>>x;
        switch (x){
            case 1:
                cout<<"Xehasate ton kwdiko sas?"<<endl;
                break;
            case 2:
                system("cls");
                A.add_plate();
                A.add_brand();
                A.add_odo();
                A.get_ari8mo();
                A.get_odometre();
                A.ShowCarInfo();
        }
    }while(x!=0);
}
