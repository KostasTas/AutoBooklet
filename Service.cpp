#include "Service.h"

using namespace std;

void Service:: Select_service(){
			do{
                cout<<"pathste 0 gia pisw"<<endl;
				cout<<"eisagete ta xiliometra tou service(eisagete 15000 h 30000): ";
				cin>>programmed_service;
				switch (programmed_service){
					case 15000:
						cout<<"To service einai oloklhromeno!"<<endl;
						break;
					case 30000:
						cout<<"epilexte ta katallhla antallaktika"<<endl;
						do{
							std::cout<<"0.Pisw"<<std::endl<<"1.ladia"<<std::endl<<"2.filtro ladiou"
							<<std::endl<<"3.filtro aera"<<endl;;
							cout<<"->";
							cin>>file;
						        switch (file){
								 case 0:
								 	break;
								 case 1:
								    std::cout<<"ta ladia proste8hkan"<<endl<<endl;
									break;
								 case 2:
								    std::cout<<"ta filtra ladiou proste8hkan"<<endl<<endl;
								    break;
								 case 3:
								    std::cout<<"ta filtra aera proste8hkan"<<endl<<endl;
								 	break;
								}
				    	}
						while(file!=0);
				}
            }while(programmed_service!=0);
	}
