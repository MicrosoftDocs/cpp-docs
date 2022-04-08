---
description: "Learn more about: Sample Multithread C Program"
title: "Sample Multithread C Program"
ms.date: 04/07/2022
---
# Sample Multithread C Program

Bounce.c is a sample multithread program that creates a new thread each time the letter `a` or `A` is typed. Each thread bounces a letter of a different color around the screen. Up to 32 threads can be created. The program's normal termination occurs when `q` or `Q` is typed.

## Compile and link a multithread program

Programs are compiled as multithreaded by default.

### To compile and link the multithread program Bounce.c from within the development environment

::: moniker range=">=msvc-160"

1. On the **File** menu, choose **New** > **Project**.

1. In the **Create a new project** dialog, select the **Console App** template that has **C++**, **Windows**, and **Console** tags. Choose **Next** to continue.

1. In the **Configure your new project** dialog, enter a name for your project, such as "Bounce". Choose **Create** to continue.

1. In the **Solution Explorer** window, open the **Source Files** folder under your project, and change the name of your source file to have a .c extension.

1. In the edit window, delete the existing source code and replace it with the sample code.

1. On the **Build** menu, choose **Build Solution**.

1. Press **F5** to start the program in the debugger.

::: moniker-end

::: moniker range="<=msvc-150"

1. On the **File** menu, choose **New** > **Project**.

1. In the **New Project** dialog, select **Visual C++** in the left pane, then select **Empty Project** in the center pane.

1. In the **Name** edit box, enter a name for your project, such as "Bounce". Choose **OK** to create the empty project.

1. In the **Solution Explorer** window, open the **Source Files** folder under your project, and add the file containing the C source code to the project.

1. On the **Build** menu, build the project by choosing the **Build Solution** command.

1. Press **F5** to start the program in the debugger.
1. Press **a** to create a new thread. Each thread bounces a character of a different color around the screen.
1. Press **q** to quit.

::: moniker-end

### To compile and link the multithread program Bounce.c from the command line

1. Open a Visual Studio tools command prompt. This ensures the path is set to include the compiler.
1. Compile and link the program:

    ```cmd
    cl bounce.c
    ```

## Example

To build on the command line, copy and save this sample in a source file with a .c extension. In the IDE, replace any source code created by the template with this sample:

```C
// sample_multithread_c_program.c
// compile with: /c
//
//  Bounce - Creates a new thread each time the letter 'a' is typed.
//  Each thread bounces a character of a different color around
//  the screen. All threads are terminated when the letter 'Q' is
//  entered.
//

#include <windows.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <conio.h>
#include <process.h>

#define MAX_THREADS  32

// The function getrandom returns a random number between
// min and max, which must be in integer range.
#define getrandom( min, max ) (SHORT)((rand() % (int)(((max) + 1) - \
                               (min))) + (min))

int main(void);                    // Thread 1: main
void KbdFunc(void);                // Keyboard input, thread dispatch
void BounceProc(void* pMyID);      // Threads 2 to n: display
void ClearScreen(void);            // Screen clear
void ShutDown(void);               // Program shutdown
void WriteTitle(int ThreadNum);    // Display title bar information

HANDLE  hConsoleOut;                 // Handle to the console
HANDLE  hRunMutex;                   // "Keep Running" mutex
HANDLE  hScreenMutex;                // "Screen update" mutex
int     ThreadNr = 0;                // Number of threads started
CONSOLE_SCREEN_BUFFER_INFO csbiInfo; // Console information
COORD   consoleSize;
BOOL    bTrails = FALSE;

HANDLE  hThreads[MAX_THREADS] = { NULL }; // Handles for created threads

int main(void) // Thread One
{
    // Get display screen information & clear the screen.
    hConsoleOut = GetStdHandle(STD_OUTPUT_HANDLE);
    GetConsoleScreenBufferInfo(hConsoleOut, &csbiInfo);
    consoleSize.X = csbiInfo.srWindow.Right;
    consoleSize.Y = csbiInfo.srWindow.Bottom;
    ClearScreen();
    WriteTitle(0);

    // Create the mutexes and reset thread count.
    hScreenMutex = CreateMutexW(NULL, FALSE, NULL);  // Cleared
    hRunMutex = CreateMutexW(NULL, TRUE, NULL);      // Set

    // Start waiting for keyboard input to dispatch threads or exit.
    KbdFunc();

    // All threads done. Clean up handles.
    if (hScreenMutex) CloseHandle(hScreenMutex);
    if (hRunMutex) CloseHandle(hRunMutex);
    if (hConsoleOut) CloseHandle(hConsoleOut);
}

void ShutDown(void) // Shut down threads
{
    // Tell all threads to die
    ReleaseMutex(hRunMutex);

    while (ThreadNr > 0)
    {
        // Wait for each thread to complete
        WaitForSingleObject(hThreads[--ThreadNr], INFINITE);
    }

    // Clean up display when done
    WaitForSingleObject(hScreenMutex, INFINITE);
    ClearScreen();
}

void KbdFunc(void) // Dispatch and count threads.
{
    int         KeyInfo;

    do
    {
        KeyInfo = _getch();
        if (tolower(KeyInfo) == 'a' &&
            ThreadNr < MAX_THREADS)
        {
            ++ThreadNr;
            hThreads[ThreadNr] = 
                (HANDLE)_beginthread(BounceProc, 0, (void*)(uintptr_t)ThreadNr);
            WriteTitle(ThreadNr);
        }

        if (tolower(KeyInfo) == 't')
        {
            bTrails = !bTrails;
        }
    } while (tolower(KeyInfo) != 'q');

    ShutDown();
}

void BounceProc(void* pMyID)
{
    wchar_t MyCell, OldCell;
    WORD    MyAttrib, OldAttrib = 0;
    wchar_t BlankCell = 0x20;
    COORD   Coords, Delta;
    COORD   Old = { 0,0 };
    DWORD   Dummy;
    int MyID = (int)(uintptr_t)pMyID;

    // Generate update increments and initial
    // display coordinates.
    srand(MyID * 3);

    Coords.X = getrandom(0, consoleSize.X - 1);
    Coords.Y = getrandom(0, consoleSize.Y - 1);
    Delta.X = getrandom(-3, 3);
    Delta.Y = getrandom(-3, 3);

    // Set up character & generate color
    // attribute from thread number.
    if (MyID > 16)
        MyCell = (wchar_t)(0x60 + MyID - 16); // lower case
    else
        MyCell = (wchar_t)(0x40 + MyID);      // upper case
    MyAttrib = MyID & 0x0f;   // force black background

    do
    {
        // Wait for display to be available, then lock it.
        WaitForSingleObject(hScreenMutex, INFINITE);

        if (!bTrails)
        {
            // If we still occupy the old screen position, blank it out.
            ReadConsoleOutputCharacterW(hConsoleOut, &OldCell, 1,
                Old, &Dummy);
            ReadConsoleOutputAttribute(hConsoleOut, &OldAttrib, 1,
                Old, &Dummy);
            if ((OldCell == MyCell) && (OldAttrib == MyAttrib))
                WriteConsoleOutputCharacterW(hConsoleOut, &BlankCell, 1,
                    Old, &Dummy);
        }

        // Draw new character, then clear screen lock
        WriteConsoleOutputCharacterW(hConsoleOut, &MyCell, 1,
            Coords, &Dummy);
        WriteConsoleOutputAttribute(hConsoleOut, &MyAttrib, 1,
            Coords, &Dummy);
        ReleaseMutex(hScreenMutex);

        // Increment the coordinates for next placement of the block.
        Old.X = Coords.X;
        Old.Y = Coords.Y;
        Coords.X += Delta.X;
        Coords.Y += Delta.Y;

        // If we are about to go off the screen, reverse direction
        if (Coords.X < 0 || Coords.X >= consoleSize.X)
        {
            Delta.X = -Delta.X;
            Beep(400, 50);
        }
        if (Coords.Y < 0 || Coords.Y > consoleSize.Y)
        {
            Delta.Y = -Delta.Y;
            Beep(600, 50);
        }
    }
    // Repeat while RunMutex is still taken.
    while (WaitForSingleObject(hRunMutex, 75L) == WAIT_TIMEOUT);
}

void WriteTitle(int ThreadNum)
{
    enum
    {
        sizeOfNThreadMsg = 120
    };
    wchar_t    NThreadMsg[sizeOfNThreadMsg] = { L"" };

    swprintf_s(NThreadMsg, sizeOfNThreadMsg,
        L"Threads running: %02d.  Press 'A' "
        L"to start a thread, 'T' to toggle "
        L"trails, 'Q' to quit.", ThreadNum);
    SetConsoleTitleW(NThreadMsg);
}

void ClearScreen(void)
{
    DWORD    dummy = 0;
    COORD    Home = { 0, 0 };
    FillConsoleOutputCharacterW(hConsoleOut, L' ',
        consoleSize.X * consoleSize.Y,
        Home, &dummy);
}
```

## See also

[Multithreading with C and Win32](multithreading-with-c-and-win32.md)
