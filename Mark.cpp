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


	Mark::Mark() 
	{
		marks = 0;
	}


	Mark::Mark(int mark)
	{
		if (mark <= 100 && mark >= 0) 
		{
			marks = mark;
		}

		else
		{
			marks = -1;
		}
	}


	Mark::operator int() 
	{
		if (marks == -1)
		{
			return 0;
		}

		else
		{
			return marks;
		} 
	}


	Mark::operator double() 
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

		else
		{
			return 0.0;
		} 
	}


	Mark::operator char() 
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

			else if (marks >= 0 && marks < 50)
			{
				return 'F';
			}

		else 
		{
			return 'X';
		}
	}


	Mark& Mark::operator+=(int i) 
	{
		if (i > 0 && marks + i <= 100)
		{
			if (marks != -1)
			{
				marks += i;
			}
		}

		else
		{
			marks = 0;
		} return *this;
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


	int& operator+=(int& l, Mark& Mark) 
	{
		if (int(Mark) != -1) 
		{
			l += int(Mark);
		} return l;
	}

}
