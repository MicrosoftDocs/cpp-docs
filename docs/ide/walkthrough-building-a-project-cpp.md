---
title: "Walkthrough: Building a Project (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-ide"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["building projects [C++]", "projects [C++], building", "project building [C++]"]
ms.assetid: d459bc03-88ef-48d0-9f9a-82d17f0b6a4d
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Walkthrough: Building a Project (C++)
In this walkthrough, you deliberately introduce a Visual C++ syntax error in your code to learn what a compilation error looks like and how to fix it. When you compile the project, an error message indicates what the problem is and where it occurred.  
  
## Prerequisites  
  
-   This walkthrough assumes that you understand the fundamentals of the C++ language.  
  
-   It also assumes that you have completed the earlier related walkthroughs that are listed in [Using the Visual Studio IDE for C++ Desktop Development](../ide/using-the-visual-studio-ide-for-cpp-desktop-development.md).  
  
### To fix compilation errors  
  
1.  In TestGames.cpp, delete the semicolon in the last line so that it resembles this:  
  
     `return 0`  
  
2.  On the menu bar, choose **Build**, **Build Solution**.  
  
3.  A message in the **Error List** window indicates that there was an error in the building of the project. The description looks something like this:  
  
     `error C2143: syntax error : missing ';' before '}'`  
  
     To view help information about this error, highlight it in the **Error List** window and then choose the F1 key.  
  
4.  Add the semicolon back to the end of the line that has the syntax error:  
  
     `return 0;`  
  
5.  On the menu bar, choose **Build**, **Build Solution**.  
  
     A message in the **Output** window indicates that the project compiled successfully.  
  
    ```Output  
    1>------ Build started: Project: Game, Configuration: Debug Win32 ------  
    1>  TestGames.cpp  
    1>  Game.vcxproj -> C:\Users\<username>\Documents\Visual Studio <version>\Projects\Game\Debug\Game.exe  
    ========== Build: 1 succeeded, 0 failed, 0 up-to-date, 0 skipped ==========  
    ```  
  
## Next Steps  
 **Previous:** [Walkthrough: Working with Projects and Solutions (C++)](../ide/walkthrough-working-with-projects-and-solutions-cpp.md) &#124; **Next:**[Walkthrough: Testing a Project (C++)](../ide/walkthrough-testing-a-project-cpp.md)  
  
## See Also  
 [C++ Language Reference](../cpp/cpp-language-reference.md)   
 [Building C/C++ Programs](../build/building-c-cpp-programs.md)