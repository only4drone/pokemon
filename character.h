#pragma once
#include "gameNode.h"

#define SPEED 5.0f

// 캐릭터 상태
enum class STATE
{
	IDLE_RL,								// 아이들 좌우
	IDLE_UD,								// 아이들 상하
	RUN_RL,									// 걷기 좌우
	RUN_UD,									// 걷기 상하
};

// 캐릭터 포켓몬
struct tagPOKETMON
{
	char name;								// 이름
	bool gender;							// 성별
	int index;								// 인덱스 번호
	int level;								// 포켓몬 현재 레벨
	int type1; 								// 포켓몬 타입1	
	int type2;								// 포켓몬 타입2
	int	evolutionLevel;						// 진화 단계
	int	attack;								// 공격
	int	defense;							// 방어	
	int specialAttack;						// 특수공격
	int	specialDefense;						// 특수방어
	int	speed;								// 스피드
	int	levelAttack;						// 레벨당 증가하는 공격
	int	levelDefense;						// 레벨당 증가하는 방어	
	int levelSpecialAttack;					// 레벨당 증가하는 특수공격
	int	levelSpecialDefense;				// 레벨당 증가하는 특수방어
	int	levelSpeed;							// 레벨당 증가하는 스피드
	int levelHP;							// 레벨당 증가하는 체력
	int	currentHP;							// 현재 체력
	int	maxHp;								// 최대 체력
	int currentExp;							// 현재 경험치(현재 얻은 총 경험치, level값 만큼 빼서 나머지 양 보여주기)
	int	maxExp;								// 최대 경험치(현재 레벨의 최대 경험치 값 표시)
	int	skill1;								// 스킬1 인덱스
	int	skill2;								// 스킬2 인덱스
	int	skill3;								// 스킬3 인덱스
	int	skill4;								// 스킬4 인덱스
};

// 전방 선언
class poketmonManager;

class character : public gameNode
{
private:
	poketmonManager* _pM;									// 포켓몬 매니저 		
	tagPOKETMON _poketmon[6];								// 유저가 보유한 포켓몬

	image* _image;											// 캐릭터 이미지
	RECT _rc;												// 캐릭터 렉트

	float _x, _y;											// 캐릭터 중점 좌표
	float _speed;											// 캐릭터 이동 속도
	float _maxXY;	// 테스트용

	int _state;												// 유저 상태
	int _frameCount;										// 프레임 이미지 인터벌 카운트
	int _currentFrame;										// 현재 프레임
	int _direction;											// 캐릭터 방향 0: 우, 1: 좌, 2: 하, 3: 상

	bool _isMoving;											// 현재 캐릭터가 이동 중인지?

public:
	character();
	~character();

	virtual HRESULT init();			//초기화 함수
	virtual void release();			//메모리 해제 함슈
	virtual void update();			//연산하는 함수
	virtual void render();			//그리기 함수

	void imageInit();										// 이미지들 불러옴
	void imageSetting();									// 현재 이미지 세팅
	void imageFrame();										// 이미지 프레임 처리
	void controll();										// 캐릭터 컨트롤 처리
	void idle(int direction);								// 아이들 처리
	void run(int direction);								// 걷기 처리
	void move();											// 좌표 이동 처리

	float getCharacterX() {}

	void setPoketmonManagerMemoryAddressLink(poketmonManager* pM) { _pM = pM; }		// 메모리 주소 링크

};

