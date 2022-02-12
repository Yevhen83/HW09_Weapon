#pragma once
#include "Weapon.h"
class Uzi :	public Weapon
{
public:
	Uzi();
	virtual ~Uzi();
	virtual void Shoot() override;		//стрелять
	virtual void Reloading() override;	//перезарядка
	virtual string ShowWeapon() override;	//показать оружие
	virtual int GetCortridges() override;
	virtual int GetNumberOfCortridges() override;



};

