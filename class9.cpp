#include <iostream>
using namespace std;

class Device {
	    public:
		           void turn_on() {
				               cout << "Device is on." << endl;
					               }
			           virtual void say_hello() = 0;
};

class Laptop: public Device {
	    public:
		           void say_hello() {
				               cout << "Hello world!" << endl;
					               }
};

int main() {
	    Laptop Laptop_instance;
	        Laptop_instance.turn_on();
		    Laptop_instance.say_hello();

		        // Device Device_instance;
		     // will cause compile time error
			         return 0;
			         }
