#include <windows.h>
#include <vfw.h>

#pragma comment(lib, "vfw32.lib")

LRESULT CALLBACK windowsProcedure(HWND, UINT, WPARAM, LPARAM);


HWND hCamera;


char _ClassName[] = "Object Detection";
char _WindowName[] = "Object Detection";

int _windowH = 1290;
int _windowW = 720;

int _xPosition = 100;
int _yPosition = 100;


int WINAPI WinMain(HINSTANCE hInst , HINSTANCE hPrevInst , LPSTR args, int nCmd){
    WNDCLASSW wc = {0};

    wc.hbrBackground = (HBRUSH) COLOR_WINDOW;
    wc.hCursor = LoadCursor(NULL,IDC_ARROW);
    wc.hInstance = hInst;
    wc.lpszClassName = _ClassName;
    wc.lpfnWndProc = windowsProcedure;
    

   if(!RegisterClassW(&wc))
        return -1;


    CreateWindowW(_ClassName, _WindowName, WS_OVERLAPPEDWINDOW | WS_VISIBLE, _xPosition,_yPosition, _windowH, _windowW,NULL,NULL,NULL,NULL);

    MSG msg = {0};

    while ( GetMessage(&msg, NULL, 0, 0))
    {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }
    
    return 0;
}
LRESULT CALLBACK windowsProcedure(HWND hWnd, UINT msg, WPARAM wp, LPARAM lp){   
    switch (msg)
    {
    case WM_DESTROY:
        PostQuitMessage(0);
        break;
    
    default:
        return DefWindowProcW(hWnd,msg,wp,lp);
    }
}