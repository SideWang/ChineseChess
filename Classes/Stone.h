#ifndef  _Stone_H_
#define  _Stone_H_

#include "cocos2d.h"
USING_NS_CC;

//������ 
class Stone : public Sprite
{
public:
    Stone();
    //���ӵ�����:����ʿ���ࡢ���������ڡ��� 
    enum TYPE {JIANG,SHI,XIANG,CHE,MA,PAO,BING};
    //�������� 
    //��һ�����������ӵ����� 
    //�ڶ������������ӵ���ɫ 
    static Stone* create(int id, bool red);
    //��ʼ������ 
    bool init(int id, bool red);
    //������ 
    void reset(bool red);
    //����÷�����ӵĳ�ʼλ�� 
    static struct InitPos
    {
        int _x;
        int _y;
       Stone::TYPE _type;
    }_initPos[16];
    //
    CC_SYNTHESIZE(TYPE, _type, Type)
    //���ӵ�λ��(����) 
    CC_SYNTHESIZE(int, _x, X)
    CC_SYNTHESIZE(int, _y, Y)
    //���ӵ�ID  0~31(һ����32������) 
    CC_SYNTHESIZE(int, _id, ID)
    //�ж������Ƿ񱻳��� 
    CC_SYNTHESIZE(bool, _dead, Dead)
    //�ж����ӵ���ɫ 
    CC_SYNTHESIZE(bool, _red, Red)
};

#endif