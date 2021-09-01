#pragma once
#include "gameNode.h"

#define SPEED 5.0f

// ĳ���� ����
enum class STATE
{
	IDLE_RL,								// ���̵� �¿�
	IDLE_UD,								// ���̵� ����
	RUN_RL,									// �ȱ� �¿�
	RUN_UD,									// �ȱ� ����
};

// ĳ���� ���ϸ�
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

// ���� ����
class poketmonManager;

class character : public gameNode
{
private:
	poketmonManager* _pM;									// ���ϸ� �Ŵ��� 		
	tagPOKETMON _poketmon[6];								// ������ ������ ���ϸ�

	image* _image;											// ĳ���� �̹���
	RECT _rc;												// ĳ���� ��Ʈ

	float _x, _y;											// ĳ���� ���� ��ǥ
	float _speed;											// ĳ���� �̵� �ӵ�
	float _maxXY;	// �׽�Ʈ��

	int _state;												// ���� ����
	int _frameCount;										// ������ �̹��� ���͹� ī��Ʈ
	int _currentFrame;										// ���� ������
	int _direction;											// ĳ���� ���� 0: ��, 1: ��, 2: ��, 3: ��

	bool _isMoving;											// ���� ĳ���Ͱ� �̵� ������?

public:
	character();
	~character();

	virtual HRESULT init();			//�ʱ�ȭ �Լ�
	virtual void release();			//�޸� ���� �Խ�
	virtual void update();			//�����ϴ� �Լ�
	virtual void render();			//�׸��� �Լ�

	void imageInit();										// �̹����� �ҷ���
	void imageSetting();									// ���� �̹��� ����
	void imageFrame();										// �̹��� ������ ó��
	void controll();										// ĳ���� ��Ʈ�� ó��
	void idle(int direction);								// ���̵� ó��
	void run(int direction);								// �ȱ� ó��
	void move();											// ��ǥ �̵� ó��

	float getCharacterX() {}

	void setPoketmonManagerMemoryAddressLink(poketmonManager* pM) { _pM = pM; }		// �޸� �ּ� ��ũ

};

