#include "pch.h"
#include "cyndaquil.h"

//브케인

cyndaquil::cyndaquil()
{
}

cyndaquil::~cyndaquil()
{
}

HRESULT cyndaquil::init()
{
	switch (RND->getFromIntTo(0,2))
	{
		case 0:

			_poketmon.name = "브케인";							//이름 브케인
			_poketmon.isGender = RND->getFromIntTo(0, 1);		//성별체크 랜덤
			_poketmon.index = 155;								//전국도감번호 155
			_poketmon.level = RND->getFromIntTo(1, 50);			//처음 등장 레벨 1~50
			_poketmon.type1 = static_cast<int>(TYPE::FIRE);		//불타입
			_poketmon.type2 = static_cast<int>(TYPE::NONE);		//
			_poketmon.evolutionLevel = 0;						//진화단계
			_poketmon.attack = 52;								//공격					
			_poketmon.defense = 43;								//방어
			_poketmon.specialAttack = 60;						//특수공격
			_poketmon.specialDefense = 50;						//특수방어
			_poketmon.speed = 65;								//스피드		

			_poketmon.levelAttack = 1;
			_poketmon.levelDefense;
			_poketmon.levelSpecialAttack;
			_poketmon.levelSpecialDefense;
			_poketmon.levelSpeed;
			_poketmon.levelHP = 2;

			_poketmon.maxHP = _poketmon.currentHP = 39;			//체력
			_poketmon.currentExp;
			_poketmon.maxExp = 1059860;							//100레벨 경험치량
			_poketmon.skill1;
			_poketmon.skill2;
			_poketmon.skill3;
			_poketmon.skill4;

			break;
		
		case 1:

			_poketmon.name = "마그케인";							//이름 마그케인
			_poketmon.isGender = RND->getFromIntTo(0, 1);		//성별체크 랜덤
			_poketmon.index = 156;								//전국도감번호 156
			_poketmon.level = RND->getFromIntTo(15, 50);		//처음 등장 레벨 15~50
			_poketmon.type1 = static_cast<int>(TYPE::FIRE);		//불타입
			_poketmon.type2 = static_cast<int>(TYPE::NONE);		//
			_poketmon.evolutionLevel = 1;						//진화단계
			_poketmon.attack = 64;								//공격					
			_poketmon.defense = 58;								//방어
			_poketmon.specialAttack = 80;						//특수공격
			_poketmon.specialDefense = 65;						//특수방어
			_poketmon.speed = 80;								//스피드		

			_poketmon.levelAttack = 1;
			_poketmon.levelDefense;
			_poketmon.levelSpecialAttack;
			_poketmon.levelSpecialDefense;
			_poketmon.levelSpeed;
			_poketmon.levelHP = 2;

			_poketmon.maxHP = _poketmon.currentHP = 58;			//체력
			_poketmon.currentExp;
			_poketmon.maxExp;									//경험치량
			_poketmon.skill1;
			_poketmon.skill2;
			_poketmon.skill3;
			_poketmon.skill4;

			break;
		
		case 2:

			_poketmon.name = "블레이범";							//이름 블레이범
			_poketmon.isGender = RND->getFromIntTo(0, 1);		//성별체크 랜덤
			_poketmon.index = 157;								//전국도감번호 157
			_poketmon.level = RND->getFromIntTo(36, 50);		//처음 등장 레벨 36~50
			_poketmon.type1 = static_cast<int>(TYPE::FIRE);		//불타입
			_poketmon.type2 = static_cast<int>(TYPE::NONE);		//
			_poketmon.evolutionLevel = 2;						//진화단계
			_poketmon.attack = 84;								//공격					
			_poketmon.defense = 78;								//방어
			_poketmon.specialAttack = 109;						//특수공격
			_poketmon.specialDefense = 85;						//특수방어
			_poketmon.speed = 100;								//스피드		

			_poketmon.levelAttack = 1;
			_poketmon.levelDefense;
			_poketmon.levelSpecialAttack;
			_poketmon.levelSpecialDefense;
			_poketmon.levelSpeed;
			_poketmon.levelHP = 2;

			_poketmon.maxHP = _poketmon.currentHP = 78;			//체력
			_poketmon.currentExp;
			_poketmon.maxExp;									//경험치량
			_poketmon.skill1;
			_poketmon.skill2;
			_poketmon.skill3;
			_poketmon.skill4;

			break;
	}
	
	return S_OK;
}

void cyndaquil::release()
{
}

void cyndaquil::update()
{
}

void cyndaquil::render()
{
}
