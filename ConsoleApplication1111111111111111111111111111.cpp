#include "stdafx.h"
#include <iostream>
#include <math.h>


using namespace std;


double a(4.8), b(-7.9);
double t, v;





int main()
{

	if (a >= b)
		t = pow(a - b, 1 / 3);
	else
		t = (a*a) + ((a - b) / (sin(a*b)));



	if (t < b)
		v = (t + a) / (-b) + sqrt(sin(a)*sin(a) - cos(t));
	else
		if (t = b)
			v = b * b + tan(t*a);
		else
			v = (b * b * b) + (t * a * a);

	cout << "n = " << t << endl;
	cout << "m = " << v << endl;




	system("pause");
    return 0;

}

