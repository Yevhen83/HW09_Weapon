#pragma once
#include"Weapon.h"
class Gun:public Weapon
{
public:
	Gun();
	virtual ~Gun();
	virtual void Shoot() override;		//��������
	virtual void Reloading() override;	//�����������
	virtual string ShowWeapon() override;	//�������� ������
	virtual int GetCortridges() override;
	virtual int GetNumberOfCortridges() override;

};

