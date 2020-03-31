#include<iostream>
#include<cstring>
#include<stdio.h>
#include<conio.h>
using namespace std;
int north,east,west,south;
void DriveThroughIntersection(string,string);
void leave(string);
int main()
{
	int number;
	string inDir,outDir;
	while(true)
	{
		cout<<"\n\nenter into intersection or leave from intersection";
		cout<<"\n\npress 1 to enter or press 2 to leave";
		cin>>number;
		switch(number)
		{
			case 1:
				cout<<"\n\n enter the directions (entering and leaving)";
				cin>>inDir;
				cin>>outDir;
				if((inDir=="north")||(inDir=="east"))
				{
					DriveThroughIntersection(inDir,outDir);
				}
				else
				{
					cout<<"\n\n no such direction to enter try agian";
				}
			break;
			
			case 2:
				cout<<"\n\n enter the direction to leaving";
				
				if((outDir=="north")||(outDir=="west"))
				{
					leave(outDir);
				}
				else
				{
				cout<<"\n\n no such direction to enter try agian";
					
				}
			break;
			
			default:cout<<"\n\nno such option please try again";
		}
	}
}

 void DriveThroughIntersection(string inDir,string outDir)
	{
		if(outDir=="north")
		{
			if(north==0)
			{
				cout<<"\n\n lane is empty you can enter safely";
				north++;
			}
			else
			{
				cout<<"\n\nalready lane occupied by vehicles you need to wait";
			}
			
		}
		if(outDir=="west")
		{
			if(west==0)
			{
				cout<<"\n\n lane is empty you can enter safely";
				west++;
			}
			else
			{
			cout<<"\n\nalready lane occupied by vehicles you need to wait";
			}
		}
	}
		
		 void leave(string outDir)
	{
		if(outDir=="north")
		{
			if(north==1)
			{
				north--;
				cout<<"\n\n you safely leaved from junction";
			}
		}
		else if(outDir=="east")
		{
			if(east==1)
			{
				east--;
				cout<<"\n\n you safely leaved from junction/n";
			}
		}
	}
