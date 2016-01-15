#include <stdexcept>

namespace triangle
{
	static const int equilateral = 0;
	static const int isosceles = 1;
	static const int scalene = 2;
	
	static const int illegal = -1;
	
	template<class T> int kind(T a, T b, T c)
	{
	        if (a == 0 || b == 0 || c == 0)
	                throw std::domain_error("Triangles with no size are illegal");
		if (a <= 0 || b <= 0 || c <= 0 || a + b <= c || a + c <= b || b + c <= a)
	                return triangle::illegal;
        	if (a == b && b == c)
	                return triangle::equilateral;
	        else if (a == b || b == c || a == c)
	                return triangle::isosceles;
	        else
	                return triangle::scalene;
	};
}