#include <iostream>
using std::cout;
using std::cin;
using std:: endl;

int main() {
	int grade,
	aCount=0,
	bCount=0,
	cCount=0,
	dCount=0,
	fCount=0;
	
	cout<<"Enter the letter grades"<<endl;
	 cout<<"Enter the EOF character to end input"<<endl;
	    
	    while ((grade=cin.get()) !=EOF) {
	    	
	    if (grade=='A') 
	    	++aCount;	
	        else if (grade=='B')
	    	++bCount;
			else if(grade=='C')
	    	++cCount;
	    	else if(grade=='D')
	    	++dCount;
	    	else if(grade=='F')
	    	++fCount;
	    else
	    cout<<"Incorrect input."<<endl;
	    cout<<"Enter anew grade."<<endl;
	    
		}
			
	cout<<"\n\n Totals for each letter grade are:"
		<<"\n A: "<< aCount
		<<"\n B: "<< bCount
		<<"\n C: "<< cCount
		<<"\n D: "<< dCount
		<<"\n F: "<< fCount<<endl;
		
		return 0;
}

