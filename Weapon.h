#ifndef __WEAPON_H__
#define __WEAPON_H__

#include "cocos2d.h"

#include "GraphicComponent.h"
#include "Bullet.h"
#include "ChoiseHeroScene.h"

class ManagerComponent;

class Weapon : public GraphicComponent
{
public:

	enum State
	{
		FIRE,
		NOTHING
	};

	Weapon() 
	{
		m_state = State::NOTHING;
	};

	~Weapon() 
	{
		//delete m_bullet;
	};

	virtual void Update(ManagerComponent& i_manager) = 0;
	virtual void Fire() = 0;

	bool OutOfOrderWindow()
	{
		if (m_bullet->getPositionX() > ChoiseHeroScene::m_visiblSize.width)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

protected:
	Bullet*	m_bullet;
	State	m_state;
};

#endif 
