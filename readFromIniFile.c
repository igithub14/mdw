// This is just pseudo-code.

// learning how to read an .ini file in a Windows environment.

#include<stdio.h>
#include<configuration.ini>

Assuming I'm using Windows, I include:
#include <Windows.h>

int main() 
{
   // read the variable 'title' from 'states' and print it
   
   // On the function, I create a LPCSTR (heh!? Really? Yeah.)
   // LPCTSTR is a const TCHAR string, (TCHAR being either a wide char or char depending on whether UNICODE is defined in your project)
   LPCSTR ini = "C:\\config.ini";
   
   //... and call GetPrivateProfileString method:
   char returnValue[100];
   GetPrivateProfileString("states", "title", 0, returnValue, 100, ini);

   return 0;
 }
