/**
 * This is the main TerminaltoLED program file.
 */

#include "simpletext.h"
#include "simpletools.h"

char testa[10]="on";
char testb[10]="off";

int flag=0;

int main(void)
{

  while(1)
  {
     GetInput();
  };

 return 0;
};


void GetInput(void)
{
 char messin[10]="";

 putchar(10); // newline
 putLine(">> Turn pin 1 on  or  off ?");
 putchar(10); // newline

  getStr(messin,10);
 
  if ( teststring(messin,testa)==1 )
  {
    putChar(16);  // clearscreen
    putLine("Pin 16 is on");
    high(17);
  } else  if ( teststring(messin,testb)==1 )
  {
    putChar(16); // clearscreen
    putLine("pin 16 is off");
    low(17);
  };

};



int teststring(char* in, char* test)
{
  int myflag=1;

  for(int i=0;i<10;i++)
  {
   if (in[i]!=test[i])
     {
        myflag=0;
     };
  };
  return myflag;
};



