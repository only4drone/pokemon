#pragma once
#include "gameNode.h"
#include <vector>
#include "chikorita.h"

// ���� ����
class character;

class poketmonManager : public gameNode
{
private:
	typedef vector<poketmon*>				vPoketmon;
	typedef vector<poketmon*>::iterator		viPoketmon;

private:
	vPoketmon _vPoketmon;
	viPoketmon _viPoketmon;

	character* _character;


public:

	poketmonManager();
	~poketmonManager();

	virtual HRESULT init();			//�ʱ�ȭ �Լ�
	virtual void release();			//�޸� ���� �Խ�
	virtual void update();			//�����ϴ� �Լ�
	virtual void render();			//�׸��� �Լ�

	void poketmonImage();										// ���ϸ� �̹��� �߰�
	void poketmonSpawn();										// ���ϸ� ����

	void setCharacterMemoryAddressLink(character* character) { _character = character; }		// �޸� �ּ� ��ũ
};
