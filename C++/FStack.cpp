#include "FStack.h"

FStack::FStack() {}

FStack::FStack(FSbase* data)
{
	list.Add(data);
	data->Initial();
}

void FStack::Push(FSbase* data)
{
	if (list.Length() > 0)
	{
		list.Top()->Unenable();
	}
	list.Add(data);
	data->Initial();
}

void FStack::Pop()
{
	if (list.Empty())
		return;
	if (list.Length() == 1)
	{
		list.Top()->Destory();
		list.RemoveTop();
	}
	else
	{
		list.Top()->Destory();
		list.RemoveTop();
		list.Top()->Enable();
	}
	
}

FSbase* FStack::Peek()
{
	if (list.Empty())
		return nullptr;
	else
		return list.Top();
}

unsigned int FStack::Length()
{
	return list.Length();
}

bool FStack::Empty()
{
	return list.Empty();
}

FStack::~FStack()
{
	list.RemoveAll();
}
