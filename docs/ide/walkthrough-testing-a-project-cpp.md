---
title: "Walkthrough: Testing a Project (C++) | Microsoft Docs"
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
  - "project testing [C++]"
  - "testing projects"
  - "projects [C++], testing"
ms.assetid: 88cdd377-c5c8-4201-889d-32f5653ebead
caps.latest.revision: 13
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
# Walkthrough: Testing a Project (C++)
When you run a program in Debug mode, you can use breakpoints to pause the program to examine the state of variables and objects.  
  
 In this walkthrough, you watch the value of a variable as the program runs and deduce why the value is not what you expect.  
  
## Prerequisites  
  
-   This walkthrough assumes that you understand the fundamentals of the C++ language.  
  
-   It also assumes that you have completed the earlier related walkthroughs that are listed in [Using the Visual Studio IDE for C++ Desktop Development](../ide/using-the-visual-studio-ide-for-cpp-desktop-development.md).  
  
### To run a program in Debug mode  
  
1.  Open TestGames.cpp for editing.  
  
2.  Select this line of code:  
  
     `Cardgame.solitaire(1);`  
  
3.  To set a breakpoint on that line, on the menu bar, choose **Debug**, **Toggle Breakpoint**, or choose the F9 key. A red circle appears to the left of the line; it indicates that a breakpoint is set. To remove a breakpoint, you can choose the menu command or the F9 key again.  
  
     If you're using a mouse, you can also set or remove a breakpoint by clicking in the left margin.  
  
4.  On the menu bar, choose **Debug**, **Start Debugging**, or choose the F5 key.  
  
     When the program reaches the line that has the breakpoint, execution stops temporarily, because your program is in Break mode. A yellow arrow to the left of a line of code indicates that it is the next line to be executed.  
  
5.  To examine the value of the `Cardgame::totalParticipants` variable, move the pointer over `Cardgame` and then move it over the expansion control at the left of the tooltip window. The variable name `totalParticipants` and its value of 12 are displayed.  
  
     Open the shortcut menu for the `Cardgame::totalParticipants` variable and then choose **Add Watch** to display that variable in the **Watch 1** window. You can also select a variable and drag it to the **Watch 1** window.  
  
6.  To step to the next line of code, on the menu bar, choose **Debug**, **Step Over**, or choose the F10 key.  
  
     The value of `Cardgame::totalParticipants` in the **Watch 1** window is now displayed as 13.  
  
7.  Open the shortcut menu for the `return 0;` statement and then choose **Run to Cursor**. The yellow arrow to the left of the code points to the next statement to be executed.  
  
8.  The `Cardgame::totalParticipants` number should decrease when a Cardgame terminates. At this point, `Cardgame::totalParticipants` should equal 0 because all Cardgame instances have been deleted, but the **Watch 1** window indicates that `Cardgame::totalparticipants` equals 18. This indicates that there's a bug in the code, which you can detect and fix by completing the next walkthrough, [Walkthrough: Debugging a Project (C++)](../ide/walkthrough-debugging-a-project-cpp.md).  
  
9. To stop the program, on the menu bar, choose **Debug**, **Stop Debugging**, or choose the Shift+F5 keyboard shortcut.  
  
## Next Steps  
 **Previous:** [Walkthrough: Building a Project (C++)](../ide/walkthrough-building-a-project-cpp.md) &#124; **Next:**[Walkthrough: Debugging a Project (C++)](../ide/walkthrough-debugging-a-project-cpp.md)  
  
## See Also  
 [Visual C++ Guided Tour](http://msdn.microsoft.com/en-us/499cb66f-7df1-45d6-8b6b-33d94fd1f17c)   
 [DELETE_PENDING_Building and Debugging](http://msdn.microsoft.com/en-us/9f6ba537-5ea0-46fb-b6ba-b63d657d84f1)