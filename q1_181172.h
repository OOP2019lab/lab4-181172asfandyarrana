
#include <string>
using namespace std;
class cricketteam
{
public:
string *membernames;
int noofmembers;
char *teamName;
int scoreinlast10matches[10];
int rank;
string captain;



public:
	
	cricketteam();
	cricketteam(string name, int no_of_members);
	cricketteam(string filename);
	void setcaptain(string captain);
	string getcaptain();
	void setrank(int rank);
	int getrank();
	void setteamname(char* teamName);
	char* getteamname();
	void setnoofmembers(int numberofplayers);
	int getnoofmembers();
	void teammember(string name);



};

