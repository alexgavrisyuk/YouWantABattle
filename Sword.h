#ifndef __Sword_H__
#define __Sword_H__

#include "cocos2d.h"

#include "Weapon.h"

USING_NS_CC;

using std::string;
using std::vector;

class ManagerComponent;

class Sword : public Weapon
{
public:
	Sword();
	Sword(const Sword& i_Sword);
	~Sword();

	virtual void Update(ManagerComponent& i_manager);

private:
};

#endif 
