#include "pch.h"
#include "chikorita.h"


chikorita::chikorita()
{
}

chikorita::~chikorita()
{
}

HRESULT chikorita::init()
{
    _poketmon.name = "치코리타";
    _poketmon.gender = 0;
    _poketmon.index= 10;
    _poketmon.level = 15;
    _poketmon.type1 = 0;
    _poketmon.type2 = 0;
    _poketmon.evolutionLevel = 1;
    _poketmon.attack = 49;
    _poketmon.defense;
    _poketmon.specialAttack;
    _poketmon.specialDefense;
    _poketmon.speed;
    _poketmon.levelAttack = 1;
    _poketmon.levelDefense;
    _poketmon.levelSpecialAttack;
    _poketmon.levelSpecialDefense;
    _poketmon.levelSpeed;
    _poketmon.levelHP = 2;
    _poketmon.maxHP = _poketmon.currentHP = 45;
    _poketmon.currentExp;
    _poketmon.maxExp;
    _poketmon.skill1;
    _poketmon.skill2;
    _poketmon.skill3;
    _poketmon.skill4;


    return S_OK;
}

void chikorita::release()
{
}

void chikorita::update()
{
    _poketmon.sumMaxHP = _poketmon.maxHP + (_poketmon.levelHP * _poketmon.level);
    _poketmon.sumAttack = _poketmon.attack + (_poketmon.levelAttack * _poketmon.level);



}

void chikorita::render()
{
}
