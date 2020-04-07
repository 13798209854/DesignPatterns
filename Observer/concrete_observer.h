#pragma once

#include "observer.h"

#include <iostream>
#include <string>

using namespace std;

//����۲���
class ConcreteObserver :public IObserver
{
public:
	ConcreteObserver(string name) { m_strName = name; }
	void update(float price) override{
		cout << m_strName << "-price	" << price << "\n";
	}
	void setpConsub(ISubject* p)override { m_pConSub = p; }

	void setPrice(float f) { 
		if (m_price!=f) {
			m_price = f;
			m_pConSub->setState(f);
			m_pConSub->notify();
		}
	}
private:
	string m_strName;//����
	ISubject *m_pConSub;
	float m_price=0.0;
};
