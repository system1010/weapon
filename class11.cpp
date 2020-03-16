#include <iostream> 


	    class Baz
		        {
				        virtual double Ploshad(int a, int b);
					    };
	        class Pramougolnik : Baz
				         {
						         double a, b;
							         Pramougolnik(double a1 = 0, double b1 = 0)
									         { a = a1; b = b1; };
								         virtual double Ploshad()
										         {
												             return a * b;
													             }
									     };
		    class Krug : Baz
				     {
					             double Pi = 3.14;
						             double r;
							             Krug(double R = 0)
									             { r = R; }
								             virtual double Ploshad()
										             {
												                 return Pi * r * r;
														         }
									      
									         };
		        class Pramougolniy_treugolnik : Baz
							    {
								            double a, b;
									            Pramougolniy_treugolnik(double a1 = 0, double b1 = 0)
											            { a = a1; b = b1; };
										            virtual double Ploshad()
												            {
														                return (a * b) / 2;
																        }
											     
											        };
class Trapeciya : Baz
					          {
							          double a, b, h;
								          Trapeciya(double a1 = 0, double b1 = 0, double h1 = 0)
										          { a = a1; b = b1; h = h1; }
									          virtual double Ploshad()
											          {
													              return (a + b) * h / 2;
														              }
										   
										      };
int main()  {





}

