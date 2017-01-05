---
title: "Walkthrough: Working with Projects and Solutions (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "solutions [C++]"
  - "projects [C++], about projects"
  - "projects [C++]"
  - "solutions [C++], about solutions"
ms.assetid: 93a3f290-e294-46e3-876e-e3084d9ae833
caps.latest.revision: 25
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Walkthrough: Working with Projects and Solutions (C++)
Here's how to create a C++ project in Visual Studio, add code, and then build and run the project. The project in this walkthrough is a program that tracks how many players are playing different card games.  
  
 In [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)], work is organized in projects and solutions. A solution can contain more than one project—for example, a DLL and an executable that references that DLL. For more information, see [Solutions and Projects](/visualstudio/ide/solutions-and-projects-in-visual-studio).  
  
## Prerequisites  
  
-   To complete this walkthrough, you must understand the fundamentals of the C++ language.  
  
## Creating a Project  
 To create a project, first choose a project-type template. For each project type, [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] sets compiler settings and—depending on the type—generates starter code that you can modify later.  
  
#### To create a project  
  
1.  On the menu bar, choose **File**, **New**, **Project**.  
  
2.  In the left pane of the **New Project** dialog box, expand the **Installed Templates** node, expand the **Visual C++** node, and then select **Win32**.  
  
3.  In the list of installed templates in the center pane, select **Win32 Console Application**.  
  
4.  Enter a name for the project in the **Name** box. For this example, enter **Game**.  
  
     You can accept the default location in the **Location** drop-down list, enter a different location, or choose the **Browse** button to browse to a directory where you want to save the project.  
  
     When you create a project, [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] puts the project in a solution. By default, the solution has the same name as the project. You can change the name in the **Solution name** box, but for this example, keep the default name.  
  
     Choose the **OK** button to start the **Win32 Application Wizard**.  
  
5.  On the **Overview** page of the **Win32 Application Wizard**, choose the **Next** button.  
  
6.  On the **Application Settings** page, under **Application type**, select **Console Application**. Under **Additional options**, clear the **Precompiled header** setting, and then select the **Empty Project** setting. Choose the **Finish** button to create the project.  
  
     You now have a project, but it does not yet have source code files.  
  
## Organizing Projects and Files in a Solution  
 You can use **Solution Explorer** to organize and manage the projects, files, and other resources in your solution.  
  
 This part of the walkthrough shows how add a class to the project. When you add the class, [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] adds the corresponding .h and .cpp files. Next, you add a new source code file for the main program that tests the class.  
  
#### To add a class to a project  
  
1.  If **Solution Explorer** is not displayed, on the menu bar, choose **View**, **Solution Explorer**.  
  
2.  In **Solution Explorer**, open the shortcut menu for the **Header Files** folder and then choose **Add**, **Class**.  
  
     In the left pane of the **Add Class** dialog box, expand the **Visual C++** node and select **C++**, and then in the list of installed templates in the center pane, select **C++ Class**. Choose the **Add** button.  
  
3.  In the **Generic C++ Class Wizard**, enter **Cardgame** in the **Class name** box. Don't modify the default file names and settings. Choose the **Finish** button.  
  
4.  The Cardgame.h file is opened in the editor. Make these changes:  
  
    -   Add two private data members after the opening brace of the class definition.  
  
         [!code-cpp[NVC_Walkthrough_Working_With_Projects#100](../ide/codesnippet/CPP/walkthrough-working-with-projects-and-solutions-cpp_1.h)]  
  
    -   Modify the default constructor that Visual Studio generated. After the `public:` access specifier, find the line that looks like this:  
  
         `Cardgame(void);`  
  
         Modify it to take one parameter of type `int`, named **players**.  
  
         [!code-cpp[NVC_Walkthrough_Working_With_Projects#101](../ide/codesnippet/CPP/walkthrough-working-with-projects-and-solutions-cpp_2.h)]  
  
    -   After the default destructor, add an inline declaration for a static int member function named **GetParticipants** that takes no parameters and returns the **totalParticipants** value.  
  
         [!code-cpp[NVC_Walkthrough_Working_With_Projects#102](../ide/codesnippet/CPP/walkthrough-working-with-projects-and-solutions-cpp_3.h)]  
  
5.  The Cardgame.h file should resemble this after you change it:  
  
     [!code-cpp[NVC_Walkthrough_Working_With_Projects#103](../ide/codesnippet/CPP/walkthrough-working-with-projects-and-solutions-cpp_4.h)]  
  
     The line `#pragma once` tells the compiler to include the file only one time. For more information, see [once](../preprocessor/once.md).  
  
     For information about other C++ keywords in this header file, see [class](../cpp/class-cpp.md), [int](../cpp/fundamental-types-cpp.md), [static](../cpp/storage-classes-cpp.md), and [public](../cpp/public-cpp.md).  
  
6.  Choose the **Cardgame.cpp** tab in the editing pane to open it for editing.  
  
7.  Delete everything in the file and replace it with this code:  
  
     [!code-cpp[NVC_Walkthrough_Working_With_Projects#111](../ide/codesnippet/CPP/walkthrough-working-with-projects-and-solutions-cpp_5.cpp)]  
  
    > [!NOTE]
    >  You can use auto-completion when you are entering code. For example, if you were entering this code, you could enter **pl** or **tot** and then press Ctrl+Spacebar so that auto-completion finishes entering `players` or `totalParticipants` for you.  
  
     For information about `#include`, see [#include Directive (C/C++)](../preprocessor/hash-include-directive-c-cpp.md).  
  
## Adding a Source File  
 Now, add a source code file for the main program that tests the class.  
  
#### To add a new source file  
  
1.  In **Solution Explorer**, open the shortcut menu for the **Source Files** folder and then choose **Add**, **New Item**.  
  
     In the **Add New Item** dialog box, in the left pane, expand the **Installed** node, expand the **Visual C++** node, and then select **Code**. In the center pane, select **C++ File (.cpp)**.  
  
2.  Enter **TestGames.cpp** in the **Name** box, and then choose the **Add** button.  
  
3.  In the TestGames.cpp editing window, enter the following code.  
  
     [!code-cpp[NVC_Walkthrough_Working_With_Projects#120](../ide/codesnippet/CPP/walkthrough-working-with-projects-and-solutions-cpp_6.cpp)]  
  
## Building and Running a Project  
 Now, build the project and run the application.  
  
#### To build and run the project  
  
1.  On the menu bar, choose **Build**, **Build Solution**.  
  
    > [!NOTE]
    >  If you are using an Express edition that does not display a **Build** menu, on the menu bar, choose **Tools**, **Settings**, **Expert Settings** to enable it.  
  
     Output from a build is displayed in the **Output** window. If your build is successful, the output should resemble this:  
  
    ```Output  
    1>------ Build started: Project: Game, Configuration: Debug Win32 ------  
    1>  TestGames.cpp  
    1>  Cardgame.cpp  
    1>  Generating Code...  
    1>  Game.vcxproj -> c:\users\username\documents\visual studio\Projects\Game\Debug\Game.exe  
    ========== Build: 1 succeeded, 0 failed, 0 up-to-date, 0 skipped ==========  
  
    ```  
  
     The **Output** window can show different steps, depending on the edition and the build configuration, but if the project build succeeds, the last line should resemble the output shown.  
  
     If your build did not succeed, compare your code to the code that is given in the earlier steps.  
  
2.  To run the project, on the menu bar, choose **Debug**, **Start Without Debugging**. The output should resemble this:  
  
    ```Output  
    4 players have started a new game.  There are now 4 players in total.  
    8 players have started a new game.  There are now 12 players in total.  
    1 players have started a new game.  There are now 13 players in total.  
    5 players have started a new game.  There are now 18 players in total.  
    ```  
  
## Next Steps  
 **Previous:** [Using the Visual Studio IDE for C++ Desktop Development](../ide/using-the-visual-studio-ide-for-cpp-desktop-development.md). **Next:**[Walkthrough: Building a Project (C++)](../ide/walkthrough-building-a-project-cpp.md).  
  
## See Also  
 [Visual C++ Guided Tour](http://msdn.microsoft.com/en-us/499cb66f-7df1-45d6-8b6b-33d94fd1f17c)