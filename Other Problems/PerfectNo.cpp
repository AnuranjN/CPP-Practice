//Program to find perfect number
# include<iostream>
using std::cin;
using std::cout;
    
int main()
{
	int i,n,sum=0;
	cout<<"Enter the number";
	cin>>n;
	for(i=1;i<=n;i++){
	     if(n%i==0){
		    sum=sum+i;
	     }
	}	  
    if(2*n==sum){
		cout<<"perfect number";
    }
        else{
		cout<<"not a perfect number";
        }
	return 0;
}

