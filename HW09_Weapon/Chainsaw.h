#pragma once
#include "Knife.h"
class Chainsaw : public Knife
{
public:
	Chainsaw();
	~Chainsaw();
	virtual void Shoot() override;		//стрелять//атака

};

