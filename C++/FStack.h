#pragma once
#include "FSList.h"
class FSbase
{
public:
	FSbase() {}
	virtual void Initial() { std::cout << "Base::Initial()" << std::endl; }
	virtual void Destory() { std::cout << "Base::Destory()" << std::endl; }
	virtual void Enable() { std::cout << "Base::Enable()" << std::endl; }
	virtual void Unenable() { std::cout << "Base::Unenable()" << std::endl; }
};

class FStack
{
private:
	FSList<FSbase*> list;
public:
	FStack();
	FStack(FSbase* data);
	void Push(FSbase* data);
	void Pop();
	unsigned int Length();
	FSbase* Peek();
	bool Empty();
	~FStack();
};
