#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int m,d;
	char ans;
	cout<<"Welcome to Astrology Finder"<<endl;
	cout<<"Do you want to know your astrology sign?"<<endl;
	cin>>ans;
	do
	{
		cout<<"Enter your birth month in number please!"<<endl;
		cin>>m;
		cout<<"Enter your birth date please!"<<endl;
		cin>>d;
		
		if (((m==3)&&(d>21))||((m==4)&&(d<19)))
		{
			cout<<"Aries"<<endl;
		}
		
		else if (((m==4)&&(d>20))||((m==5)&&(d<20)))
		{
			cout<<"Taurus"<<endl;
		}
		
		else if (((m==5)&&(d>21))||((m==6)&&(d<21)))
		{
			cout<<"Gemini"<<endl;
		}
		
		else if (((m==6)&&(d>22))||((m==7)&&(d<22)))
		{
			cout<<"Cancer"<<endl;
		}
		
		else if (((m==7)&&(d>23))||((m==8)&&(d<22)))
		{
			cout<<"Leo"<<endl;
		}
		
		else if (((m==8)&&(d>23))||((m==9)&&(d<22)))
		{
			cout<<"Virgo"<<endl;
		}
	    
	    else if (((m==9)&&(d>23))||((m==10)&&(d<22)))
	    {
	    	cout<<"Libra"<<endl;
		}
		else if (((m==10)&&(d>23))||((m==11)&&(d<21)))
		{
			cout<<"Scorpio"<<endl;
		}
		
		else if (((m==11)&&(d>22))||((m==12)&&(d<21)))
		{
			cout<<"Sagittarius"<<endl;
		}
		
		else if (((m==12)&&(d>22))||((m==1)&&(d<19)))
		{
			cout<<"Capricorn"<<endl;
		}
		
		else if (((m==1)&&(d>20))||((m==2)&&(d<18)))
		{
			cout<<"Aquarius"<<endl;
		}
		else if (((m==2)&&(d>19))||((m==3)&&(d<20)))
		{
			cout<<"Pices"<<endl;
		}

		else
	    {
	    	cout<<"cusp"<<endl;
		}
	
	
		cout<<"Do you want to start over? Return 'Y' for Yes."<<endl;
	cin>>ans;
	
	
	}
	
	while ((ans=='Y')&&(ans!='N'));
	
	
	
	return 0;
}
