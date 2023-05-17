#include <curses.h>
#include <ncurses.h>
#include <sys/ioctl.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
int  main(int  argc,char* argv[]){
  WINDOW *pt = initscr();
  initscr();
  struct winsize w;
  ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);
  int  x_max=w.ws_col/2; 
  int  y_max=w.ws_row;
  int  last=0;
  int  init=scr_dump(".term");
  int  area;
  for(int j=-1;j<x_max;j++){
        move(j,x_max-j+1);

        printw("/");
  //      getyx(pt,last_y,last_x);
        last=j;
        //if(j-1>=y_max) {
        //  move(y_max-2,x_max-j+1)/
        //  printw("_");
       // }
  //
        continue;
    }
   // char *bs = (char*) malloc(last+2);
   // memset(bs,'_',last);
   // bs[last+1]='\0';
    //move(0,last);
    //printw(bs);
    move(0,(last-x_max));
      //ymax /4
      //
    for(int i=0;i<=(x_max)-13;i++){
        move(i,x_max+i+2);
        printw("\\");
        init=i;
    }
    //area=last*h*/2;
    //for(int i=init;i>=y_max/4;i--){
    //  move(24,init+i);
    //  printw("/\\");
    //}
      //if(getchar()) continue;
  refresh();
  getchar();
  //free(bs);
}
