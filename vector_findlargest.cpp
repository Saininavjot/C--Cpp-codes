/*
 * vector_findlargest.cpp
 *
 *  Created on: Oct 3, 2019
 *      Author: User
 */
#include<vector>
#include<iostream>
using namespace std;
int main()
{
	vector<int> myarr; //our container
		int fill; //our container content variable
		//int i=0;
		//invariant fill is the integer to be stored
		for (int j = 0; j != 5; ++j)
		{
			cout<<"Enter value of fill";
			cin>>fill;
			myarr.push_back(fill);
		}
	cout<<"\n your set of integers is\n";
	for (int i=0;i!=5;++i)
	{
	cout<<myarr[i]<<endl;
	}
	int large=myarr[0];
	 for (int i=0;i!=5;++i)
	 {
		 if(myarr[i]>large)
		 {
			 large=myarr[i];
		 }
	 }
	 cout <<"\n Largest integer is:"<<large;
	 return 0;
 }




