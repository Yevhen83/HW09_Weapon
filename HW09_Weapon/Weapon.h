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
	virtual void Shoot() = 0;		//��������
	virtual void Reloading() = 0;	//�����������
	virtual string ShowWeapon() = 0;//�������� ������
	virtual int GetCortridges() = 0;
	virtual int GetNumberOfCortridges() = 0;

protected:
	string _nameWeapon;			//�������� ������
	int _cortridges;			//������
	int _numberOfCortridges;	//���������� �������� � ��������
	int _trunkLength;			//����� ������
	int _damage;				//���� �����
	stringstream ss;
};

