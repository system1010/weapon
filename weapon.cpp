#include <iostream>
using namespace std;


class Weapon{
  char *Shoot;
  public:
  friend ostream& operator<<(ostream&, Weapon&);
  char* get(){return Shoot;}
  void set(char *shoot){Shoot=shoot;}
};

ostream& operator << (ostream& out, Weapon& w)
{
    out << w.get() << endl;
    return out;
}

class Knife: public Weapon{
	public:
		Knife(){
    set("VJUM!!!");
    }

};
class Gun: public Weapon
{
	public:
		Gun(){
  	set("BANG!");
		}
};

class SubmashineGun: public Weapon
{
	public:
	SubmashineGun(){
	set("BANG! BANG! BANG!");
	}
};

class Bazooka: public Weapon
{
	public:
	Bazooka(){
	set("BADABUB!!!");
	}
};

class Player{
	public:
  void Shoot(Weapon *weapon){
	cout << *weapon; 
	}
};


int main(){

int tmp=0;
cout <<"0||1||2||3";
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




