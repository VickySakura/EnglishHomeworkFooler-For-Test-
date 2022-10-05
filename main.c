#include <stdio.h>
#include "basic.h"
#include <windows.h>
#include <time.h>
#include <stdlib.h>

static _UINT sand;

void Output(char *str){
	for(;*str != 0x00 ; str++){
		putchar(*str);
		Sleep(50);
	}
}

char buffer[8];
int counter;
int i;

int main(int argy,char** argv){
	sand = (_UINT)argv;
	Output("\n\nOne-choice questions");
	Output("\n31~35:");
	for(counter=0;counter<5;counter++){
		sand=random(sand);
		buffer[counter]=sand%3+'A';
	}
	Output(&buffer[0]);
	Output("		36~40:");
	for(counter=0;counter<5;counter++){
		sand=random(sand);
		buffer[counter]=sand%3+'A';
	}
	Output(&buffer[0]);
	Output("\n\nCloze test");
	Output("\n41~45:");
	for(counter=0;counter<5;counter++){
		sand=random(sand);
		buffer[counter]=sand%3+'A';
	}
	Output(&buffer[0]);
	Output("		46~50:");
	for(counter=0;counter<5;counter++){
		sand=random(sand);
		buffer[counter]=sand%3+'A';
	}
	Output(&buffer[0]);
	Output("\n\nReading comprehension");
	Output("\n51~55:");
	for(counter=0;counter<5;counter++){
		sand=random(sand);
		buffer[counter]=sand%2+'A';
	}
	Output(&buffer[0]);
	Output("		56~60:");
	for(counter=0;counter<5;counter++){
		sand=random(sand);
		buffer[counter]=sand%3+'A';
	}
	Output(&buffer[0]);
	Output("\n61~65:");
	for(counter=0;counter<5;counter++){
		sand=random(sand);
		buffer[counter]=sand%3+'A';
	}
	Output(&buffer[0]);
	Output("		66~70:");
	for(counter=0;counter<5;counter++){
		le:sand=random(sand);
		buffer[counter]=sand%7+'A';
		for( i=0 ; i<counter ; i++ ){
			if(buffer[counter]==buffer[i]){
				goto le;
			}
		}
	}
	Output(&buffer[0]);
	Output("\n");
	Sleep(1000);
	system("pause"); 
	
	return 0;
}
