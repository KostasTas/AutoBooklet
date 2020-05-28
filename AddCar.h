#include <iostream>
#include <cstdlib>
#include <string>
#include "MyCar.h"


class AddCar : public MyCar{
	public:
	void add_plate();
	void add_brand();
	void add_odo();
};
