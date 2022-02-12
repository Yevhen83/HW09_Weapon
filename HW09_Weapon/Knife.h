#pragma once
#include "Weapon.h"
class Knife : public Weapon
{
public:
	Knife();
	virtual ~Knife();
	virtual void Shoot() override;		//стрелять
	virtual void Reloading() override;	//перезарядка
	virtual string ShowWeapon() override;	//показать оружие
	virtual int GetCortridges() override;
	virtual int GetNumberOfCortridges() override;

};

