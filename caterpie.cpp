#include "pch.h"
#include "caterpie.h"

//캐터피

caterpie::caterpie()
{
}

caterpie::~caterpie()
{
}

HRESULT caterpie::init()
{
	switch (RND->getFromIntTo(0, 2))
	{
	case 0:

		_poketmon.name = "캐터피";							//이름 캐터피
		_poketmon.isGender = RND->getFromIntTo(0, 1);		//성별체크 랜덤
		_poketmon.index = 10;								//전국도감번호 10
		_poketmon.level = RND->getFromIntTo(1, 50);			//처음 등장 레벨 1~50
		_poketmon.type1 = static_cast<int>(TYPE::BUG);		//벌레타입
		_poketmon.type2 = static_cast<int>(TYPE::NONE);		//
		_poketmon.evolutionLevel = 0;						//진화단계
		_poketmon.attack = 30;								//공격					
		_poketmon.defense = 35;								//방어
		_poketmon.specialAttack = 20;						//특수공격
		_poketmon.specialDefense = 20;						//특수방어
		_poketmon.speed = 45;								//스피드		

		_poketmon.levelAttack = 1;
		_poketmon.levelDefense;
		_poketmon.levelSpecialAttack;
		_poketmon.levelSpecialDefense;
		_poketmon.levelSpeed;
		_poketmon.levelHP = 2;

		_poketmon.maxHP = _poketmon.currentHP = 45;			//체력
		_poketmon.currentExp;
		_poketmon.maxExp = 1000000;							//100레벨 경험치량
		_poketmon.skill1;
		_poketmon.skill2;
		_poketmon.skill3;
		_poketmon.skill4;

		break;

	case 1:

		_poketmon.name = "단데기";							//이름 단데기
		_poketmon.isGender = RND->getFromIntTo(0, 1);		//성별체크 랜덤
		_poketmon.index = 11;								//전국도감번호 11
		_poketmon.level = RND->getFromIntTo(7, 50);			//처음 등장 레벨 7~50
		_poketmon.type1 = static_cast<int>(TYPE::BUG);		//벌레타입
		_poketmon.type2 = static_cast<int>(TYPE::NONE);		//
		_poketmon.evolutionLevel = 1;						//진화단계
		_poketmon.attack = 20;								//공격					
		_poketmon.defense = 55;								//방어
		_poketmon.specialAttack = 25;						//특수공격
		_poketmon.specialDefense = 25;						//특수방어
		_poketmon.speed = 30;								//스피드		

		_poketmon.levelAttack = 1;
		_poketmon.levelDefense;
		_poketmon.levelSpecialAttack;
		_poketmon.levelSpecialDefense;
		_poketmon.levelSpeed;
		_poketmon.levelHP = 2;

		_poketmon.maxHP = _poketmon.currentHP = 50;			//체력
		_poketmon.currentExp;
		_poketmon.maxExp;									//경험치량
		_poketmon.skill1;
		_poketmon.skill2;
		_poketmon.skill3;
		_poketmon.skill4;

		break;

	case 2:

		_poketmon.name = "버터플";							//이름 버터플
		_poketmon.isGender = RND->getFromIntTo(0, 1);		//성별체크 랜덤
		_poketmon.index = 12;								//전국도감번호 12
		_poketmon.level = RND->getFromIntTo(10, 50);		//처음 등장 레벨 10~50
		_poketmon.type1 = static_cast<int>(TYPE::BUG);		//벌레타입
		_poketmon.type2 = static_cast<int>(TYPE::FLYING);	//비행타입
		_poketmon.evolutionLevel = 2;						//진화단계
		_poketmon.attack = 45;								//공격					
		_poketmon.defense = 50;								//방어
		_poketmon.specialAttack = 80;						//특수공격
		_poketmon.specialDefense = 80;						//특수방어
		_poketmon.speed = 70;								//스피드		

		_poketmon.levelAttack = 1;
		_poketmon.levelDefense;
		_poketmon.levelSpecialAttack;
		_poketmon.levelSpecialDefense;
		_poketmon.levelSpeed;
		_poketmon.levelHP = 2;

		_poketmon.maxHP = _poketmon.currentHP = 60;			//체력
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

void caterpie::release()
{
}

void caterpie::update()
{
}

void caterpie::render()
{
}
