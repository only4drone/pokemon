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
    //���ϸ� ��
    IMAGEMANAGER->addFrameImage("������_��", "image/poketmon/���ϸ�_������_��.bmp", 112, 112, 1, 1, true, RGB(255, 0, 255));
    IMAGEMANAGER->addFrameImage("��������_��", "image/poketmon/���ϸ�_��������_��.bmp", 112, 112, 1, 1, true, RGB(255, 0, 255));
    IMAGEMANAGER->addFrameImage("���̹�_��", "image/poketmon/���ϸ�_���̹�_��.bmp", 112, 112, 1, 1, true, RGB(255, 0, 255));
    IMAGEMANAGER->addFrameImage("ġ�ڸ�Ÿ_��", "image/poketmon/���ϸ�_ġ�ڸ�Ÿ_��.bmp", 112, 112, 1, 1, true, RGB(255, 0, 255));
    IMAGEMANAGER->addFrameImage("���̸���_��", "image/poketmon/���ϸ�_���̸���_��.bmp", 112, 112, 1, 1, true, RGB(255, 0, 255));
    IMAGEMANAGER->addFrameImage("�ް��Ͽ�_��", "image/poketmon/���ϸ�_�ް��Ͽ�_��.bmp", 112, 112, 1, 1, true, RGB(255, 0, 255));
    IMAGEMANAGER->addFrameImage("������_��", "image/poketmon/���ϸ�_������_��.bmp", 112, 112, 1, 1, true, RGB(255, 0, 255));
    IMAGEMANAGER->addFrameImage("��������_��", "image/poketmon/���ϸ�_��������_��.bmp", 112, 112, 1, 1, true, RGB(255, 0, 255));
    IMAGEMANAGER->addFrameImage("��ũ�δ���_��", "image/poketmon/���ϸ�_��ũ�δ���_��.bmp", 112, 112, 1, 1, true, RGB(255, 0, 255));
    IMAGEMANAGER->addFrameImage("��ī��_��", "image/poketmon/���ϸ�_��ī��_��.bmp", 112, 112, 1, 1, true, RGB(255, 0, 255));
    IMAGEMANAGER->addFrameImage("������_��", "image/poketmon/���ϸ�_������_��.bmp", 112, 112, 1, 1, true, RGB(255, 0, 255));
    IMAGEMANAGER->addFrameImage("����_��", "image/poketmon/���ϸ�_����_��.bmp", 112, 112, 1, 1, true, RGB(255, 0, 255));
    IMAGEMANAGER->addFrameImage("��Ʈ��_��", "image/poketmon/���ϸ�_��Ʈ��_��.bmp", 112, 112, 1, 1, true, RGB(255, 0, 255));
    IMAGEMANAGER->addFrameImage("����_��", "image/poketmon/���ϸ�_����_��.bmp", 112, 112, 1, 1, true, RGB(255, 0, 255));
    IMAGEMANAGER->addFrameImage("����_��", "image/poketmon/���ϸ�_����_��.bmp", 112, 112, 1, 1, true, RGB(255, 0, 255));
    IMAGEMANAGER->addFrameImage("������_��", "image/poketmon/���ϸ�_������_��.bmp", 112, 112, 1, 1, true, RGB(255, 0, 255));
    IMAGEMANAGER->addFrameImage("������_��", "image/poketmon/���ϸ�_������_��.bmp", 112, 112, 1, 1, true, RGB(255, 0, 255));
    IMAGEMANAGER->addFrameImage("����帱��_��", "image/poketmon/���ϸ�_����帱��_��.bmp", 112, 112, 1, 1, true, RGB(255, 0, 255));
    IMAGEMANAGER->addFrameImage("ĳ����_��", "image/poketmon/���ϸ�_ĳ����_��.bmp", 112, 112, 1, 1, true, RGB(255, 0, 255));
    IMAGEMANAGER->addFrameImage("�ܵ���_��", "image/poketmon/���ϸ�_�ܵ���_��.bmp", 112, 112, 1, 1, true, RGB(255, 0, 255));
    IMAGEMANAGER->addFrameImage("������_��", "image/poketmon/���ϸ�_������_��.bmp", 112, 112, 1, 1, true, RGB(255, 0, 255));
    IMAGEMANAGER->addFrameImage("������_��", "image/poketmon/���ϸ�_������_��.bmp", 112, 112, 1, 1, true, RGB(255, 0, 255));
    IMAGEMANAGER->addFrameImage("������_��", "image/poketmon/���ϸ�_������_��.bmp", 112, 112, 1, 1, true, RGB(255, 0, 255));
    IMAGEMANAGER->addFrameImage("��ħ��_��", "image/poketmon/���ϸ�_��ħ��_��.bmp", 112, 112, 1, 1, true, RGB(255, 0, 255));

}
