#pragma once
#include <memory>
#include <vector>


class ptr_sample
{
public:

	//For int;
	std::shared_ptr<int> int_sptr;
	std::unique_ptr<int> int_uptr;
	std::weak_ptr<int> int_wptr;

	//For int
	void make_sptr(int& param);
	void use_sptr();
	void make_uptr(int& param);
	void use_uptr();
	void make_wptr();
	void use_wptr();
	
	

};

