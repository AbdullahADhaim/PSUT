#include "Math.h"
#include <string>

float const Math::PI = 3.14;
float Math::areaOfTriangle(float l, float w) {
	return (0.5) * l * w;
}
 long Math::factorial(int n) {
	if (n == 1 || n == 0)
		return 1;
	return n * factorial(n - 1); 
}

 int  Math::fabs(int n) {
	 if (n >= 0)
		 return n; 
	 n *= -1; 
	 return n; 
 }

 int  Math::round(float  n) {
	 if ((int)n == n)
		 return n;
	 else if (n < 0)
		 return  (int)(n - 0.5);

	 return (int)(n + 0.5);
 }
