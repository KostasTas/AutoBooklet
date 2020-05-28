#include <iostream>
#include <cstdlib>
#include <string>


class MyCar{
	protected:
		std::string frame_number;
		std::string car_brand;
		std::string car_model;
		int odometre;
	public:
		void ShowCarInfo();
        std::string get_ari8mo();
        int get_odometre();
};
