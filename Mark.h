// Name: Navdeep Virdi
// Seneca email: nvirdi2@myseneca.ca
// Student ID: 166485193
// Date: Feb 21th, 2021

//I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.

#ifndef SDDS_MARK_H
#define SDDS_MARK_H
#include <iostream>

namespace sdds {
	class Mark {
		int marks;
		void setEmpty();
	public:
		Mark();
		Mark(int Marks);
		bool isInvalid();   //if mark is under 0 than there is an invalid state

		//Type conversion operators
		operator int();
		operator double();
		operator char();

		//Binary member operators
		Mark& operator+=(int i);
		Mark& operator=(int x);
	};

	//Binary helper operators
	int& operator+=(int& l, Mark& Mark);
}

#endif //!SDDS_MARK_H
