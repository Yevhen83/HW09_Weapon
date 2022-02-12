#pragma once
#include"Weapon.h"
class Gun:public Weapon
{
public:
	Gun();
	virtual ~Gun();
	virtual void Shoot() override;		//стрелять
	virtual void Reloading() override;	//перезарядка
	virtual string ShowWeapon() override;	//показать оружие
	virtual int GetCortridges() override;
	virtual int GetNumberOfCortridges() override;

};

