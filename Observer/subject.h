#pragma once

class IObserver;

class ISubject
{
public:
	virtual void attach(IObserver *)=0;//ע��۲���
	virtual void detach(IObserver *)=0;//ע���۲���
	virtual void notify() = 0;//֪ͨ�۲���
	virtual void setState(float p) = 0;
	virtual float getState() = 0;
};
