//Author:Roy King
#include<iostream>
#include<string>
#include <vector>
using namespace std;

int main()
{
  string newItems;
  int numItems = 0;
  char input;
  vector<string> list;
  do
  {
  cout<<"\n==GROCERY LIST MANAGER==";
  cout<<"\nEnter your choice: ";
  cout<<"\n (A)dd an item";
  cout<<"\n (Q)uit";
  cout<<"\nYour choice (A/Q): ";
  cin>>input;

  if(input=='a'||input=='A')
    { 
    cout<<"What is the item?\n";
    cin>>newItems;
    list.push_back(newItems);
    }
  } 
  
  while(input!='q'&&input!='Q');
    
    if(list.size()==0)
    {
    cout<<"No items to buy!"<<endl;
    }
    else
    {
    cout<<"==ITEMS TO BUY=="<<endl;
      for (int index=0; index<list.size(); index++)
      cout<<index+1<<" "<<list[index]<<endl;   
    }
     
  return 0;
}
