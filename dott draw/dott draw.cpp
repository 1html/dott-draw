#include <stdio.h>

#include <windows.h>



    

//특정 좌표로 커서를 옮기자

void gotoXY(int x, int y) {
    // 현재 콘솔 창 크기 가져오기
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
    int consoleHeight = csbi.srWindow.Bottom - csbi.srWindow.Top + 1; // 콘솔 높이

    // Y축 값이 콘솔 높이를 초과하지 않도록 제한
    if (y >= consoleHeight) {
        y = consoleHeight - 1; // 최대 높이로 제한
    }

    // 커서 이동
    COORD coord = { x, y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    

}



//0 : 검정

//1 : 빨강

//2 : 초록

//3 : 노랑

//4 : 파랑

//5 : 자주

//6 : 청록

//7 : 흰색

// ...  

// \033 : ASCII escape

//38: 이 코드는 텍스트의 전경(글자) 색상을 설정하겠다는 의미입니다. 텍스트의 배경색을 설정하려면 48을 사용합니다.

//5: 이 코드의 5는 256색 모드를 사용하는 것을 의미합니다.이 모드는 256가지 색상을 사용할 수 있는 확장된 색상 범위를 제공합니다.

//%d : 이 자리는 색상 코드를 나타내는 숫자가 들어갈 자리입니다.색상 코드는 0부터 255까지의 값을 가질 수 있습니다.



void setColor(int colorCode) {

    printf("\033[38;5;%dm", colorCode); // 38;5;%dm은 256색 모드

}



int main() {

 
    gotoXY(10, 0);
    printf("\033[100m        \033[0m\n");
    gotoXY(10, 1);
    printf("\033[100m        \033[0m\n");
    gotoXY(10, 2);
    printf("\033[100m        \033[0m\n");
    gotoXY(10, 3);
    printf("\033[100m        \033[0m\n");
    //배열 1-1
    gotoXY(17, 0);
    printf("\033[100m        \033[0m\n");
    gotoXY(17, 1);
    printf("\033[100m        \033[0m\n");
    gotoXY(17, 2);
    printf("\033[100m        \033[0m\n");
    gotoXY(17, 3);
    printf("\033[100m        \033[0m\n");
    //배열 1-2
    gotoXY(24, 0);
    printf("\033[100m        \033[0m\n");
    gotoXY(24, 1);
    printf("\033[100m        \033[0m\n");
    gotoXY(24, 2);
    printf("\033[100m        \033[0m\n");
    gotoXY(24, 3);
    printf("\033[100m        \033[0m\n");
    //배열 1-3
    gotoXY(10, 4);
    printf("\033[100m        \033[0m\n");
    gotoXY(10, 5);
    printf("\033[100m        \033[0m\n");
    gotoXY(10, 6);
    printf("\033[100m        \033[0m\n");
    //배열 2-1
    gotoXY(10, 7);
    printf("\033[100m        \033[0m\n");
    gotoXY(10, 8);
    printf("\033[100m        \033[0m\n");
    gotoXY(10, 9);
    printf("\033[100m        \033[0m\n");
    //배열 3-1
    gotoXY(18, 4);
    printf("\033[47m        \033[0m\n");
    gotoXY(18, 5);
    printf("\033[47m        \033[0m\n");
    gotoXY(18, 6);
    printf("\033[47m        \033[0m\n");
    //배열 2-2
    gotoXY(18, 7);
    printf("\033[107m       \033[0m\n");
    gotoXY(18, 8);
    printf("\033[107m       \033[0m\n");
    gotoXY(18, 9);
    printf("\033[107m       \033[0m\n");
    //배열 2-3
    gotoXY(25, 4);
    printf("\033[107m       \033[0m\n");
    gotoXY(25, 5);
    printf("\033[107m       \033[0m\n");
    gotoXY(25, 6);
    printf("\033[107m       \033[0m\n");
    //배열 3-2
    gotoXY(25, 7);
    printf("\033[47m       \033[0m\n");
    gotoXY(25, 8);
    printf("\033[47m       \033[0m\n");
    gotoXY(25, 9);
    printf("\033[47m       \033[0m\n");
    //배열 3-3
    gotoXY(32, 4);
    printf("\033[100m       \033[0m\n");
    gotoXY(32, 5);
    printf("\033[100m       \033[0m\n");
    gotoXY(32, 6);
    printf("\033[100m       \033[0m\n");
    //배열 4-2
    gotoXY(32, 7);
    printf("\033[107m       \033[0m\n");
    gotoXY(32, 8);
    printf("\033[107m       \033[0m\n");
    gotoXY(32, 9);
    printf("\033[107m       \033[0m\n");
    //배열 4-3
    gotoXY(18, 10);
    printf("\033[100m       \033[0m\n");
    gotoXY(18, 11);
    printf("\033[100m       \033[0m\n");
    gotoXY(18, 12);
    printf("\033[100m       \033[0m\n");
    //배열 2-4 
    gotoXY(39, 7);
    printf("\033[100m       \033[0m\n");
    gotoXY(39, 8);
    printf("\033[100m       \033[0m\n");
    gotoXY(39, 9);
    printf("\033[100m       \033[0m\n");
    //배열 5-3
    gotoXY(25, 10);
    printf("\033[107m       \033[0m\n");
    gotoXY(25, 11);
    printf("\033[107m       \033[0m\n");
    gotoXY(25, 12);
    printf("\033[107m       \033[0m\n");
    //배열 3-4
    gotoXY(32, 10);
    printf("\033[47m       \033[0m\n");
    gotoXY(32, 11);
    printf("\033[47m       \033[0m\n");
    gotoXY(32, 12);
    printf("\033[47m       \033[0m\n");
    //배열 4-4
    gotoXY(39, 10);
    printf("\033[107m       \033[0m\n");
    gotoXY(39, 11);
    printf("\033[107m       \033[0m\n");
    gotoXY(39, 12);
    printf("\033[107m       \033[0m\n");
    //배열 5-4
    gotoXY(46, 10);
    printf("\033[100m       \033[0m\n");
    gotoXY(46, 11);
    printf("\033[100m       \033[0m\n");
    gotoXY(46, 12);
    printf("\033[100m       \033[0m\n");
    //배열 6-4

    gotoXY(25, 13);
    printf("\033[100m       \033[0m\n");
    gotoXY(25, 14);
    printf("\033[100m       \033[0m\n");
    gotoXY(25, 15);
    printf("\033[100m       \033[0m\n");

    gotoXY(32, 13);
    printf("\033[107m       \033[0m\n");
    gotoXY(32, 14);
    printf("\033[107m       \033[0m\n");
    gotoXY(32, 15);
    printf("\033[107m       \033[0m\n");

    gotoXY(39, 13);
    printf("\033[47m       \033[0m\n");
    gotoXY(39, 14);
    printf("\033[47m       \033[0m\n");
    gotoXY(39, 15);
    printf("\033[47m       \033[0m\n");
    
    gotoXY(46, 13);
    printf("\033[107m       \033[0m\n");
    gotoXY(46, 14);
    printf("\033[107m       \033[0m\n");
    gotoXY(46, 15);
    printf("\033[107m       \033[0m\n");
    
    gotoXY(53, 13);
    printf("\033[100m       \033[0m\n");
    gotoXY(53, 14);
    printf("\033[100m       \033[0m\n");
    gotoXY(53, 15);
    printf("\033[100m       \033[0m\n");
    // 5번째

    gotoXY(32, 16);
    printf("\033[100m       \033[0m\n");
    gotoXY(32, 17);
    printf("\033[100m       \033[0m\n");
    gotoXY(32, 18);
    printf("\033[100m       \033[0m\n");

    gotoXY(39, 16);
    printf("\033[107m       \033[0m\n");
    gotoXY(39, 17);
    printf("\033[107m       \033[0m\n");
    gotoXY(39, 18);
    printf("\033[107m       \033[0m\n");

    gotoXY(46, 16);
    printf("\033[47m       \033[0m\n");
    gotoXY(46, 17);
    printf("\033[47m       \033[0m\n");
    gotoXY(46, 18);
    printf("\033[47m       \033[0m\n");

    gotoXY(53, 16);
    printf("\033[107m       \033[0m\n");
    gotoXY(53, 17);
    printf("\033[107m       \033[0m\n");
    gotoXY(53, 18);
    printf("\033[107m       \033[0m\n");

    gotoXY(60, 16);
    printf("\033[100m       \033[0m\n");
    gotoXY(60, 17);
    printf("\033[100m       \033[0m\n");
    gotoXY(60, 18);
    printf("\033[100m       \033[0m\n");
    // 6번째

    gotoXY(39, 19);
    printf("\033[100m       \033[0m\n");
    gotoXY(39, 20);
    printf("\033[100m       \033[0m\n");
    gotoXY(39, 21);
    printf("\033[100m       \033[0m\n");

    gotoXY(46, 19);
    printf("\033[107m       \033[0m\n");
    gotoXY(46, 20);
    printf("\033[107m       \033[0m\n");
    gotoXY(46, 21);
    printf("\033[107m       \033[0m\n");

    gotoXY(53, 19);
    printf("\033[47m       \033[0m\n");
    gotoXY(53, 20);
    printf("\033[47m       \033[0m\n");
    gotoXY(53, 21);
    printf("\033[47m       \033[0m\n");

    gotoXY(60, 19);
    printf("\033[107m       \033[0m\n");
    gotoXY(60, 20);
    printf("\033[107m       \033[0m\n");
    gotoXY(60, 21);
    printf("\033[107m       \033[0m\n");

    gotoXY(67, 19);
    printf("\033[100m       \033[0m\n");
    gotoXY(67, 20);
    printf("\033[100m       \033[0m\n");
    gotoXY(67, 21);
    printf("\033[100m       \033[0m\n");

    gotoXY(95, 19);
    printf("\033[106m       \033[0m\n");
    gotoXY(95, 20);
    printf("\033[106m       \033[0m\n");
    gotoXY(95, 21);
    printf("\033[106m       \033[0m\n");
    gotoXY(102, 19);
    printf("\033[106m       \033[0m\n");
    gotoXY(102, 20);
    printf("\033[106m       \033[0m\n");
    gotoXY(102, 21);
    printf("\033[106m       \033[0m\n");
    // 7번째

    gotoXY(46, 22);
    printf("\033[100m       \033[0m\n");
    gotoXY(46, 23);
    printf("\033[100m       \033[0m\n");
    gotoXY(46, 24);
    printf("\033[100m       \033[0m\n");

    gotoXY(53, 22);
    printf("\033[107m       \033[0m\n");
    gotoXY(53, 23);
    printf("\033[107m       \033[0m\n");
    gotoXY(53, 24);
    printf("\033[107m       \033[0m\n");

    gotoXY(60, 22);
    printf("\033[47m       \033[0m\n");
    gotoXY(60, 23);
    printf("\033[47m       \033[0m\n");
    gotoXY(60, 24);
    printf("\033[47m       \033[0m\n");

    gotoXY(67, 22);
    printf("\033[107m       \033[0m\n");
    gotoXY(67, 23);
    printf("\033[107m       \033[0m\n");
    gotoXY(67, 24);
    printf("\033[107m       \033[0m\n");

    gotoXY(74, 22);
    printf("\033[100m       \033[0m\n");
    gotoXY(74, 23);
    printf("\033[100m       \033[0m\n");
    gotoXY(74, 24);
    printf("\033[100m       \033[0m\n");

    gotoXY(88, 22);
    printf("\033[106m       \033[0m\n");
    gotoXY(88, 23);
    printf("\033[106m       \033[0m\n");
    gotoXY(88, 24);
    printf("\033[106m       \033[0m\n");
    gotoXY(95, 22);

    printf("\033[47m       \033[0m\n");
    gotoXY(95, 23);
    printf("\033[47m       \033[0m\n");
    gotoXY(95, 24);
    printf("\033[47m       \033[0m\n");
    gotoXY(102, 22);

    printf("\033[106m       \033[0m\n");
    gotoXY(102, 23);
    printf("\033[106m       \033[0m\n");
    gotoXY(102, 24);
    printf("\033[106m       \033[0m\n");
    // 8번째 

    gotoXY(53, 25);
    printf("\033[100m       \033[0m\n");
    gotoXY(53, 26);
    printf("\033[100m       \033[0m\n");
    gotoXY(53, 27);
    printf("\033[100m       \033[0m\n");

    gotoXY(60, 25);
    printf("\033[107m       \033[0m\n");
    gotoXY(60, 26);
    printf("\033[107m       \033[0m\n");
    gotoXY(60, 27);
    printf("\033[107m       \033[0m\n");

    gotoXY(67, 25);
    printf("\033[47m       \033[0m\n");
    gotoXY(67, 26);
    printf("\033[47m       \033[0m\n");
    gotoXY(67, 27);
    printf("\033[47m       \033[0m\n");

    gotoXY(74, 25);
    printf("\033[107m       \033[0m\n");
    gotoXY(74, 26);
    printf("\033[107m       \033[0m\n");
    gotoXY(74, 27);
    printf("\033[107m       \033[0m\n");

    gotoXY(81, 25);
    printf("\033[106m       \033[0m\n");
    gotoXY(81, 26);
    printf("\033[106m       \033[0m\n");
    gotoXY(81, 27);
    printf("\033[106m       \033[0m\n");

    gotoXY(88, 25);
    printf("\033[47m       \033[0m\n");
    gotoXY(88, 26);
    printf("\033[47m       \033[0m\n");
    gotoXY(88, 27);
    printf("\033[47m       \033[0m\n");

    gotoXY(95, 25);
    printf("\033[106m       \033[0m\n");
    gotoXY(95, 26);
    printf("\033[106m       \033[0m\n");
    gotoXY(95, 27);
    printf("\033[106m       \033[0m\n");
    //9번째

    gotoXY(60, 28);
    printf("\033[100m       \033[0m\n");
    gotoXY(60, 29);
    printf("\033[100m       \033[0m\n");
    gotoXY(60, 30);
    printf("\033[100m       \033[0m\n");

    gotoXY(67, 26);
    printf("\033[107m       \033[0m\n");
    gotoXY(67, 27);
    printf("\033[107m       \033[0m\n");
    gotoXY(67, 28);
    printf("\033[107m       \033[0m\n");

    gotoXY(74, 26);
    printf("\033[47m       \033[0m\n");
    gotoXY(74, 27);
    printf("\033[47m       \033[0m\n");
    gotoXY(74, 28);
    printf("\033[47m       \033[0m\n");

    gotoXY(81, 26);
    printf("\033[106m       \033[0m\n");
    gotoXY(81, 27);
    printf("\033[106m       \033[0m\n");
    gotoXY(81, 28);
    printf("\033[106m       \033[0m\n");

    gotoXY(88, 26);
    printf("\033[47m       \033[0m\n");
    gotoXY(88, 27);
    printf("\033[47m       \033[0m\n");
    gotoXY(88, 28);
    printf("\033[47m       \033[0m\n");

    gotoXY(95, 26);
    printf("\033[106m       \033[0m\n");
    gotoXY(95, 27);
    printf("\033[106m       \033[0m\n");
    gotoXY(95, 28);
    printf("\033[106m       \033[0m\n");

    gotoXY(67, 31);
    printf("\033[106m       \033[0m\n");
    gotoXY(67, 32);
    printf("\033[106m       \033[0m\n");
    gotoXY(67, 33);
    printf("\033[106m       \033[0m\n");

    gotoXY(74, 26);
    printf("\033[106m       \033[0m\n");
    gotoXY(74, 27);
    printf("\033[106m       \033[0m\n");
    gotoXY(74, 28);
    printf("\033[106m       \033[0m\n");

    gotoXY(81, 26);
    printf("\033[47m       \033[0m\n");
    gotoXY(81, 27);
    printf("\033[47m       \033[0m\n");
    gotoXY(81, 28);
    printf("\033[47m       \033[0m\n");

    gotoXY(88, 26);
    printf("\033[106m       \033[0m\n");
    gotoXY(88, 27);
    printf("\033[106m       \033[0m\n");
    gotoXY(88, 28);
    printf("\033[106m       \033[0m\n");

    gotoXY(60, 34);
    printf("\033[106m       \033[0m\n");
    gotoXY(60, 35);
    printf("\033[106m       \033[0m\n");
    gotoXY(60, 36);
    printf("\033[106m       \033[0m\n");

    gotoXY(67, 26);
    printf("\033[47m       \033[0m\n");
    gotoXY(67, 27);
    printf("\033[47m       \033[0m\n");
    gotoXY(67, 28);
    printf("\033[47m       \033[0m\n");

    gotoXY(74, 26);
    printf("\033[47m       \033[0m\n");
    gotoXY(74, 27);
    printf("\033[47m       \033[0m\n");
    gotoXY(74, 28);
    printf("\033[47m       \033[0m\n");

    gotoXY(81, 26);
    printf("\033[106m       \033[0m\n");
    gotoXY(81, 27);
    printf("\033[106m       \033[0m\n");
    gotoXY(81, 28);
    printf("\033[106m       \033[0m\n");

    gotoXY(88, 26);
    printf("\033[103m       \033[0m\n");
    gotoXY(88, 27);
    printf("\033[103m       \033[0m\n");
    gotoXY(88, 28);
    printf("\033[103m       \033[0m\n");

    gotoXY(95, 26);
    printf("\033[43m       \033[0m\n");
    gotoXY(95, 27);
    printf("\033[43m       \033[0m\n");
    gotoXY(95, 28);
    printf("\033[43m       \033[0m\n");

    gotoXY(53, 37);
    printf("\033[106m       \033[0m\n");
    gotoXY(53, 38);
    printf("\033[106m       \033[0m\n");
    gotoXY(53, 39);
    printf("\033[106m       \033[0m\n");

    gotoXY(60, 26);
    printf("\033[47m       \033[0m\n");
    gotoXY(60, 27);
    printf("\033[47m       \033[0m\n");
    gotoXY(60, 28);
    printf("\033[47m       \033[0m\n");

    gotoXY(67, 26);
    printf("\033[106m       \033[0m\n");
    gotoXY(67, 27);
    printf("\033[106m       \033[0m\n");
    gotoXY(67, 28);
    printf("\033[106m       \033[0m\n");

    gotoXY(74, 26);
    printf("\033[106m       \033[0m\n");
    gotoXY(74, 27);
    printf("\033[106m       \033[0m\n");
    gotoXY(74, 28);
    printf("\033[106m       \033[0m\n");

    gotoXY(88, 26);
    printf("\033[43m       \033[0m\n");
    gotoXY(88, 27);
    printf("\033[43m       \033[0m\n");
    gotoXY(88, 28);
    printf("\033[43m       \033[0m\n");

    gotoXY(95, 26);
    printf("\033[103m       \033[0m\n");
    gotoXY(95, 27);
    printf("\033[103m       \033[0m\n");
    gotoXY(95, 28);
    printf("\033[103m       \033[0m\n");

    gotoXY(102, 26);
    printf("\033[43m       \033[0m\n");
    gotoXY(102, 27);
    printf("\033[43m       \033[0m\n");
    gotoXY(102, 28);
    printf("\033[43m       \033[0m\n");

    gotoXY(53, 40);
    printf("\033[106m       \033[0m\n");
    gotoXY(53, 41);
    printf("\033[106m       \033[0m\n");
    gotoXY(53, 42);
    printf("\033[106m       \033[0m\n");

    gotoXY(60, 26);
    printf("\033[106m       \033[0m\n");
    gotoXY(60, 27);
    printf("\033[106m       \033[0m\n");
    gotoXY(60, 28);
    printf("\033[106m       \033[0m\n");

    gotoXY(95, 26);
    printf("\033[43m       \033[0m\n");
    gotoXY(95, 27);
    printf("\033[43m       \033[0m\n");
    gotoXY(95, 28);
    printf("\033[43m       \033[0m\n");

    gotoXY(102, 26);
    printf("\033[103m       \033[0m\n");
    gotoXY(102, 27);
    printf("\033[103m       \033[0m\n");
    gotoXY(102, 28);
    printf("\033[103m       \033[0m\n");

    gotoXY(109, 26);
    printf("\033[106m       \033[0m\n");
    gotoXY(109, 27);
    printf("\033[106m       \033[0m\n");
    gotoXY(109, 28);
    printf("\033[106m       \033[0m\n");

    gotoXY(102, 43);
    printf("\033[106m       \033[0m\n");
    gotoXY(102, 44);
    printf("\033[106m       \033[0m\n");
    gotoXY(102, 45);
    printf("\033[106m       \033[0m\n");

    gotoXY(109, 26);
    printf("\033[46m       \033[0m\n");
    gotoXY(109, 27);
    printf("\033[46m       \033[0m\n");
    gotoXY(109, 28);
    printf("\033[46m       \033[0m\n");

   
    return 0;

}