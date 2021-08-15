---
description: "Learn more about: Walkthrough: Working with Projects and Solutions (C++)"
title: "Walkthrough: Working with Projects and Solutions (C++)"
ms.date: "05/14/2019"
helpviewer_keywords: ["solutions [C++]", "projects [C++], about projects", "projects [C++]", "solutions [C++], about solutions"]
ms.assetid: 93a3f290-e294-46e3-876e-e3084d9ae833
---
# Walkthrough: Working with Projects and Solutions (C++)

Here's how to create a C++ project in Visual Studio, add code, and then build and run the project. The project in this walkthrough is a program that tracks how many players are playing different card games.

In Visual Studio, work is organized in projects and solutions. A solution can have more than one project—for example, a DLL and an executable that references that DLL. For more information, see [Solutions and Projects](/visualstudio/ide/solutions-and-projects-in-visual-studio).

## Before you start

To complete this walkthrough, you need Visual Studio 2017 or later. If you need a copy, here's a short guide: [Install C++ support in Visual Studio](../build/vscpp-step-0-installation.md). If you haven't done it yet, follow the next steps after installation through the "Hello, World" tutorial to make sure the C++ components are installed correctly and it all works.

It helps if you understand the fundamentals of the C++ language, and know what a compiler, linker, and debugger are used for. The tutorial also assumes that you're familiar with Windows and how to use menus, dialogs,

## Create a project

To create a project, first choose a project-type template. For each project type, Visual Studio sets compiler settings and—depending on the type—generates starter code that you can modify later. The following steps vary depending on which version of Visual Studio you are using. To see the documentation for your preferred version of Visual Studio, use the **Version** selector control. It's found at the top of the table of contents on this page.

::: moniker range="msvc-160"

### To create a project in Visual Studio 2019

1. From the main menu, choose **File** > **New** > **Project** to open the **Create a New Project** dialog box.

1. At the top of the dialog, set  **Language** to **C++**, set **Platform** to **Windows**, and set **Project type** to **Console**.

1. From the filtered list of project types, choose **Console App** then choose **Next**. In the next page, enter *Game* as the name for the project.

   You can accept the default location in the **Location** drop-down list, enter a different location, or choose the **Browse** button to browse to a directory where you want to save the project.

   When you create a project, Visual Studio puts the project in a solution. By default, the solution has the same name as the project. You can change the name in the **Solution name** box, but for this example, keep the default name.

1. Choose the **Create** button to create the project.

   Visual Studio creates your new solution and project files, and opens the editor for the Game.cpp source code file it generated.

::: moniker-end

::: moniker range="msvc-150"

### To create a project in Visual Studio 2017

1. On the menu bar, choose **File** > **New** > **Project**.

1. In the left pane of the **New Project** dialog box, expand **Installed** and select **Visual C++**, if it isn't open already.

1. In the list of installed templates in the center pane, select **Windows Console Application**.

1. Enter a name for the project in the **Name** box. For this example, enter *Game*.

   You can accept the default location in the **Location** drop-down list, enter a different location, or choose the **Browse** button to browse to a directory where you want to save the project.

   When you create a project, Visual Studio puts the project in a solution. By default, the solution has the same name as the project. You can change the name in the **Solution name** box, but for this example, keep the default name.

1. Choose the **OK** button to create the project.

   Visual Studio creates your new solution and project files, and opens the editor for the Game.cpp source code file it generated.

::: moniker-end

::: moniker range="msvc-140"

### To create a project in Visual Studio 2015

1. On the menu bar, choose **File** > **New** > **Project**.

1. In the left pane of the **New Project** dialog box, expand **Installed** and select **Visual C++**, if it isn't open already.

1. In the list of installed templates in the center pane, select **Win32 Console Application**.

1. Enter a name for the project in the **Name** box. For this example, enter *Game*.

   You can accept the default location in the **Location** drop-down list, enter a different location, or choose the **Browse** button to browse to a directory where you want to save the project.

   When you create a project, Visual Studio puts the project in a solution. By default, the solution has the same name as the project. You can change the name in the **Solution name** box, but for this example, keep the default name.

1. Choose the **OK** button to create the project.

   Visual Studio creates your new solution and project files, and opens the editor for the Game.cpp source code file it generated.

::: moniker-end

## Organize projects and files

You can use **Solution Explorer** to organize and manage the projects, files, and other resources in your solution.

This part of the walkthrough shows how to add a class to the project. When you add the class, Visual Studio adds the corresponding .h and .cpp files. You can see the results in **Solution Explorer**.

### To add a class to a project

1. If the **Solution Explorer** window isn't displayed in Visual Studio, on the menu bar, choose **View** > **Solution Explorer**.

1. In **Solution Explorer**, select the **Game** project. On the menu bar, choose **Project** > **Add Class**.

1. In the **Add Class** dialog, enter *Cardgame* in the **Class Name** box. Don't modify the default file names and settings. Choose the **OK** button.

   Visual Studio creates new files and adds them to your project. You can see them in the **Solution Explorer** window. The Cardgame.h and Cardgame.cpp files are opened in the editor.

1. Edit the Cardgame.h file, and make these changes:

   - Add two private data members after the opening brace of the class definition.
     <!--      [!code-cpp[NVC_Walkthrough_Working_With_Projects#100](../ide/codesnippet/CPP/walkthrough-working-with-projects-and-solutions-cpp_1.h)] -->

      ```cpp
      int players;
      static int totalParticipants;
      ```

   - Modify the default constructor that Visual Studio generated. After the `public:` access specifier, find the line that looks like:

      `Cardgame();`

      Modify the constructor to take one parameter of type **`int`**, named *players*.

      <!--[!code-cpp[NVC_Walkthrough_Working_With_Projects#101](../ide/codesnippet/CPP/walkthrough-working-with-projects-and-solutions-cpp_2.h)]-->
      `Cardgame(int players);`

   - After the default destructor, add an inline declaration for a `static int` member function named *GetParticipants* that takes no parameters and returns the `totalParticipants` value.

      <!--[!code-cpp[NVC_Walkthrough_Working_With_Projects#102](../ide/codesnippet/CPP/walkthrough-working-with-projects-and-solutions-cpp_3.h)]-->
      `static int GetParticipants() { return totalParticipants; }`

   The Cardgame.h file should resemble the code below after you change it:

   <!--[!code-cpp[NVC_Walkthrough_Working_With_Projects#103](../ide/codesnippet/CPP/walkthrough-working-with-projects-and-solutions-cpp_4.h)]-->

    ```cpp
    #pragma once
    class Cardgame
    {
        int players;
        static int totalParticipants;
    public:
        Cardgame(int players);
        ~Cardgame();
        static int GetParticipants() { return totalParticipants; }
    };
    ```

   The line `#pragma once` tells the compiler to include the header file only one time. For more information, see [once](../preprocessor/once.md). For information about other C++ keywords in the header file above, see [class](../cpp/class-cpp.md), [int](../cpp/fundamental-types-cpp.md), [static](../cpp/storage-classes-cpp.md), and [public](../cpp/public-cpp.md).

1. Choose the **Cardgame.cpp** tab at the top of the editing pane to open it for editing.

1. Delete everything in the file and replace it with the code:

   <!--[!code-cpp[NVC_Walkthrough_Working_With_Projects#111](../ide/codesnippet/CPP/walkthrough-working-with-projects-and-solutions-cpp_5.cpp)]-->

    ```cpp
    #include "pch.h" // remove this line in Visual Studio 2019
    #include "Cardgame.h"
    #include <iostream>

    using namespace std;

    int Cardgame::totalParticipants = 0;

    Cardgame::Cardgame(int players)
        : players(players)
    {
        totalParticipants += players;
        cout << players << " players have started a new game.  There are now "
             << totalParticipants << " players in total." << endl;
    }

    Cardgame::~Cardgame()
    {
    }
    ```

   > [!NOTE]
   > You can use auto-completion when you are entering code. For example, if you enter this code at the keyboard, you can enter *pl* or *tot* and then press **Ctrl**+**Spacebar**. Auto-completion enters `players` or `totalParticipants` for you.

## Add test code to your main function

Add some code to your app that tests the new functions.

### To add test code to the project

1. In the **Game.cpp** editor window, replace the existing code with:

   <!--[!code-cpp[NVC_Walkthrough_Working_With_Projects#120](../ide/codesnippet/CPP/walkthrough-working-with-projects-and-solutions-cpp_6.cpp)]-->

    ```cpp
    // Game.cpp : Defines the entry point for the console application.
    //

    #include "pch.h" // remove this line in Visual Studio 2019
    #include "Cardgame.h"
    #include <iostream>

    using namespace std;

    void PlayGames()
    {
        Cardgame bridge(4);
        Cardgame blackjack(8);
        Cardgame solitaire(1);
        Cardgame poker(5);
    }

    int main()
    {
        PlayGames();
        return 0;
    }
    ```

   The code adds a test function, `PlayGames`, to the source code, and calls it in `main`.

## Build and run your app project

Next, build the project and run the app.

### To build and run the project

1. On the menu bar, choose **Build** > **Build Solution**.

   Output from a build is displayed in the **Output** window. If your build is successful, the output should resemble:

    ```Output
    1>------ Build started: Project: Game, Configuration: Debug Win32 ------
    1>pch.cpp
    1>Cardgame.cpp
    1>Game.cpp
    1>Generating Code...
    1>Game.vcxproj -> C:\Users\<username>\source\repos\Game\Debug\Game.exe
    ========== Build: 1 succeeded, 0 failed, 0 up-to-date, 0 skipped ==========
    ```

   The **Output** window can show different steps, depending on the build configuration, but if the project build succeeds, the last line should resemble the output shown.

   If your build didn't succeed, compare your code to the code that is shown in the earlier steps.

1. To run the project, on the menu bar, choose **Debug** > **Start Without Debugging**. A console window should appear, and the output should resemble:

    ```Output
    4 players have started a new game.  There are now 4 players in total.
    8 players have started a new game.  There are now 12 players in total.
    1 players have started a new game.  There are now 13 players in total.
    5 players have started a new game.  There are now 18 players in total.
    ```

   Press a key to dismiss the console window.

Congratulations, you've successfully built an app project and solution. Continue the walkthrough to learn more about how to build C++ code projects in Visual Studio.

## Next steps

**Previous:** [Using the Visual Studio IDE for C++ Desktop Development](../ide/using-the-visual-studio-ide-for-cpp-desktop-development.md)<br/>
**Next:** [Walkthrough: Building a Project (C++)](../ide/walkthrough-building-a-project-cpp.md)

## See also

[C++ Language Reference](../cpp/cpp-language-reference.md)<br/>
[Projects and build systems](../build/projects-and-build-systems-cpp.md)<br/>
