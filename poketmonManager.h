#pragma once
#include "gameNode.h"

// ���� ����
class character;

class poketmonManager : public gameNode
{
private:
	character* _character;


public:

	poketmonManager();
	~poketmonManager();

	virtual HRESULT init();			//�ʱ�ȭ �Լ�
	virtual void release();			//�޸� ���� �Խ�
	virtual void update();			//�����ϴ� �Լ�
	virtual void render();			//�׸��� �Լ�

	void poketmonImage();										// ���ϸ� �̹��� �߰�


	void setCharacterMemoryAddressLink(character* character) { _character = character; }		// �޸� �ּ� ��ũ
};

