//token categorization


#include<iostream>
#include<string>
using namespace std;

int main()
{
   string input="";

    int length;

      cout<<"enter  input ";

  cin>>input;

   length=input.length();

for(int i=0;i<length;i++)
    {
if(!isdigit(input[i]))
        {
    cout<<" this is not numeric"<<endl;

return 1;
        }
    }
    cout<<"this is numeric"<<endl;

       return 0;

}













