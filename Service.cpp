#include "Service.h"

using namespace std;

void Service:: Select_service(){
			do{						
				cout<<"eisagete ta xiliometra tou service(eisagete 15000 h 30000): ";
				cin>>x;				
				switch (x){				
					case 15000:
						cout<<"To service einai oloklhromeno!"<<endl;
						break;
					case 30000:				
						cout<<"epilexte ta katallhla antallaktika"<<endl;								
						do{															
							std::cout<<"0.Pisw"<<std::endl<<"1.ladia"<<std::endl<<"2.filtro ladiou"
							<<std::endl<<"3.filtro aera"<<endl;;	
							cin>>y;		
						        switch (y){	
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
						while(y!=0);
				}       
            }while(x!=0);
	}	