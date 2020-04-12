#pragma once

#include "builder.h"

//����ָ�ӹ�

class Director
{
public:
	void Create(IBuilder *builder) {
		builder->BuildCpu();
		builder->BuildCpu();
		builder->BuildRam();
		builder->BuildVideoCard();
	}
};
