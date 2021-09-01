#pragma once
#include "gameNode.h"

// 포켓몬 데이터
struct tagPOKETMON
{
	string name;							// 이름
	bool gender;							// 성별
	int index;								// 인덱스 번호
	int level;								// 포켓몬 현재 레벨
	int	evolutionLevel;						// 진화 단계

	int type1; 								// 포켓몬 타입1	
	int type2;								// 포켓몬 타입2

	int	attack;								// 1레벨 초기 공격
	int	defense;							// 1레벨 초기 방어	
	int specialAttack;						// 1레벨 초기 특수공격
	int	specialDefense;						// 1레벨 초기 특수방어
	int	speed;								// 1레벨 초기 스피드
	int	currentHP;							// 1레벨 초기 현재 체력
	int	maxHP;								// 1레벨 초기 최대 체력

	int	levelAttack;						// 레벨당 증가하는 공격
	int	levelDefense;						// 레벨당 증가하는 방어	
	int levelSpecialAttack;					// 레벨당 증가하는 특수공격
	int	levelSpecialDefense;				// 레벨당 증가하는 특수방어
	int	levelSpeed;							// 레벨당 증가하는 스피드
	int levelHP;							// 레벨당 증가하는 체력

	int sumAttack;							// 최종 공격
	int sumDefense;							// 최종 방어
	int sumSpecialAttack;					// 최종 특수공격
	int sumSpecialDefense;					// 최종 특수방어
	int sumSpeed;							// 최종 스피드
	int sumMaxHP;							// 최종 체력

	int currentExp;							// 현재 경험치(현재 얻은 총 경험치, level값 만큼 빼서 나머지 양 보여주기)
	int	maxExp;								// 최대 경험치(현재 레벨의 최대 경험치 값 표시)

	int	skill1;								// 스킬1 인덱스 
	int	skill2;								// 스킬2 인덱스 
	int	skill3;								// 스킬3 인덱스 
	int	skill4;								// 스킬4 인덱스 
};

class poketmon : public gameNode
{
protected:
	tagPOKETMON _poketmon;

public:
	poketmon();
	~poketmon();

	virtual HRESULT init();			//초기화 함수
	virtual void release();			//메모리 해제 함슈
	virtual void update();			//연산하는 함수
	virtual void render();			//그리기 함수

	void attackAI();



};