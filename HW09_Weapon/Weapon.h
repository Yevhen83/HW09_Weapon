#pragma once
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class Weapon
{
public:
	Weapon();
	virtual ~Weapon();
	virtual void Shoot() = 0;		//стрелять
	virtual void Reloading() = 0;	//перезарядка
	virtual string ShowWeapon() = 0;//показать оружие
	virtual int GetCortridges() = 0;
	virtual int GetNumberOfCortridges() = 0;

protected:
	string _nameWeapon;			//Название оружия
	int _cortridges;			//обойма
	int _numberOfCortridges;	//количество патронов в магазине
	int _trunkLength;			//длина ствола
	int _damage;				//сила урона
	stringstream ss;
};

