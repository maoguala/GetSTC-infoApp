#include <fcntl.h>
#include <io.h>
#include "AppUI.h"
#include "AppCondition.h"

int main()
{   
    //======================
    system("chcp 65001"); //make cmd use unicode UTF-8 to write 
    //======================

    SetConsoleOutputCP(CP_UTF8); // Setup CMD's Unicode about chcp 65001
    //_setmode(_fileno(stdout), _O_U8TEXT); //Setup standard output stream mode: UTF-8

    //======================
    //Main Program,work with loop
    while(true)
    {
        MainPage();
        std::cin >> OptSel;
        system("cls"); //clear the cmd display
        MainPageOptSel();
    
    }
    
    return 0;

}