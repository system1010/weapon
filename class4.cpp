#include <iostream>
using namespace std;
// ######### ############# #######
 float areaRectangle(float a, float b);
 float areaRectangle(float a_m, float a_sm, float b_m, float b_sm);
 int main()
 {
     cout << "S1 = " << areaRectangle(32,43) << endl; // ##### ############# ####### 1
         cout << "S2 = " << areaRectangle(4, 43, 2, 12) << endl; // ##### ############# ####### 2
             return 0;
             }
             // ############# ####### 1
             float areaRectangle(float a, float b) //#######, ########### ####### ############## # ##### ########### a(##) # b(##)
             {
             return a * b; // ######## ###### ###### ############## # ########## ########## ############
             }
             // ############# ####### 2
             float areaRectangle(float a_m, float a_sm, float b_m, float b_sm) // #######, ########### ####### ############## # 4-## ########### a(#) a(##); b(#) b(c#)
             {
               return (a_m * 100 + a_sm) * (b_m * 100 + b_sm);
               }
