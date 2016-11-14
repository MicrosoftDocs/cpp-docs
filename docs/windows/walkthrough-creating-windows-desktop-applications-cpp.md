---
title: "Walkthrough: Creating Windows Desktop Applications (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "get-started-article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Windows applications [C++], Win32"
  - "WinMain"
  - "Win32 applications [C++]"
  - "Windows API [C++]"
ms.assetid: a247a9af-aff1-4899-9577-5f8104a0afbb
caps.latest.revision: 27
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# Walkthrough: Creating Windows Desktop Applications (C++)
This walkthrough shows how to create a traditional Windows desktop application using the C language API that has been in existence since the 1990s. This is not the modern way to create Windows programs but it is still supported and there are many applications today that still use this API. This example displays "Hello, World!" in a window. You can use the code that you develop in this walkthrough as a pattern to create other Windows desktop applications.  
  
 The Win32 API (also known as the Windows API) is a C-based framework for creating Windows applications. For more information about the Win32 API, see [Windows API](https://msdn.microsoft.com/en-us/library/cc433218.aspx).  
  
> [!IMPORTANT]
>  For the sake of brevity, some code statements are omitted in the text. The **Example** section at the end of this document shows the complete code.  
  
## Prerequisites  
 To complete this walkthrough, you must understand the fundamentals of the C++ language.  
  
### To create a Win32-based project  
  
1.  On the **File** menu, click **New** and then click **Project**.  
  
2.  In the **New Project** dialog box, in the left pane, click **Installed Templates**, click **Visual C++**, and then select **Win32**. In the middle pane, select **Win32 Project**.  
  
     In the **Name** box, type a name for the project, for example, `win32app`. Click **OK**.  
  
3.  On the Welcome page of the **Win32 Application Wizard**, click **Next**.  
  
4.  On the Application Settings page, under **Application type**, select **Windows application**. Under **Additional options**, select **Empty project**. Click **Finish** to create the project.  
  
5.  In **Solution Explorer**, right-click the Win32app project, click **Add**, and then click **New Item**. In the **Add New Item** dialog box, select **C++ File (.cpp)**. In the **Name** box, type a name for the file, for example, `GT_HelloWorldWin32.cpp`. Click **Add**.  
  
### To start a Windows desktop application  
  
1.  Just as every C application and C++ application must have a `main` function as its starting point, every Win32-based application must have a `WinMain` function. `WinMain` has the following syntax.  
  
    ```  
    int CALLBACK WinMain(  
      _In_ HINSTANCE hInstance,  
      _In_ HINSTANCE hPrevInstance,  
      _In_ LPSTR     lpCmdLine,  
      _In_ int       nCmdShow  
    );  
  
    ```  
  
     For information about the parameters and return value of this function, see [WinMain Function](http://msdn.microsoft.com/library/windows/desktop/ms633559).  
  
2.  Win32 programs require \<windows.h>. \<tchar.h> defines the TCHAR macro, which resolves ultimately to `wchar_t` if the UNICODE symbol is defined in your project, otherwise it resolves to `char`.  If you always build with UNICODE enabled, you don't need TCHAR and can just use wchar_t directly.  
  
    ```  
    #include <windows.h>  
    #include <tchar.h>  
    ```  
  
3.  In addition to the `WinMain` function, every Windows desktop application must also have a window-procedure function. This function is typically named `WndProc` but you can name it whatever you like. `WndProc` has the following syntax.  
  
    ```  
    LRESULT CALLBACK WndProc(  
      _In_ HWND   hwnd,  
      _In_ UINT   uMsg,  
      _In_ WPARAM wParam,  
      _In_ LPARAM lParam  
    );  
  
    ```  
  
     In this function you write code to handle *messages* that the application receives from Windows when *events* occur. For example, if a user clicks an OK button in your application, Windows will send a message to you and you can write code inside your `WndProc` function that does whatever work is appropriate. This is called *handling* an event. You only handle the events that are relevant for your application.  
  
     For more information, see [Window Procedures](http://msdn.microsoft.com/library/windows/desktop/ms632593).  
  
### To add functionality to the WinMain function  
  
1.  In the `WinMain` function, you populate a structure of type [WNDCLASSEX](http://msdn.microsoft.com/library/windows/desktop/ms633577). This structure contains information about the window, for example, the application icon, the background color of the window, the name to display in the title bar--and very importantly, a function pointer to your window procedure. The following example shows a typical `WNDCLASSEX` structure.  
  
    ```  
    WNDCLASSEX wcex;  
  
    wcex.cbSize = sizeof(WNDCLASSEX);  
    wcex.style          = CS_HREDRAW | CS_VREDRAW;  
    wcex.lpfnWndProc    = WndProc;  
    wcex.cbClsExtra     = 0;  
    wcex.cbWndExtra     = 0;  
    wcex.hInstance      = hInstance;  
    wcex.hIcon          = LoadIcon(hInstance, MAKEINTRESOURCE(IDI_APPLICATION));  
    wcex.hCursor        = LoadCursor(NULL, IDC_ARROW);  
    wcex.hbrBackground  = (HBRUSH)(COLOR_WINDOW+1);  
    wcex.lpszMenuName   = NULL;  
    wcex.lpszClassName  = szWindowClass;  
    wcex.hIconSm        = LoadIcon(wcex.hInstance, MAKEINTRESOURCE(IDI_APPLICATION));  
    ```  
  
     For information about the fields of this structure, see [WNDCLASSEX](http://msdn.microsoft.com/library/windows/desktop/ms633577).  
  
2.  You must register the WNDCLASSEX with Windows so that it knows about your window and how to send messages to it. Use the [RegisterClassEx](http://msdn.microsoft.com/library/windows/desktop/ms633587) function and pass the window class structure as an argument. The _T macro is used because we use the TCHAR type.  
  
    ```  
    if (!RegisterClassEx(&wcex))  
    {  
        MessageBox(NULL,  
            _T("Call to RegisterClassEx failed!"),  
            _T("Win32 Guided Tour"),  
            NULL);  
  
        return 1;  
    }  
    ```  
  
3.  Now you can create a window. Use the [CreateWindow](http://msdn.microsoft.com/library/windows/desktop/ms632679) function.  
  
    ```  
    static TCHAR szWindowClass[] = _T("win32app");  
    static TCHAR szTitle[] = _T("Win32 Guided Tour Application");  
  
    // The parameters to CreateWindow explained:  
    // szWindowClass: the name of the application  
    // szTitle: the text that appears in the title bar  
    // WS_OVERLAPPEDWINDOW: the type of window to create  
    // CW_USEDEFAULT, CW_USEDEFAULT: initial position (x, y)  
    // 500, 100: initial size (width, length)  
    // NULL: the parent of this window  
    // NULL: this application does not have a menu bar  
    // hInstance: the first parameter from WinMain  
    // NULL: not used in this application  
    HWND hWnd = CreateWindow(  
        szWindowClass,  
        szTitle,  
        WS_OVERLAPPEDWINDOW,  
        CW_USEDEFAULT, CW_USEDEFAULT,  
        500, 100,  
        NULL,  
        NULL,  
        hInstance,  
        NULL  
    );  
    if (!hWnd)  
    {  
        MessageBox(NULL,  
            _T("Call to CreateWindow failed!"),  
            _T("Win32 Guided Tour"),  
            NULL);  
  
        return 1;  
    }  
    ```  
  
     This function returns an HWND, which is a handle to a window. A handle is somewhat like a pointer that Windows uses to keep track of open windows. For more information, see [Windows Data Types](http://msdn.microsoft.com/library/windows/desktop/aa383751).  
  
4.  At this point the window has been created, but we still need to tell Windows to make it visible. That's what this code does:  
  
    ```  
    // The parameters to ShowWindow explained:  
    // hWnd: the value returned from CreateWindow  
    // nCmdShow: the fourth parameter from WinMain  
    ShowWindow(hWnd,  
        nCmdShow);  
    UpdateWindow(hWnd);  
    ```  
  
     At this point, the displayed window will not have much content because you have not yet implemented the `WndProc` function. In other words, the application is not yet handling the messages that Windows is now sending to it.  
  
5.  To handle the messages we first add a message loop to listen for the messages that Windows sends. When the application receives a message, this loop dispatches it to your `WndProc` function to be handled. The message loop resembles the following code.  
  
    ```  
    MSG msg;  
    while (GetMessage(&msg, NULL, 0, 0))  
    {  
        TranslateMessage(&msg);  
        DispatchMessage(&msg);  
    }  
  
    return (int) msg.wParam;  
    ```  
  
     For more information about the structures and functions in the message loop, see [MSG](http://msdn.microsoft.com/library/windows/desktop/ms644958), [GetMessage](http://msdn.microsoft.com/library/windows/desktop/ms644936), [TranslateMessage](http://msdn.microsoft.com/library/windows/desktop/ms644955), and [DispatchMessage](http://msdn.microsoft.com/library/windows/desktop/ms644934).  
  
     At this point, the `WinMain` function should resemble the following code.  
  
    ```  
    int WINAPI WinMain(HINSTANCE hInstance,  
                       HINSTANCE hPrevInstance,  
                       LPSTR lpCmdLine,  
                       int nCmdShow)  
    {  
        WNDCLASSEX wcex;  
  
        wcex.cbSize = sizeof(WNDCLASSEX);  
        wcex.style          = CS_HREDRAW | CS_VREDRAW;  
        wcex.lpfnWndProc    = WndProc;  
        wcex.cbClsExtra     = 0;  
        wcex.cbWndExtra     = 0;  
        wcex.hInstance      = hInstance;  
        wcex.hIcon          = LoadIcon(hInstance, MAKEINTRESOURCE(IDI_APPLICATION));  
        wcex.hCursor        = LoadCursor(NULL, IDC_ARROW);  
        wcex.hbrBackground  = (HBRUSH)(COLOR_WINDOW+1);  
        wcex.lpszMenuName   = NULL;  
        wcex.lpszClassName  = szWindowClass;  
        wcex.hIconSm        = LoadIcon(wcex.hInstance, MAKEINTRESOURCE(IDI_APPLICATION));  
  
        if (!RegisterClassEx(&wcex))  
        {  
            MessageBox(NULL,  
                _T("Call to RegisterClassEx failed!"),  
                _T("Win32 Guided Tour"),  
                NULL);  
  
            return 1;  
        }  
  
        hInst = hInstance; // Store instance handle in our global variable  
  
        // The parameters to CreateWindow explained:  
        // szWindowClass: the name of the application  
        // szTitle: the text that appears in the title bar  
        // WS_OVERLAPPEDWINDOW: the type of window to create  
        // CW_USEDEFAULT, CW_USEDEFAULT: initial position (x, y)  
        // 500, 100: initial size (width, length)  
        // NULL: the parent of this window  
        // NULL: this application dows not have a menu bar  
        // hInstance: the first parameter from WinMain  
        // NULL: not used in this application  
        HWND hWnd = CreateWindow(  
            szWindowClass,  
            szTitle,  
            WS_OVERLAPPEDWINDOW,  
            CW_USEDEFAULT, CW_USEDEFAULT,  
            500, 100,  
            NULL,  
            NULL,  
            hInstance,  
            NULL  
        );  
  
        if (!hWnd)  
        {  
            MessageBox(NULL,  
                _T("Call to CreateWindow failed!"),  
                _T("Win32 Guided Tour"),  
                NULL);  
  
            return 1;  
        }  
  
        // The parameters to ShowWindow explained:  
        // hWnd: the value returned from CreateWindow  
        // nCmdShow: the fourth parameter from WinMain  
        ShowWindow(hWnd,  
            nCmdShow);  
        UpdateWindow(hWnd);  
  
        // Main message loop:  
        MSG msg;  
        while (GetMessage(&msg, NULL, 0, 0))  
        {  
            TranslateMessage(&msg);  
            DispatchMessage(&msg);  
        }  
  
        return (int) msg.wParam;  
    }  
    ```  
  
### To add functionality to the WndProc function  
  
1.  To enable the `WndProc` function to handle the messages that the application receives, implement a switch statement.  
  
     One important message to handle is the [WM_PAINT](http://msdn.microsoft.com/library/windows/desktop/dd145213) message. The application receives this message when part of its displayed window must be updated. This event can occur when a user moves a window in front of your window, then moves it away again. Your application doesn't know when events like this occur; only Windows knows, so it notifies you with WM_PAINT. When the window is first displayed, all of it must be updated.  
  
     To handle a `WM_PAINT` message, first call [BeginPaint](http://msdn.microsoft.com/library/windows/desktop/dd183362), then handle all the logic to lay out the text, buttons, and other controls in the window, and then call [EndPaint](http://msdn.microsoft.com/library/windows/desktop/dd162598). For this application, the logic between the beginning call and the ending call is to display the string "Hello, World!" in the window. In the following code, notice that the [TextOut](http://msdn.microsoft.com/library/windows/desktop/dd145133) function is used to display the string.  
  
    ```  
    PAINTSTRUCT ps;  
    HDC hdc;  
    TCHAR greeting[] = _T("Hello, World!");  
  
    switch (message)  
    {  
    case WM_PAINT:  
        hdc = BeginPaint(hWnd, &ps);  
  
        // Here your application is laid out.  
        // For this introduction, we just print out "Hello, World!"  
        // in the top left corner.  
        TextOut(hdc,  
            5, 5,  
            greeting, _tcslen(greeting));  
        // End application-specific layout section.  
  
        EndPaint(hWnd, &ps);  
        break;  
    }  
    ```  
  
     HDC in the previous code is a handle to a device context, which is a data structure that Windows uses to enable your application to communicate with the graphics subsystem. The BeginPaint and EndPaint functions ensure that your application behaves like a good citizen and doesn't use the device context for longer than it needs to. This helps ensure the graphics subsystem is available for use by other applications.  
  
2.  An application typically handles many other messages, for example, [WM_CREATE](http://msdn.microsoft.com/library/windows/desktop/ms632619) when a window is first created, and [WM_DESTROY](http://msdn.microsoft.com/library/windows/desktop/ms632620) when the window is closed. The following code shows a basic but complete `WndProc` function.  
  
    ```  
    LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)  
    {  
        PAINTSTRUCT ps;  
        HDC hdc;  
        TCHAR greeting[] = _T("Hello, World!");  
  
        switch (message)  
        {  
        case WM_PAINT:  
            hdc = BeginPaint(hWnd, &ps);  
  
            // Here your application is laid out.  
            // For this introduction, we just print out "Hello, World!"  
            // in the top left corner.  
            TextOut(hdc,  
                5, 5,  
                greeting, _tcslen(greeting));  
            // End application specific layout section.  
  
            EndPaint(hWnd, &ps);  
            break;  
        case WM_DESTROY:  
            PostQuitMessage(0);  
            break;  
        default:  
            return DefWindowProc(hWnd, message, wParam, lParam);  
            break;  
        }  
  
        return 0;  
    }  
    ```  
  
##  <a name="example"></a> Example  
  
#### To build this example  
  
1.  Create a Win32-based project as shown in "To create a Win32-based project" earlier in this walkthrough.  
  
2.  Copy the code that follows these steps and then paste it in the GT_HelloWorldWin32.cpp source file.  
  
3.  On the **Build** menu, click **Build Solution**.  
  
4.  To run the application, press F5. A window that contains the text "Hello World!" should appear in the upper-left corner of the display.  
  
### Code  
  
```  
// GT_HelloWorldWin32.cpp  
// compile with: /D_UNICODE /DUNICODE /DWIN32 /D_WINDOWS /c  
  
#include <windows.h>  
#include <stdlib.h>  
#include <string.h>  
#include <tchar.h>  
  
// Global variables  
  
// The main window class name.  
static TCHAR szWindowClass[] = _T("win32app");  
  
// The string that appears in the application's title bar.  
static TCHAR szTitle[] = _T("Win32 Guided Tour Application");  
  
HINSTANCE hInst;  
  
// Forward declarations of functions included in this code module:  
LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);  
  
int CALLBACK WinMain(  
    _In_ HINSTANCE hInstance,  
    _In_ HINSTANCE hPrevInstance,  
    _In_ LPSTR     lpCmdLine,  
    _In_ int       nCmdShow  
)  
{  
    WNDCLASSEX wcex;  
  
    wcex.cbSize = sizeof(WNDCLASSEX);  
    wcex.style          = CS_HREDRAW | CS_VREDRAW;  
    wcex.lpfnWndProc    = WndProc;  
    wcex.cbClsExtra     = 0;  
    wcex.cbWndExtra     = 0;  
    wcex.hInstance      = hInstance;  
    wcex.hIcon          = LoadIcon(hInstance, MAKEINTRESOURCE(IDI_APPLICATION));  
    wcex.hCursor        = LoadCursor(NULL, IDC_ARROW);  
    wcex.hbrBackground  = (HBRUSH)(COLOR_WINDOW+1);  
    wcex.lpszMenuName   = NULL;  
    wcex.lpszClassName  = szWindowClass;  
    wcex.hIconSm        = LoadIcon(wcex.hInstance, MAKEINTRESOURCE(IDI_APPLICATION));  
  
    if (!RegisterClassEx(&wcex))  
    {  
        MessageBox(NULL,  
            _T("Call to RegisterClassEx failed!"),  
            _T("Win32 Guided Tour"),  
            NULL);  
  
        return 1;  
    }  
  
    hInst = hInstance; // Store instance handle in our global variable  
  
    // The parameters to CreateWindow explained:  
    // szWindowClass: the name of the application  
    // szTitle: the text that appears in the title bar  
    // WS_OVERLAPPEDWINDOW: the type of window to create  
    // CW_USEDEFAULT, CW_USEDEFAULT: initial position (x, y)  
    // 500, 100: initial size (width, length)  
    // NULL: the parent of this window  
    // NULL: this application does not have a menu bar  
    // hInstance: the first parameter from WinMain  
    // NULL: not used in this application  
    HWND hWnd = CreateWindow(  
        szWindowClass,  
        szTitle,  
        WS_OVERLAPPEDWINDOW,  
        CW_USEDEFAULT, CW_USEDEFAULT,  
        500, 100,  
        NULL,  
        NULL,  
        hInstance,  
        NULL  
    );  
  
    if (!hWnd)  
    {  
        MessageBox(NULL,  
            _T("Call to CreateWindow failed!"),  
            _T("Win32 Guided Tour"),  
            NULL);  
  
        return 1;  
    }  
  
    // The parameters to ShowWindow explained:  
    // hWnd: the value returned from CreateWindow  
    // nCmdShow: the fourth parameter from WinMain  
    ShowWindow(hWnd,  
        nCmdShow);  
    UpdateWindow(hWnd);  
  
    // Main message loop:  
    MSG msg;  
    while (GetMessage(&msg, NULL, 0, 0))  
    {  
        TranslateMessage(&msg);  
        DispatchMessage(&msg);  
    }  
  
    return (int) msg.wParam;  
}  
  
//  
//  FUNCTION: WndProc(HWND, UINT, WPARAM, LPARAM)  
//  
//  PURPOSE:  Processes messages for the main window.  
//  
//  WM_PAINT    - Paint the main window  
//  WM_DESTROY  - post a quit message and return  
//  
//  
LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)  
{  
    PAINTSTRUCT ps;  
    HDC hdc;  
    TCHAR greeting[] = _T("Hello, World!");  
  
    switch (message)  
    {  
    case WM_PAINT:  
        hdc = BeginPaint(hWnd, &ps);  
  
        // Here your application is laid out.  
        // For this introduction, we just print out "Hello, World!"  
        // in the top left corner.  
        TextOut(hdc,  
            5, 5,  
            greeting, _tcslen(greeting));  
        // End application-specific layout section.  
  
        EndPaint(hWnd, &ps);  
        break;  
    case WM_DESTROY:  
        PostQuitMessage(0);  
        break;  
    default:  
        return DefWindowProc(hWnd, message, wParam, lParam);  
        break;  
    }  
  
    return 0;  
}  
```  
  
## See Also  
 [Windows Desktop Applications](../windows/windows-desktop-applications-cpp.md)