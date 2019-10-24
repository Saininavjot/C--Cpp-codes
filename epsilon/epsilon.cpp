/*
 * epsilon.cpp
 *
 *  Created on: Sep. 18, 2019
 *      Author: user
 */


#include <iostream> //
using namespace std;

int main()
{
	float epsilon=1;
	while(1+epsilon > 1)
	{
		epsilon=epsilon/2;
	}
	epsilon=epsilon*2;
cout<<"Round-off error"<<epsilon;
}

