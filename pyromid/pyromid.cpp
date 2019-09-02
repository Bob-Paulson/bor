#include <iostream>

using namespace std;

void  rightUP(int x);
void  leftUP(int x);



int main()

{

 int num = 0;

 cout << "Enter the number of stars-row" << endl;
 cin >> num;
 rightUP(num);
 leftUP(num);
 return 0;

}



void rightUP(int num)

{

 int j;

 for(int i = num; i > 0; i--)
    {
       for ( j = 0; j < i; j++)
            {
              cout << " ";
	    }

       for (int k = num-j; k > 0; k-- )
           {   
            cout << "*";
           }
       cout <<endl;
    }
}


void leftUP(int num)
{
    for (int i = 1; i <= num; i++)
        {
         
	for (int j = 0; j < i; j++)
	     {     	 
	       cout << "*";
	     }

         for (int k = num - i; k > 0; k--)
	     {
	       cout <<" ";
             }
	 cout <<endl;
       }
}    
