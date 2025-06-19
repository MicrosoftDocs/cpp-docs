---
title: "Create a Traditional Windows Desktop Application (C++)"
description: "Learn how to create a minimal, traditional Windows desktop application using Visual Studio, C++, and the Win32 API."
ms.custom: "get-started-article"
ms.topic: tutorial
ms.date: 03/17/2025
helpviewer_keywords: ["Windows applications [C++], Win32", "Windows Desktop applications [C++]", "Windows API [C++]"]
---
# Walkthrough: Create a traditional Windows desktop application (C++)

This walkthrough explains how to create a traditional Windows desktop application in Visual Studio. The application you create uses the Windows API to display *Hello, Windows desktop!* in a window. You can use the code that you develop in this walkthrough as a pattern to create Windows desktop applications.

The Windows API (also known as the Win32 API, Windows Desktop API, and Windows Classic API) is a C-language-based framework for creating Windows applications. It has been used to create Windows applications for decades. More advanced and easier-to-program frameworks have been built on top of the Windows API, for example, the MFC, ATL, and .NET frameworks. Even the most modern Windows Runtime code for UWP and Store apps written in C++/WinRT uses the Windows API underneath. For more information about the Windows API, see [Windows API Index](/windows/win32/apiindex/windows-api-list).

> [!IMPORTANT]
> The [Build the code](#build-the-code) section at the end of this article shows the complete code. This walkthrough covers the various pieces of code that go into a Windows app, but some details are omitted in the code snippets to focus on the most important parts. You can copy the complete code and paste it into your project at the end.

## Prerequisites

- Microsoft Windows 7 or later versions. We recommend Windows 11 or later for the best development experience.

- Visual Studio. For information on how to download and install Visual Studio, see [Install Visual Studio](/visualstudio/install/install-visual-studio). When you run the installer, make sure that the **Desktop development with C++** workload is checked. Don't worry if you didn't install this workload when you installed Visual Studio. You can run the installer again and install it now.

   :::image type="content" source="../build/media/desktop-development-with-cpp.png" alt-text="Screenshot of the Desktop development with C plus plus workload in the Visual Studio Installer.":::

- A basic understanding of how to use the Visual Studio IDE. If you've used Windows desktop apps before, you can probably keep up. For an introduction, see [Visual Studio IDE feature tour](/visualstudio/ide/visual-studio-ide).

- Some familiarity with the C++ language. Don't worry, we don't do anything too complicated.

## Create a Windows desktop project

Follow these steps to create your first Windows desktop project. As noted at the beginning of this article, the completed code is available in the [Build the code](#build-the-code) section at the end of the walkthrough. Go ahead and follow the steps to create the project, but hold off pasting the following sections of code until the end, when the complete application code is presented. Some details are omitted in the code snippets to focus on the most important parts. You can copy the complete code and paste it into your project at the end.

To see the steps for your preferred version of Visual Studio, use the **Version** selector located at the top of the table of contents on this page.

::: moniker range=">=msvc-160"

### To create a Windows desktop project in Visual Studio

1. From the main menu, choose **File** > **New** > **Project** to open the **Create a New Project** dialog box.

1. At the top of the dialog, set **Language** to **C++**, set **Platform** to **Windows**, and set **Project type** to **Desktop**.

1. From the filtered list of project types, choose **Windows Desktop Wizard** then choose **Next**. In the next page, enter a name for the project, for example, *DesktopApp*.

1. Choose the **Create** button to create the project.

1. The **Windows Desktop Project** dialog now appears. In the **Application type** dropdown, make sure you select **Desktop application (.exe)**. Since we're making a Windows application, choosing Console Application results in a project that won't build given the code we're going to use. Then, under **Additional options**, select **Empty project**. Choose **OK** to create the project.

1. In **Solution Explorer**, right-click the **DesktopApp** project, choose **Add**, and then choose **New Item**.

    :::image type="complex" source="../build/media/desktop-app-project-add-new-item-153.gif" alt-text="Animation showing adding a new item to DesktopApp Project in Visual Studio 2019.":::
    The animation shows right-clicking on the project name in Solution Explorer, choosing Add in the menu that appears, and then choosing New Item.
    :::image-end:::

1. In the **Add New Item** dialog box, select **C++ File (.cpp)**. In the **Name** box, type a name for the file, for example, *`HelloWindowsDesktop.cpp`*. Choose **Add**.

   :::image type="content" source="../build/media/desktop-app-add-cpp-file-153.png" alt-text="Screenshot of the Add New Item dialog box in Visual Studio 2019. The C plus plus File (.cpp) option is selected. The name field is set to Hello Windows Desktop.cpp.":::

Your project is now created and your source file is opened in the editor.

::: moniker-end

::: moniker range="msvc-150"

### To create a Windows desktop project in Visual Studio 2017

1. On the **File** menu, choose **New** and then choose **Project**.

1. In the **New Project** dialog box, in the left pane, expand **Installed** > **Visual C++**, then select **Windows Desktop**. In the middle pane, select **Windows Desktop Wizard**.

   In the **Name** box, type a name for the project, for example, *DesktopApp*. Choose **OK**.

   :::image type="content" source="../build/media/desktop-app-new-project-name-153.png" alt-text="Screenshot of the New Project dialog box in Visual Studio 2017. The item Windows Desktop Wizard is selected. The name textbox says DesktopApp.":::

1. In the **Windows Desktop Project** dialog, under **Application type**, select **Windows application (.exe)**. Under **Additional options**, select **Empty project**. Make sure **Precompiled Header** isn't selected. Choose **OK** to create the project.

1. In **Solution Explorer**, right-click the **DesktopApp** project, choose **Add**, and then choose **New Item**.

   :::image type="complex" source="../build/media/desktop-app-project-add-new-item-153.gif" alt-text="An animation showing adding a new item to DesktopApp Project in Visual Studio 2017.":::
   The animation shows right-clicking on the project name in Solution Explorer, choosing Add in the menu that appeared, and then choosing New Item.
   :::image-end:::
 
1. In the **Add New Item** dialog box, select **C++ File (.cpp)**. In the **Name** box, type a name for the file, for example, *`HelloWindowsDesktop.cpp`*. Choose **Add**.

   :::image type="content" source="../build/media/desktop-app-add-cpp-file-153.png" alt-text="Screenshot of the Add New Item dialog box in Visual Studio 2017. Visual C plus plus is selected on the left and the C plus plus File option is highlighted.":::

Your project is now created and your source file is opened in the editor.

::: moniker-end

::: moniker range="msvc-140"

### To create a Windows desktop project in Visual Studio 2015

1. On the **File** menu, choose **New** and then choose **Project**.

1. In the **New Project** dialog box, in the left pane, expand **Installed** > **Templates** > **Visual C++**, and then select **Win32**. In the middle pane, select **Win32 Project**.

   In the **Name** box, type a name for the project, for example, *DesktopApp*. Choose **OK**.

   :::image type="content" source="../build/media/desktop-app-new-project-name-150.png" alt-text="Screenshot of the New Project dialog box in Visual Studio 2015 with the Win32 Project option highlighted, and DesktopApp typed in the Name text box.":::

1. On the **Overview** page of the **Win32 Application Wizard**, choose **Next**.

   :::image type="content" source="../build/media/desktop-app-win32-wizard-overview-150.png" alt-text="Screenshot of the dialog box in Visual Studio 2015 that shows the Win32 Application Wizard Overview page.":::

1. On the **Application Settings** page, under **Application type**, select **Windows application**. Under **Additional options**, uncheck **Precompiled header**, then select **Empty project**. Choose **Finish** to create the project.

1. In **Solution Explorer**, right-click the DesktopApp project, choose **Add**, and then choose **New Item**.

    :::image type="complex" source="../build/media/desktop-app-project-add-new-item-150.gif" alt-text="Animation showing adding a new item to DesktopApp Project in Visual Studio 2015.":::
    The animation shows right-clicking on the project name in Solution Explorer, choosing Add in the menu that appears, and then choosing New Item.
    :::image-end:::

1. In the **Add New Item** dialog box, select **C++ File (.cpp)**. In the **Name** box, type a name for the file, for example, *`HelloWindowsDesktop.cpp`*. Choose **Add**.

   :::image type="content" source="../build/media/desktop-app-add-cpp-file-150.png" alt-text="Screenshot of the Add New Item dialog box in Visual Studio 2015 with Visual C plus plus selected and the C plus plus File option highlighted.":::

Your project is now created and your source file is opened in the editor.

::: moniker-end

## The code

Next, learn how to create the code for a Windows desktop application in Visual Studio.

### Where code starts running in a Windows desktop application

1. Just as every C application and C++ application must have a `main` function as its starting point, every Windows desktop application must have a `WinMain` function. `WinMain` has the following syntax.

   ```cpp
   int WINAPI WinMain(
      _In_ HINSTANCE hInstance,
      _In_opt_ HINSTANCE hPrevInstance,
      _In_ LPSTR     lpCmdLine,
      _In_ int       nCmdShow
   );
   ```

   For information about the parameters and return value of this function, see [WinMain entry point](/windows/win32/api/winbase/nf-winbase-winmain).

   > [!NOTE]
   > What are all those extra words, such as `WINAPI`, or `CALLBACK`, or `HINSTANCE`, or `_In_`? The traditional Windows API uses typedefs and preprocessor macros extensively to abstract away some of the details of types and platform-specific code, such as calling conventions, **`__declspec`** declarations, and compiler pragmas. In Visual Studio, you can use the IntelliSense [Quick Info](/visualstudio/ide/using-intellisense#quick-info) feature to see what these typedefs and macros define. Hover your mouse over the word of interest, or select it and press **Ctrl**+**K**, **Ctrl**+**I** for a small pop-up window that contains the definition. For more information, see [Using IntelliSense](/visualstudio/ide/using-intellisense). Parameters and return types often use *SAL Annotations* to help you catch programming errors. For more information, see [Using SAL Annotations to Reduce C/C++ Code Defects](../code-quality/using-sal-annotations-to-reduce-c-cpp-code-defects.md).

1. Windows desktop programs require `<windows.h>`. You also frequently see `#include <tchar.h>`. That's to make it easier to write an app that can work with either **`char`** or **`wchar_t`**. The way it works is that you instead use the `TCHAR` macro in your code, which resolves ultimately to **`wchar_t`** if the `UNICODE` symbol is defined in your project, otherwise it resolves to **`char`**. If you always build with UNICODE enabled, you don't need `TCHAR` and can just use **`wchar_t`** directly. For more information, see [Using generic-text mappings](../c-runtime-library/using-generic-text-mappings.md). The following code shows these two `#include` statements at the top of the file.

   ```cpp
   #include <windows.h>
   #include <tchar.h>
   ```

1. Along with the `WinMain` function, every Windows desktop application must also have a window-procedure function. This function is called a `WndProc`, but you can give it whatever name you like in your code. `WndProc` has the following syntax.

   ```cpp
   LRESULT CALLBACK WndProc(
      _In_ HWND   hWnd,
      _In_ UINT   message,
      _In_ WPARAM wParam,
      _In_ LPARAM lParam
   );
   ```

   In this function, you write code to handle *messages* that the application receives from Windows when *events* occur. For example, if a user chooses an OK button in your application, Windows sends a message to you. You write code inside a `WndProc` function that does whatever work is appropriate. It's called *handling* an event. You only handle the events that are relevant for your application.

   For more information, see [Window Procedures](/windows/win32/winmsg/window-procedures).

### Add functionality to the `WinMain` function

1. In the `WinMain` function, you need to capture some basic information about your main window. You do that by filling out a structure of type [`WNDCLASSEX`](/windows/win32/api/winuser/ns-winuser-wndclassexw). The structure contains information about the window, such as the application icon, the background color of the window, the name to display in the title bar, among other things. Importantly, it contains a function pointer to your window procedure that handles the messages that Windows sends to your app. The following example shows a typical `WNDCLASSEX` structure:

   ```cpp
   WNDCLASSEX wcex;

   wcex.cbSize         = sizeof(WNDCLASSEX);
   wcex.style          = CS_HREDRAW | CS_VREDRAW;
   wcex.lpfnWndProc    = WndProc;
   wcex.cbClsExtra     = 0;
   wcex.cbWndExtra     = 0;
   wcex.hInstance      = hInstance;
   wcex.hIcon          = LoadIcon(wcex.hInstance, IDI_APPLICATION);
   wcex.hCursor        = LoadCursor(NULL, IDC_ARROW);
   wcex.hbrBackground  = (HBRUSH)(COLOR_WINDOW+1);
   wcex.lpszMenuName   = NULL;
   wcex.lpszClassName  = szWindowClass;
   wcex.hIconSm        = LoadIcon(wcex.hInstance, IDI_APPLICATION);
   ```

   For information about the fields of this structure, see [`WNDCLASSEX`](/windows/win32/api/winuser/ns-winuser-wndclassexw).

1. Once you have the `WNDCLASSEX` structure filled out, you register it with Windows so that it knows about your window and how to send messages to it. Use the [`RegisterClassEx`](/windows/win32/api/winuser/nf-winuser-registerclassexw) function and pass the window class structure as an argument. The `_T` macro is used because we use the `TCHAR` type per the preceding discussion about Unicode. The following code shows how to register the window class.

   ```cpp
   if (!RegisterClassEx(&wcex))
   {
      MessageBox(NULL,
         _T("Call to RegisterClassEx failed!"),
         _T("Windows Desktop Guided Tour"),
         NULL);

      return 1;
   }
   ```

1. Create a window using the [`CreateWindowEx`](/windows/win32/api/winuser/nf-winuser-createwindowexw) function.

   ```cpp
   static TCHAR szWindowClass[] = _T("DesktopApp");
   static TCHAR szTitle[] = _T("Windows Desktop Guided Tour Application");

   // The parameters to CreateWindowEx explained:
   // WS_EX_OVERLAPPEDWINDOW : An optional extended window style.
   // szWindowClass: the name of the application
   // szTitle: the text that appears in the title bar
   // WS_OVERLAPPEDWINDOW: the type of window to create
   // CW_USEDEFAULT, CW_USEDEFAULT: initial position (x, y)
   // 500, 100: initial size (width, length)
   // NULL: the parent of this window
   // NULL: this application does not have a menu bar
   // hInstance: the first parameter from WinMain
   // NULL: not used in this application
   HWND hWnd = CreateWindowEx(
   WS_EX_OVERLAPPEDWINDOW,
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
         _T("Call to CreateWindowEx failed!"),
         _T("Windows Desktop Guided Tour"),
         NULL);

      return 1;
   }
   ```

   This function returns an `HWND`, which is a handle to a window. A handle is somewhat like a pointer. Windows uses it to keep track of the windows you create. For more information, see [Windows Data Types](/windows/win32/WinProg/windows-data-types).

1. At this point, the window has been created, but we still need to tell Windows to make it visible. That's what this code does:

   ```cpp
   // The parameters to ShowWindow explained:
   // hWnd: the value returned from CreateWindow
   // nCmdShow: the fourth parameter from WinMain
   ShowWindow(hWnd,
      nCmdShow);
   UpdateWindow(hWnd);
   ```

   The displayed window is just a blank rectangle because you haven't yet implemented the `WndProc` function. The application isn't yet handling the messages that Windows is now sending to it.

1. To handle the messages, we first add what's called a *message loop* to listen for the messages that Windows sends. When the application receives a message, this loop dispatches it to your `WndProc` function to be handled. The message loop resembles the following code:

   ```cpp
   MSG msg;
   while (GetMessage(&msg, NULL, 0, 0))
   {
      TranslateMessage(&msg);
      DispatchMessage(&msg);
   }

   return (int) msg.wParam;
   ```

   For more information about the structures and functions in the message loop, see [`MSG`](/windows/win32/api/winuser/ns-winuser-msg), [`GetMessage`](/windows/win32/api/winuser/nf-winuser-getmessage), [TranslateMessage](/windows/win32/api/winuser/nf-winuser-translatemessage), and [`DispatchMessage`](/windows/win32/api/winuser/nf-winuser-dispatchmessage).

   A basic `WinMain` function that creates the application's main window, and listens for messages that Windows sends your app, would resemble the following code:

   ```cpp
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
      wcex.hIcon          = LoadIcon(wcex.hInstance, IDI_APPLICATION);
      wcex.hCursor        = LoadCursor(NULL, IDC_ARROW);
      wcex.hbrBackground  = (HBRUSH)(COLOR_WINDOW+1);
      wcex.lpszMenuName   = NULL;
      wcex.lpszClassName  = szWindowClass;
      wcex.hIconSm        = LoadIcon(wcex.hInstance, IDI_APPLICATION);

      if (!RegisterClassEx(&wcex))
      {
         MessageBox(NULL,
            _T("Call to RegisterClassEx failed!"),
            _T("Windows Desktop Guided Tour"),
            NULL);

         return 1;
      }

      // Store instance handle in our global variable
      hInst = hInstance;

      // The parameters to CreateWindowEx explained:
      // WS_EX_OVERLAPPEDWINDOW : An optional extended window style.
      // szWindowClass: the name of the application
      // szTitle: the text that appears in the title bar
      // WS_OVERLAPPEDWINDOW: the type of window to create
      // CW_USEDEFAULT, CW_USEDEFAULT: initial position (x, y)
      // 500, 100: initial size (width, length)
      // NULL: the parent of this window
      // NULL: this application dows not have a menu bar
      // hInstance: the first parameter from WinMain
      // NULL: not used in this application
      HWND hWnd = CreateWindowEx(
         WS_EX_OVERLAPPEDWINDOW,
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
            _T("Windows Desktop Guided Tour"),
            NULL);

         return 1;
      }

      // The parameters to ShowWindow explained:
      // hWnd: the value returned from CreateWindow
      // nCmdShow: the fourth parameter from WinMain
      ShowWindow(hWnd, nCmdShow);
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

### Handle messages in the `WndProc` function

1. To handle messages that the application receives, you implement a `switch` statement in your `WndProc` function.

   An important message to handle is [`WM_PAINT`](/windows/win32/gdi/wm-paint). The application receives a `WM_PAINT` message when part of its displayed window must be updated. The event can occur when a user moves a window in front of your window and moves it away again. It receives this message the first time your window is displayed, giving you a chance to display your application UI. Your application finds out about these events when Windows sends them. When the window is first displayed, all of it must be updated.

   To handle a `WM_PAINT` message, first call [`BeginPaint`](/windows/win32/api/winuser/nf-winuser-beginpaint), then handle all the logic to lay out the text, buttons, and other controls in the window. Then call [`EndPaint`](/windows/win32/api/winuser/nf-winuser-endpaint). For this application, the code between `BeginPaint()` and `EndPaint()` displays `Hello, Windows desktop!` in the window you created in `WinMain()`. In the following code, the [`TextOut`](/windows/win32/api/wingdi/nf-wingdi-textoutw) function displays the text at the specified location in the window.

   ```cpp
   PAINTSTRUCT ps;
   HDC hdc;
   TCHAR greeting[] = _T("Hello, Windows desktop!");

   switch (message)
   {
   case WM_PAINT:
      hdc = BeginPaint(hWnd, &ps);

      // Here your application is laid out.
      // For this introduction, we just print out "Hello, Windows desktop!"
      // in the top left corner.
      TextOut(hdc,
         5, 5,
         greeting, _tcslen(greeting));
      // End application-specific layout section.

      EndPaint(hWnd, &ps);
      break;
   }
   ```

   In the preceding code, `HDC` is a handle to a device context which is associated with the window's client area. You use it when drawing in the window to refer to its client area. Use the `BeginPaint` and `EndPaint` functions to prepare for and complete the drawing in the client area. `BeginPaint` returns a handle to the display device context used for drawing in the client area; `EndPaint` ends the paint request and releases the device context.

1. An application typically handles many other messages. For example, [`WM_CREATE`](/windows/win32/winmsg/wm-create) is sent when a window is first created, and [`WM_DESTROY`](/windows/win32/winmsg/wm-destroy) when the window is closed. The following code shows a basic but complete `WndProc` function:

   ```cpp
   LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
   {
      PAINTSTRUCT ps;
      HDC hdc;
      TCHAR greeting[] = _T("Hello, Windows desktop!");

      switch (message)
      {
      case WM_PAINT:
         hdc = BeginPaint(hWnd, &ps);

         // Here your application is laid out.
         // For this introduction, we just print out "Hello, Windows desktop!"
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

## Build the code

As promised, the complete code for the working application follows.

### To build this example

1. Delete all the code in *`HelloWindowsDesktop.cpp`* in the editor. Copy this example code and paste it into *`HelloWindowsDesktop.cpp`*:

   ```cpp
   // HelloWindowsDesktop.cpp
   // compile with: /D_UNICODE /DUNICODE /DWIN32 /D_WINDOWS /c

   #include <windows.h>
   #include <stdlib.h>
   #include <string.h>
   #include <tchar.h>

   // Global variables

   // The main window class name.
   static TCHAR szWindowClass[] = _T("DesktopApp");

   // The string that appears in the application's title bar.
   static TCHAR szTitle[] = _T("Windows Desktop Guided Tour Application");

   // Stored instance handle for use in Win32 API calls such as FindResource
   HINSTANCE hInst;

   // Forward declarations of functions included in this code module:
   LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);

   int WINAPI WinMain(
      _In_ HINSTANCE hInstance,
      _In_opt_ HINSTANCE hPrevInstance,
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
      wcex.hIcon          = LoadIcon(wcex.hInstance, IDI_APPLICATION);
      wcex.hCursor        = LoadCursor(NULL, IDC_ARROW);
      wcex.hbrBackground  = (HBRUSH)(COLOR_WINDOW+1);
      wcex.lpszMenuName   = NULL;
      wcex.lpszClassName  = szWindowClass;
      wcex.hIconSm        = LoadIcon(wcex.hInstance, IDI_APPLICATION);

      if (!RegisterClassEx(&wcex))
      {
         MessageBox(NULL,
            _T("Call to RegisterClassEx failed!"),
            _T("Windows Desktop Guided Tour"),
            NULL);

         return 1;
      }

      // Store instance handle in our global variable
      hInst = hInstance;

      // The parameters to CreateWindowEx explained:
      // WS_EX_OVERLAPPEDWINDOW : An optional extended window style.
      // szWindowClass: the name of the application
      // szTitle: the text that appears in the title bar
      // WS_OVERLAPPEDWINDOW: the type of window to create
      // CW_USEDEFAULT, CW_USEDEFAULT: initial position (x, y)
      // 500, 100: initial size (width, length)
      // NULL: the parent of this window
      // NULL: this application does not have a menu bar
      // hInstance: the first parameter from WinMain
      // NULL: not used in this application
      HWND hWnd = CreateWindowEx(
         WS_EX_OVERLAPPEDWINDOW,
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
            _T("Windows Desktop Guided Tour"),
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

   //  FUNCTION: WndProc(HWND, UINT, WPARAM, LPARAM)
   //
   //  PURPOSE:  Processes messages for the main window.
   //
   //  WM_PAINT    - Paint the main window
   //  WM_DESTROY  - post a quit message and return
   LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
   {
      PAINTSTRUCT ps;
      HDC hdc;
      TCHAR greeting[] = _T("Hello, Windows desktop!");

      switch (message)
      {
      case WM_PAINT:
         hdc = BeginPaint(hWnd, &ps);

         // Here your application is laid out.
         // For this introduction, we just print out "Hello, Windows desktop!"
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

1. On the **Build** menu, choose **Build Solution**. The results of the compilation appear in the **Output** window in Visual Studio.

    :::image type="complex" source="../build/media/desktop-app-project-build-150.gif" alt-text="Animation showing the steps to build the DesktopApp Project.":::
    The animation shows clicking the save all button, then choosing Build > Build Solution from the main menu.
    :::image-end:::

1. To run the application, press **F5**. A window with the text `Hello, Windows desktop!` should appear.

    :::image type="content" source="../build/media/desktop-app-project-run-157.png" alt-text="Screenshot of a window with the title Windows Desktop Guided Tour Application. The contents of the window are Hello, Windows desktop!.":::

Congratulations! You've built a traditional Windows desktop application.

## See also

- [Windows C++ desktop application types](overview-of-windows-programming-in-cpp.md)
