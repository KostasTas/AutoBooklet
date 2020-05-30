#include "OnlineMarket.h"



void OnlineMarket::select_category(){
do{
                cout<<"Gia na epilexete 'hlektrika eidh'-> pathste 1"<<endl;
				cout<<"Gia na epilexete 'car audio'     -> pathste 2"<<endl;
				cin>>category;
				switch (category){
					case 1:
					    system("cls");
						cout<<"hlektrika eidh-> "<<endl;
						select_product(category);
												do{
                            cout<<"->";
							cin>>product;
						        switch (product){
								 case 0:
								 	break;
								 case 1:
								    std::cout<<"oi lampes proste8hkan sto kala8i"<<endl<<endl;
									break;
								 case 2:
								    std::cout<<"oi diakoptes proste8hkan sto kala8i"<<endl<<endl;
								    break;
								 case 3:
								    std::cout<<"h kerea proste8hke sto kala8i"<<endl<<endl;
								 	break;
								}
				    	}
						while(product!=0);
						break;
					case 2:
						cout<<"car audio-> "<<endl;
						select_product(category);
						do{
                            cout<<"->";
							cin>>product;
						        switch (product){
								 case 0:
								 	break;
								 case 1:
								    std::cout<<"to car stereo proste8hke sto kala8i"<<endl<<endl;
									break;
								 case 2:
								    std::cout<<"ta hxeia proste8hkan sto kala8i"<<endl<<endl;
								    break;
								 case 3:
								    std::cout<<"o enisxitis proste8hke sto kala8i"<<endl<<endl;
								 	break;
								}
				    	}
						while(product!=0);
						break;
				}
            }while(category!=0);

}

void OnlineMarket::select_product(int category){
    if (category==1){
cout<<"dia8esima proionta: "<<endl;
cout<<"[0] pisw"<<endl;
cout<<"[1] lampes"<<endl;
cout<<"[2] diakoptes"<<endl;
cout<<"[3] kerees"<<endl;
    }else if(category==2){
cout<<"dia8esima proionta: "<<endl;
cout<<"[0] pisw "<<endl;
cout<<"[1] car stereo"<<endl;
cout<<"[2] hxeia"<<endl;
cout<<"[3] enisxites hxou"<<endl;
    }
}
