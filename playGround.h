#pragma once
#include "gameNode.h"
#include "tileMap.h"

class playGround : public gameNode
{
private:
	tileMap* _tileMap;
	   	

public:
	playGround();
	~playGround();

	virtual HRESULT init();			//�ʱ�ȭ �Լ�
	virtual void release();			//�޸� ���� �Խ�
	virtual void update();			//�����ϴ� �Լ�
	virtual void render();			//�׸��� �Լ�

	
	
};

