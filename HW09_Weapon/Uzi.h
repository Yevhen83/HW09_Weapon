#pragma once
#include "Weapon.h"
class Uzi :	public Weapon
{
public:
	Uzi();
	virtual ~Uzi();
	virtual void Shoot() override;		//��������
	virtual void Reloading() override;	//�����������
	virtual string ShowWeapon() override;	//�������� ������
	virtual int GetCortridges() override;
	virtual int GetNumberOfCortridges() override;



};

