#include <iostream>
using namespace std;
int main()
{
  //method-1
  // int x;
  // for (int i = 0; i < 4; i++)
  // {
  //   if (i % 2 == 0)
  //   {
  //     x = 1;
  //   }
  //   else
  //   {
  //     x = 0;
  //   }

  //   for (int j = 0; j < i + 1; j++)
  //   {
  //     if (j == 0)
  //     {
  //       cout << " " << x << " ";
  //     }
  //     else
  //     {
  //       if (x == 1)
  //       {
  //         x = 0;
  //         cout << " " << x << " ";
  //       }
  //       else
  //       {
  //         x = 1;
  //         cout << " " << x << " ";
  //       }
  //     }
  //   }
  //   cout << endl;
  // }


  //method-2
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0;  j < i+1;  j++)
    {
      if ((i+j)%2==0)
      {
       cout<<" "<<1<<" ";
      }
      else{
        cout<<" "<<0<<" ";
      }
      
    }
     cout << endl;
  }
  
  return 0;
}