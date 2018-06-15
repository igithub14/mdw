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
   LPCSTR ini = "C:\\config.ini";
   
   //... and call GetPrivateProfileString method:
   char returnValue[100];
   GetPrivateProfileString("states", "title", 0, returnValue, 100, ini);

   return 0;
 }
