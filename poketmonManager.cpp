#include "pch.h"
#include "poketmonManager.h"
#include "character.h"

poketmonManager::poketmonManager()
{
}

poketmonManager::~poketmonManager()
{
}

HRESULT poketmonManager::init()
{
    poketmonImage();



    return S_OK;
}

void poketmonManager::release()
{

}

void poketmonManager::update()
{

}

void poketmonManager::render()
{

}

void poketmonManager::poketmonImage()
{
    //포켓몬 앞
    IMAGEMANAGER->addFrameImage("브케인_앞", "image/poketmon/포켓몬_브케인_앞.bmp", 112, 112, 1, 1, true, RGB(255, 0, 255));
    IMAGEMANAGER->addFrameImage("마그케인_앞", "image/poketmon/포켓몬_마그케인_앞.bmp", 112, 112, 1, 1, true, RGB(255, 0, 255));
    IMAGEMANAGER->addFrameImage("블레이범_앞", "image/poketmon/포켓몬_블레이범_앞.bmp", 112, 112, 1, 1, true, RGB(255, 0, 255));
    IMAGEMANAGER->addFrameImage("치코리타_앞", "image/poketmon/포켓몬_치코리타_앞.bmp", 112, 112, 1, 1, true, RGB(255, 0, 255));
    IMAGEMANAGER->addFrameImage("베이리프_앞", "image/poketmon/포켓몬_베이리프_앞.bmp", 112, 112, 1, 1, true, RGB(255, 0, 255));
    IMAGEMANAGER->addFrameImage("메가니움_앞", "image/poketmon/포켓몬_메가니움_앞.bmp", 112, 112, 1, 1, true, RGB(255, 0, 255));
    IMAGEMANAGER->addFrameImage("리아코_앞", "image/poketmon/포켓몬_리아코_앞.bmp", 112, 112, 1, 1, true, RGB(255, 0, 255));
    IMAGEMANAGER->addFrameImage("엘리게이_앞", "image/poketmon/포켓몬_엘리게이_앞.bmp", 112, 112, 1, 1, true, RGB(255, 0, 255));
    IMAGEMANAGER->addFrameImage("장크로다일_앞", "image/poketmon/포켓몬_장크로다일_앞.bmp", 112, 112, 1, 1, true, RGB(255, 0, 255));
    IMAGEMANAGER->addFrameImage("피카츄_앞", "image/poketmon/포켓몬_피카츄_앞.bmp", 112, 112, 1, 1, true, RGB(255, 0, 255));
    IMAGEMANAGER->addFrameImage("라이츄_앞", "image/poketmon/포켓몬_라이츄_앞.bmp", 112, 112, 1, 1, true, RGB(255, 0, 255));
    IMAGEMANAGER->addFrameImage("꼬렛_앞", "image/poketmon/포켓몬_꼬렛_앞.bmp", 112, 112, 1, 1, true, RGB(255, 0, 255));
    IMAGEMANAGER->addFrameImage("레트라_앞", "image/poketmon/포켓몬_레트라_앞.bmp", 112, 112, 1, 1, true, RGB(255, 0, 255));
    IMAGEMANAGER->addFrameImage("구구_앞", "image/poketmon/포켓몬_구구_앞.bmp", 112, 112, 1, 1, true, RGB(255, 0, 255));
    IMAGEMANAGER->addFrameImage("피죤_앞", "image/poketmon/포켓몬_피죤_앞.bmp", 112, 112, 1, 1, true, RGB(255, 0, 255));
    IMAGEMANAGER->addFrameImage("피죤투_앞", "image/poketmon/포켓몬_피죤투_앞.bmp", 112, 112, 1, 1, true, RGB(255, 0, 255));
    IMAGEMANAGER->addFrameImage("깨비참_앞", "image/poketmon/포켓몬_깨비참_앞.bmp", 112, 112, 1, 1, true, RGB(255, 0, 255));
    IMAGEMANAGER->addFrameImage("깨비드릴조_앞", "image/poketmon/포켓몬_깨비드릴조_앞.bmp", 112, 112, 1, 1, true, RGB(255, 0, 255));
    IMAGEMANAGER->addFrameImage("캐터피_앞", "image/poketmon/포켓몬_캐터피_앞.bmp", 112, 112, 1, 1, true, RGB(255, 0, 255));
    IMAGEMANAGER->addFrameImage("단데기_앞", "image/poketmon/포켓몬_단데기_앞.bmp", 112, 112, 1, 1, true, RGB(255, 0, 255));
    IMAGEMANAGER->addFrameImage("버터플_앞", "image/poketmon/포켓몬_버터플_앞.bmp", 112, 112, 1, 1, true, RGB(255, 0, 255));
    IMAGEMANAGER->addFrameImage("뿔충이_앞", "image/poketmon/포켓몬_뿔충이_앞.bmp", 112, 112, 1, 1, true, RGB(255, 0, 255));
    IMAGEMANAGER->addFrameImage("딱충이_앞", "image/poketmon/포켓몬_딱충이_앞.bmp", 112, 112, 1, 1, true, RGB(255, 0, 255));
    IMAGEMANAGER->addFrameImage("독침붕_앞", "image/poketmon/포켓몬_독침붕_앞.bmp", 112, 112, 1, 1, true, RGB(255, 0, 255));

}
