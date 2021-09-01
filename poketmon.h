#pragma once
#include "gameNode.h"

// ���ϸ� ������
struct tagPOKETMON
{
	char name;								// �̸�
	bool gender;							// ����
	int index;								// �ε��� ��ȣ
	int level;								// ���ϸ� ���� ����
	int type1; 								// ���ϸ� Ÿ��1	
	int type2;								// ���ϸ� Ÿ��2
	int	evolutionLevel;						// ��ȭ �ܰ�
	int	attack;								// ����
	int	defense;							// ���	
	int specialAttack;						// Ư������
	int	specialDefense;						// Ư�����
	int	speed;								// ���ǵ�
	int	levelAttack;						// ������ �����ϴ� ����
	int	levelDefense;						// ������ �����ϴ� ���	
	int levelSpecialAttack;					// ������ �����ϴ� Ư������
	int	levelSpecialDefense;				// ������ �����ϴ� Ư�����
	int	levelSpeed;							// ������ �����ϴ� ���ǵ�
	int levelHP;							// ������ �����ϴ� ü��
	int	currentHP;							// ���� ü��
	int	maxHp;								// �ִ� ü��
	int currentExp;							// ���� ����ġ(���� ���� �� ����ġ, level�� ��ŭ ���� ������ �� �����ֱ�)
	int	maxExp;								// �ִ� ����ġ(���� ������ �ִ� ����ġ �� ǥ��)
	int	skill1;								// ��ų1 �ε��� 
	int	skill2;								// ��ų2 �ε��� 
	int	skill3;								// ��ų3 �ε��� 
	int	skill4;								// ��ų4 �ε��� 
};

class poketmon : public gameNode
{
private:
	tagPOKETMON _poketmon;

public:
	poketmon();
	~poketmon();

	virtual HRESULT init();			//�ʱ�ȭ �Լ�
	virtual void release();			//�޸� ���� �Խ�
	virtual void update();			//�����ϴ� �Լ�
	virtual void render();			//�׸��� �Լ�

	void attackAI();


};