#pragma once
#include "subject.h"
//����۲���

class IObserver
{
public:
	virtual void update(float price) = 0;
	virtual void setpConsub(ISubject* p) = 0;
};
