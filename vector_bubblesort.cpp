/*
 * newvector.cpp
 *
 *  Created on: Oct 3, 2019
 *      Author: User
 */

/*
 * vector.cpp
 *
 *  Created on: Oct 3, 2019
 *      Author: User

 */
#include<vector>
#include<iostream>
using std::vector;
using std::cout;
using std::cin;
using std::endl;
int main()
{
    int n=5;
	int dir;
    vector<int> myarr; //our container
	int fill; //our container content variable
	//invariant fill is the integer to be stored
	for (int j = 0; j != n; ++j)
	{
		cout<<"Enter value of fill";
		cin>>fill;
		myarr.push_back(fill);
	}
	for (int j = 0; j != 5; ++j)
	{
		cout << myarr[j]<<endl ;
	}
	cout<<"Enter 0 for ascending order or 1 for descending order: ";
	cin>>dir;
	int swapping=1;
		while(swapping==1)
		{
			swapping=0; // swap variable declared
			for(int a=0;a<n7;a++)
			{
				if(dir==0)
				{
				if(myarr[a+1]<myarr[a])
				{
					int temp=myarr[a];
					myarr[a]=myarr[a+1];
					myarr[a+1]=temp;
					swapping=1;
				}
				}
				else if(dir==1)
				{
					if(myarr[a+1]>myarr[a])
								{
									int temp=myarr[a];
									myarr[a]=myarr[a+1];
									myarr[a+1]=temp;
									swapping=1;
								}
				}
			}
		}
	 cout<<"Array after sorting is: ";
	 for(int i=0;i<n;i++)
	 	{
	 	cout<<myarr[i]<<" ";
	 	}
	 return(0);
	}








