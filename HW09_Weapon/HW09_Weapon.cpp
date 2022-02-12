#include"Weapon.h"
#include"Gun.h"
#include"Revolver.h"
#include"Uzi.h"
#include"AK45.h"
#include"Knife.h"
#include"Chainsaw.h"
void Shoot(Weapon* weapon)
{
	int x = weapon->GetCortridges();
	cout << "How many shots? - ";
	cin >> x;
	while (x>0)
	{
		weapon->Shoot();
		x--;
	}
}
int main()
{
	Weapon* weapon;
	Gun gun;
	weapon = &gun;
	cout << weapon->ShowWeapon() << endl;
	Shoot(weapon);
	cout <<" NumberOfCortridges:\t"<< weapon->GetNumberOfCortridges() << endl;

	Revolver rev;
	weapon = &rev;
	cout << weapon->ShowWeapon() << endl;
	Shoot(weapon);
	cout << " NumberOfCortridges:\t" << weapon->GetNumberOfCortridges() << endl;

	Uzi uzi;
	weapon = &uzi;
	cout << weapon->ShowWeapon() << endl;
	Shoot(weapon);
	cout << " NumberOfCortridges:\t" << weapon->GetNumberOfCortridges() << endl;

	AK45 ak;
	weapon = &ak;
	cout << weapon->ShowWeapon() << endl;
	Shoot(weapon);
	cout << " NumberOfCortridges:\t" << weapon->GetNumberOfCortridges() << endl;

	Knife knif;
	weapon = &knif;
	cout << weapon->ShowWeapon() << endl;
	Shoot(weapon);

	Chainsaw chainsof;
	weapon = &chainsof;
	cout << weapon->ShowWeapon() << endl;
	Shoot(weapon);

}

