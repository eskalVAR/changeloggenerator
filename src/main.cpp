//Changelog Generator 2.0 By Eryk Skalinski 19/10/2017 (DD/MM/YYYY)

//Standard Includes
#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
//Directory Managment Imports
#include<dirent.h>
#include<sys/stat.h>
#include <sys/types.h>
//https://stackoverflow.com/questions/5530933/dirent-h-in-visual-studio-2010-or-2008

using namespace std;


void printDir(void) {
	//http://www.cplusplus.com/forum/beginner/43934/
	DIR *dp;
	struct dirent *ep;
	struct stat stat_output;
	//http://pubs.opengroup.org/onlinepubs/009695399/functions/stat.html
	//Convert to char array as opendir requires const char  * since it's a C routine
	//http://pubs.opengroup.org/onlinepubs/7908799/xsh/dirent.h.html
	if ((dp = opendir(dir.c_str())) == NULL)
	{
		return "ERROR";
	};

}


int main()
{
    return 0;
}

