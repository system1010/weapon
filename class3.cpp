#include <iostream>
using namespace std;
 
class FirstClass    // ####### #####
{
	protected:          // ############ ####### # ######## value
		    int value;
	public:
		        FirstClass()
				    {
					            value = 0;
						        }
			 
			    FirstClass( int input )
				        {
						        value = input;
							    }
			     
			        void show_value()
					    {
						            cout << value << endl;
							        }
};
 
class SecondClass : public FirstClass   // ########### #####
{
	public:
		    SecondClass() : FirstClass ()   // ########### ###### SecondClass ######## ########### ###### FirstClass
				        {}
		     
		        SecondClass(int inputS) : FirstClass (inputS)   // inputS ########## # ########### # ########## ###### FirstClass
						      {}
			 
			    void ValueSqr () // ######## value # #######. ### ############# ####### protected ### ####### ## ##### ## ######## ######## value
				        {
						        value *= value;    
							    }  
};
 
int main()
{
	    setlocale(LC_ALL, "rus");
	     
	        FirstClass F_object(3);     // ###### ######## ######
		    cout << "value F_object = ";
		        F_object.show_value();
			 
			    SecondClass S_object(4);    // ###### ############ ######
			        cout << "value S_object = ";
				    S_object.show_value();  // ##### ###### ######## ######
				     
				        S_object.ValueSqr();        // ######## value # #######
					    cout << "####### value S_object = ";
					        S_object.show_value();
						 
						    //F_object.ValueSqr();      // ####### ##### ## ##### ####### # ####### ############ ######
						   
						       cout << endl;
						           return 0;
						           }
