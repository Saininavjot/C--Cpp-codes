/* math.h header file is included for abs() function */
#include<iostream>
#include<math.h>
using namespace std;
int main() // main function

{
    int i,j,k,n;//variable declared

    cout<<"\nEnter the no. of equations: ";
    cin>>n;// enter no. of equation

    /* if no of equations are n then size
     *  of augmented matrix will be n*n+1. So here we are declaring 2d array 'mat' of size n+n+1 */
    float mat[n][n+1];

    /* for n equations there will be n unknowns which will be stored in array 'res' */
    float res[n];

    cout<<"\nEnter the elements of the a and b matrix: "; //enter matrix a and b
    for(i=0;i<n;i++)
    {
      for(j=0;j<n+1;j++)// for loop for matrix indices
    {
      cin>>mat[i][j];// final augmented matrix
    }
    }

    for(i=0;i<n;i++)//for loop for indices
    {
        for(j=i+1;j<n;j++)
        {
            if(abs(mat[i][i]) < abs(mat[j][i]))//if condition to check greater no.
            {
                for(k=0;k<n+1;k++)
                {
                    /* swapping mat[i][k] and mat[j][k] */
        mat[i][k]=mat[i][k]+mat[j][k];
                    mat[j][k]=mat[i][k]-mat[j][k];//matrix values are subtracted
                    mat[i][k]=mat[i][k]-mat[j][k];
                }
            }
      }
    }

     /* performing Gaussian elimination */
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            float f=mat[j][i]/mat[i][i]; //factor is calcualted
            for(k=0;k<n+1;k++)
            {
              mat[j][k]=mat[j][k]-f*mat[i][k];//value of new matrix
      }
        }
    }
    /* Backward substitution for discovering values of unknowns */
    for(i=n-1;i>=0;i--)
    {
        res[i]=mat[i][n];

        for(j=i+1;j<n;j++)
        {
          if(i!=j)
          {
              res[i]=res[i]-mat[i][j]*res[j];
    }
  }
  res[i]=res[i]/mat[i][i];
    }

    cout<<"\nThe values of x1,x2,x3 for the above equations=>\n";// final output displayed
    for(i=0;i<n;i++)
    {
      cout<<res[i]<<"\n";// final output
    }

    return 0;
}
