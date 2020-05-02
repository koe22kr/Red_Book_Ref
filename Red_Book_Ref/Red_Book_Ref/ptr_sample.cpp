#include "ptr_sample.h"
#include <iostream>

void del(void(*)) {}
void fun() {}



void ptr_sample::make_sptr(int& param)
{
	int_sptr = std::make_shared<int>(param);
	std::shared_ptr<int> ref1 = int_sptr;
	
	
	
	int tester = 9;
	std::shared_ptr<int> temp = std::make_shared<int>(tester);//복사 할당 생성.
	tester = 10;                       // tester=10; temp=9;
	
	int locker = 0;
}
void ptr_sample::use_sptr()
{
	if (int_sptr!=nullptr)
	{
		int locker = 0;
		//use_sptr ~~~~
	}
}


void ptr_sample::make_uptr(int& param)
{
	int_uptr = std::make_unique<int>(param);
}
void ptr_sample::use_uptr()
{
	if (int_uptr != nullptr)
	{
		int locker = 0;
	}
}


void ptr_sample::make_wptr()
{
	int_wptr = int_sptr;
}
void ptr_sample::use_wptr()
{
	auto temp_ptr = int_wptr.lock();

	if (temp_ptr)
	{
		int locker = 0;
		//ptemp~~~
	}
}