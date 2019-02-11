#include "cricketteam.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
cricketteam::cricketteam(void)
{
	membernames=nullptr;
	noofmembers=-11;
	teamName=nullptr;
	for(int i=0;i<10;i++)
	{
		scoreinlast10matches[i]=-100;
	}
	rank=-1;
	captain="nocaptain";
}


cricketteam::cricketteam(string name, int no_of_members)
{
		membernames=nullptr;
		noofmembers=no_of_members;
		cricketteam::teamName=new char[strlen(name.c_str())];
		strcpy_s(cricketteam::teamName,sizeof(teamName),name.c_str());
	for(int i=0;i<10;i++)
	{
		scoreinlast10matches[i]=-100;
	}
	rank=-1;
	captain="nocaptain";
}

cricketteam::cricketteam(string filename)
{
	
	ifstream bucky(filename);
	
	string arr;
	
	getline(bucky,arr,':');
	getline(bucky,arr,'\n');
	teamName=new char[sizeof(arr)];
	strcpy_s(cricketteam::teamName,sizeof(arr),arr.c_str());

	getline(bucky,arr,':');
	bucky>>noofmembers;
	membernames=new string[noofmembers];
	for(int c=0;c<noofmembers;c++)
	{
		getline(bucky,membernames[c]);
	}
	for(int c=0;c<noofmembers;c++)
	{
		cout<<membernames[c];
	}

}

void cricketteam::setcaptain(string temp)
{
	captain=temp;
}

string cricketteam::getcaptain()
{
	return captain;
}

void cricketteam::setrank(int temp)
{
	rank=temp;
}

int cricketteam::getrank()
{
	return rank;
}

void cricketteam::setteamname(char* temp)
{
	teamName=temp;

}
char* cricketteam::getteamname()
{
  return teamName;
}

void cricketteam::setnoofmembers(int numberofplayers)
{
	noofmembers=numberofplayers;
}
int cricketteam::getnoofmembers()
{
   return noofmembers;
}

void cricketteam::teammember(string name)
{
	membernames=new string[noofmembers];
	

}