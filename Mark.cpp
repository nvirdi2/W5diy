// Name: Navdeep Virdi
// Seneca email: nvirdi2@myseneca.ca
// Student ID: 166485193
// Date: Feb 21th, 2021

//I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Mark.h"

using namespace std;
namespace sdds 
{
	
	
	bool Mark::isInvalid()    //if mark is under 0 than there is an invalid state
	{ 
        	return (marks < 0);
    	}


	Mark::Mark() 
	{
		marks = 0;
	}


	Mark::Mark(int mark)
	{
		if (mark >= 0 && mark <= 100) 
		{
			marks = mark;
		}

		else
		{
			marks = -1;
		}
	}
	
	
	Mark& Mark::operator+=(int i) 
	{
		if (i > 0 && marks + i <= 100)
		{
			if (marks >= 0)
			{
				marks += i;
			}
		}

		else
		{
			marks = 0;
		} return *this;
	}

	
	int& operator+=(int& l, Mark& Mark) 
	{
		if (int(Mark) >= 0) 
		{
			l += int(Mark);
		} return l;
	}
	
	
	Mark& Mark::operator=(int x) 
	{
		if (x >= 0 && x <= 100) 
		{
			marks = x;
		}
		else 
		{
			marks = 0;
		} return *this;
	}
	
	
	Mark::operator double() 
	{
		if (!isInvalid())
		{
			if (marks >= 0 && marks < 50) 
			{
				return 0.0;
			}
			else if (marks >= 50 && marks < 60)
			{
				return 1.0;
			} 
			else if (marks >= 60 && marks < 70)
			{	
				return 2.0;
			} 
			else if (marks >= 70 && marks < 80) 
			{
				return 3.0;
			}
			else if (marks >= 80 && marks <= 100)
			{
				return 4.0;
			}
		} return 0.0;
	}


	Mark::operator char() 
	{
		if (!isInvalid())
		{
			if (marks >= 80 && marks <= 100)
			{
				return 'A';
			}

			else if (marks >= 70 && marks < 80)
			{
				return 'B';
			}

			else if (marks >= 60 && marks < 70) 
			{
				return 'C';
			}

			else if (marks >= 50 && marks < 60)
			{
				return 'D';
			} 

			else if (marks > 0 && marks < 50)
			{
				return 'F';	
			} 
		} return 'X';
	}

	
	Mark::operator int() 
	{
		if (isInvalid())
		{
			return 0;
		}

		else
		{
			return marks;
		} 
	}

}
