#include <stdio.h>

#include <iostream>
#include <vector>

class Stock
{
public:
  Stock ():m_data (0)
  {
      std::cout<<"Default constructor "<<std::endl;
  }

  // Copy constructor
  Stock (const Stock & rhs)
  {
	if (this != &rhs)
	  {
		this->m_data = rhs.m_data;
		std::cout << "Copy Constructor called" << std::endl;
	  }
  }

  // Move constructor
 Stock (Stock && rhs) noexcept
  {
	this->m_data = std::move (rhs.m_data);	// Transfer ownership of m_data
	std::cout << "Move Constructor called" << std::endl;
  }

  Stock & operator= (const Stock & rhs)
  {
	if (this != &rhs)
	  {
		this->m_data = rhs.m_data;
	  }
	std::cout << "Assignment Operator called" << std::endl;
	return *this;
  }

  ~Stock ()
  {
	std::cout << "Destructor called " << std::endl;
  }

private:
  int m_data;
};

int
main ()
{
  std::vector < Stock > stockVec;
  Stock s1, s2, s3;
  stockVec.reserve(9);
  stockVec.push_back (std::move (s2));
  std::cout<<stockVec.capacity()<<std::endl;
  // Using emplace_back with move semantics
  stockVec.emplace_back (std::move (s1));	// std::move converts s2 into an rvalue
  std::cout<<stockVec.capacity()<<std::endl;
  //  stockVec.emplace_back (std::move (s2));	// std::move converts s2 into an rvalue
    std::cout<<stockVec.capacity()<<std::endl;
      stockVec.emplace_back (std::move (s3));	// std::move converts s2 into an rvalue
    //   stockVec.emplace_back (std::move (s3));
       std::cout<<stockVec.capacity()<<std::endl;
  return 0;
}
