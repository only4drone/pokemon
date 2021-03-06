#include "pch.h"
#include "pidgey.h"

//구구

pidgey::pidgey()
{
}

pidgey::~pidgey()
{
}

HRESULT pidgey::init()
{
    switch (RND->getFromIntTo(0, 2))
    {
    case 0:

        _poketmon.name = "구구";							    //이름 구구
        _poketmon.isGender = RND->getFromIntTo(0, 1);		//성별체크 랜덤
        _poketmon.index = 16;								//전국도감번호 16
        _poketmon.level = RND->getFromIntTo(1, 50);			//처음 등장 레벨 1~50
        _poketmon.type1 = static_cast<int>(TYPE::NOMAL);	//노말타입
        _poketmon.type2 = static_cast<int>(TYPE::FLYING);	//비행타입
        _poketmon.evolutionLevel = 0;						//진화단계
        _poketmon.attack = 45;								//공격					
        _poketmon.defense = 40;								//방어
        _poketmon.specialAttack = 35;						//특수공격
        _poketmon.specialDefense = 35;						//특수방어
        _poketmon.speed = 56;								//스피드		

        _poketmon.levelAttack = 1;
        _poketmon.levelDefense;
        _poketmon.levelSpecialAttack;
        _poketmon.levelSpecialDefense;
        _poketmon.levelSpeed;
        _poketmon.levelHP = 2;

        _poketmon.maxHP = _poketmon.currentHP = 40;			//체력
        _poketmon.currentExp;
        _poketmon.maxExp = 1059860;							//100레벨 경험치량
        _poketmon.skill1;
        _poketmon.skill2;
        _poketmon.skill3;
        _poketmon.skill4;

        break;

    case 1:

        _poketmon.name = "피죤";							    //이름 피죤
        _poketmon.isGender = RND->getFromIntTo(0, 1);		//성별체크 랜덤
        _poketmon.index = 17;								//전국도감번호 17
        _poketmon.level = RND->getFromIntTo(19, 50);		//처음 등장 레벨 19~50
        _poketmon.type1 = static_cast<int>(TYPE::NOMAL);	//노멀타입
        _poketmon.type2 = static_cast<int>(TYPE::FLYING);	//비행타입
        _poketmon.evolutionLevel = 1;						//진화단계
        _poketmon.attack = 60;								//공격					
        _poketmon.defense = 55;								//방어
        _poketmon.specialAttack = 50;						//특수공격
        _poketmon.specialDefense = 50;						//특수방어
        _poketmon.speed = 71;								//스피드		

        _poketmon.levelAttack = 1;
        _poketmon.levelDefense;
        _poketmon.levelSpecialAttack;
        _poketmon.levelSpecialDefense;
        _poketmon.levelSpeed;
        _poketmon.levelHP = 2;

        _poketmon.maxHP = _poketmon.currentHP = 63;			//체력
        _poketmon.currentExp;
        _poketmon.maxExp;									//경험치량
        _poketmon.skill1;
        _poketmon.skill2;
        _poketmon.skill3;
        _poketmon.skill4;

        break;

    case 2:

        _poketmon.name = "피죤투";							//이름 피죤투
        _poketmon.isGender = RND->getFromIntTo(0, 1);		//성별체크 랜덤
        _poketmon.index = 18;								//전국도감번호 18
        _poketmon.level = RND->getFromIntTo(36, 50);		//처음 등장 레벨 36~50
        _poketmon.type1 = static_cast<int>(TYPE::NOMAL);	//노멀타입
        _poketmon.type2 = static_cast<int>(TYPE::FLYING);	//비행타입
        _poketmon.evolutionLevel = 2;						//진화단계
        _poketmon.attack = 80;								//공격					
        _poketmon.defense = 75;								//방어
        _poketmon.specialAttack = 70;						//특수공격
        _poketmon.specialDefense = 70;						//특수방어
        _poketmon.speed = 91;								//스피드		

        _poketmon.levelAttack = 1;
        _poketmon.levelDefense;
        _poketmon.levelSpecialAttack;
        _poketmon.levelSpecialDefense;
        _poketmon.levelSpeed;
        _poketmon.levelHP = 2;

        _poketmon.maxHP = _poketmon.currentHP = 83;			//체력
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

void pidgey::release()
{
}

void pidgey::update()
{
}

void pidgey::render()
{
}
