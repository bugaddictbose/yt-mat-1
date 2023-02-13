//import all required libraries
#include<stdio.h>
#include<windows.h>
#include<time.h>

//declare textcolor function for changing text color to red
void textcolor(int color){
static int __BACKGROUND;
HANDLE h = GetStdHandle (STD_OUTPUT_HANDLE);
CONSOLE_SCREEN_BUFFER_INFO csbiInfo;
GetConsoleScreenBufferInfo(h, &csbiInfo);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color + (__BACKGROUND << 4));
}

//declare delay function for delaying output
void delay(int milli_seconds)
{
clock_t start_time = clock();
while (clock() < start_time + milli_seconds);
}

//the main method
int main(){
textcolor(4); //4 code of red
for (int i=0; i<50; i++){ //change initial value of 'i' to your desired number of output lines
for (int j = 0; j<3; j++){//skip this line to print everything in one line	
printf("i love you darling %c ", 3); // 3 code of heart; change your text accordingly
delay(100);//i've delayed text to 0.8 seconds
}printf("\n");
}
return 0;
}