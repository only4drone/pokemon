#pragma once
#include "gameNode.h"

// 전방 선언
class character;

class poketmonManager : public gameNode
{
private:
	character* _character;


public:

	poketmonManager();
	~poketmonManager();

	virtual HRESULT init();			//초기화 함수
	virtual void release();			//메모리 해제 함슈
	virtual void update();			//연산하는 함수
	virtual void render();			//그리기 함수

	void poketmonImage();										// 포켓몬 이미지 추가


	void setCharacterMemoryAddressLink(character* character) { _character = character; }		// 메모리 주소 링크
};

