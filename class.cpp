  #include <iostream>
  using namespace std;
  // ###### ########## ######
  class en // ### ######
  {
 private:
	bool state;      	
  public: // ############ #######
	void run()
	{
        if (state=!state) messageA();else messageB();
        }
      void messageA() // ####### (##### ######) ######### ######### ## #####
          {

          cout << "state a\n";
	  	  }
      void messageB(){
      cout<< "state b\n";
      }
}; // ##### ########## ###### CppStudio
                       
  int main(int argc, char* argv[])
  {
  en objMessage; // ########## #######
  while(1)
  objMessage.run(); // ##### ####### ###### message
                                
  return 0;
 }
