//#include <ncurses.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "Inventrio2Suru.h"
 
int main()
{
    Produto * cab = cria_lista();    
    add(&cab);


    printp(1,cab);
    
    edit(10000,&cab);

    printp(1,cab);

    /*
    initscr();
    start_color();
    noecho();
    keypad(stdscr, TRUE);
    

    refresh();


    draw();

    refresh();
    */
    return 0;
}