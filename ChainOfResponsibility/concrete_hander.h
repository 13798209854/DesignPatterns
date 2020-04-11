#pragma once
#include "hander.h"

class Manager :public IHander
{
public:
	Manager() {}
	~Manager() {}
	virtual void HandleRequest(float days) override {
		if (days <= 1) {
			std::cout << "manager ��׼��" << days << "���" << std::endl;
		}else {
			m_pSuccessor->HandleRequest(days);
		}
	}
};

class Director :public IHander
{
public:
	Director() {}
	~Director() {}
	virtual void HandleRequest(float days) override {
		if (days <= 3) {
			std::cout << "Director ��׼��" << days << std::endl;
		}else{
			m_pSuccessor->HandleRequest(days);
		}
	}
};

class CEO :public IHander
{
public:
	CEO() {}
	~CEO() {}
	virtual void HandleRequest(float days) override {
		if (days < 7) {
			std::cout<<"CEO ��׼��" << days << std::endl;
		}else {
			std::cout << "����ų����ˣ��Ժ������ϰ��ˣ�" << std::endl;
		}
	}
};
