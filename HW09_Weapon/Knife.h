#pragma once
#include "Weapon.h"
class Knife : public Weapon
{
public:
	Knife();
	virtual ~Knife();
	virtual void Shoot() override;		//��������
	virtual void Reloading() override;	//�����������
	virtual string ShowWeapon() override;	//�������� ������
	virtual int GetCortridges() override;
	virtual int GetNumberOfCortridges() override;

};

