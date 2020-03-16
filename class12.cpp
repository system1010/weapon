#include<iostream>
 
class Shape{
	    protected:
		            int rotated;
			            int shifted;
				        public:
				            Shape():rotated(0), shifted(0){}
					            virtual void Draw(int)=0;
						            virtual void Rotate(int)=0;
							            virtual void Shift(int)=0;
								            int GetRotated(){return rotated;}
									            int GetShifted(){return shifted;}
};
 
class Square:public Shape{
	    private:
		            int length;
			        public:
			            Square():Shape(), length(0){}
				            void Draw(int);
					            void Rotate(int);
						            void Shift(int);
							            int GetLength(){return length;}
};
 
void Square::Draw(int ini){
	    length=ini;
	        std::cout<<"######### ####### ## ######## "<<ini<<"\n";
}
void Square::Rotate(int ini){
	    rotated+=ini;
	        std::cout<<"####### ######## ## "<<ini<<"\n";
}
void Square::Shift(int ini){
	    shifted+=ini;
	        std::cout<<"####### ####### ## "<<ini<<"\n";
}
 
int main(){
//	    SetConsoleOutputCP(1251);
	        int size=3;
		    Shape* arr[size];
		        for(int i=0; i<size; i++){
				        arr[i]=new Square();
					        arr[i]->Draw(10);
						        arr[i]->Shift(5);
							    }
			    for(int i=0; i<size; i++){
				            delete arr[i];
					            arr[i]=NULL;
						        }
			        return 0;
}
