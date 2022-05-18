//Program to check wether prime number

# include<iostream>
using  std::cin;
using std::cout;
    
int main()
{
	int i,n, count=0;
	cout<<"enter the number";
	cin>>n;
	for(i=1;i<=n;i++)
	{
	     if(n%i==0)
	     {
		count++;
	     }
	}  
	if(count==2)
		cout<<"prime number";
	else
		cout<<"not a prime number";     
	return 0;
}
