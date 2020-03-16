#include <iostream>
using namespace std;

class Weapon{
	public:
		virtual void Shoot()=0;
};
class Knife: public Weapon{
	public:
		void Shoot() override{
        		cout << "VJUM!!!" << endl;
    		}
};
class Gun: public Weapon
{
	public:
		void Shoot() override{
		
			cout << "BANG!" << endl;
		
		}
};

class SubmashineGun: public Weapon
{
	public:
		void Shoot() override {
		
			cout << "BANG! BANG! BANG!" << endl;
		
		}
};

class Bazooka: public Weapon
{
	public:
		void Shoot() override {
		
			cout << "BADABUB!!!" << endl;
		
		}
};

class Player{
	public:
                void Shoot(Weapon *weapon){
		
                        weapon->Shoot();
		
		}


};


int main(){

int tmp=0;
scanf("%d",&tmp);

Weapon *w=0;
switch ( tmp ) {
	case 0:
   		w=new Knife;
      		break;
	case 1:
		w=new Gun;
		break;
	case 2:
		w=new SubmashineGun;
		break;
	case 3:
		w=new Bazooka;
		break;
	default:
 break;
}  


Player player;

player.Shoot(w);




return 0;

}




