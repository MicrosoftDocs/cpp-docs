---
title: "Walkthrough: Debugging a Project (C++) | Microsoft Docs"
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
  - "projects [C++], debugging"
  - "project debugging [C++]"
  - "debugging projects"
ms.assetid: a5cade77-ba51-4b03-a7a0-6897e3cd6a59
caps.latest.revision: 16
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
# Walkthrough: Debugging a Project (C++)
In this walkthrough, you modify the program to fix the problem that you discovered when you tested the project.  
  
## Prerequisites  
  
-   This walkthrough assumes that you understand the fundamentals of the C++ language.  
  
-   It also assumes that you have completed the earlier related walkthroughs that are listed in [Using the Visual Studio IDE for C++ Desktop Development](../ide/using-the-visual-studio-ide-for-cpp-desktop-development.md).  
  
### To fix a program that has a bug  
  
1.  To see what occurs when a `Cardgame` object is destroyed, view the destructor for the `Cardgame` class.  
  
     On the menu bar, choose **View**, **Class View**.  
  
     In the **Class View** window, expand the **Game** project tree and select the **Cardgame** class to display the class members and methods.  
  
     Open the shortcut menu for the **~Cardgame(void)** destructor and then choose **Go To Definition**.  
  
2.  To decrease the `totalParticipants` when a Cardgame terminates, add the following code between the opening and closing braces of the `Cardgame::~Cardgame` destructor.  
  
     [!code-cpp[NVC_Walkthrough_Debugging_A_Project#110](../ide/codesnippet/CPP/walkthrough-debugging-a-project-cpp_1.cpp)]  
  
3.  The Cardgame.cpp file should resemble this after you change it:  
  
     [!code-cpp[NVC_Walkthrough_Debugging_A_Project#111](../ide/codesnippet/CPP/walkthrough-debugging-a-project-cpp_2.cpp)]  
  
4.  On the menu bar, choose **Build**, **Build Solution**.  
  
5.  When the build completes, run it in Debug mode by choosing **Debug**, **Start Debugging** on the menu bar, or by choosing the F5 key. The program pauses at the first breakpoint.  
  
6.  To step through the program, on the menu bar, choose **Debug**, **Step Over**, or choose the F10 key.  
  
     Notice that after each Cardgame constructor executes, the value of `totalParticipants` increases. When the `PlayGames` function returns, as each Cardgame instance goes out of scope and is deleted (and the destructor is called), `totalParticipants` decreases. Just before the `return` statement is executed, `totalParticipants` equals 0.  
  
7.  Continue stepping through the program until it exits, or let it run by choosing **Debug**, **Run** on the menu bar, or by choosing the F5 key.  
  
## Next Steps  
 **Previous:** [Walkthrough: Testing a Project (C++)](../ide/walkthrough-testing-a-project-cpp.md) &#124; **Next:**[Walkthrough: Deploying Your Program (C++)](../ide/walkthrough-deploying-your-program-cpp.md)  
  
## See Also  
 [Visual C++ Guided Tour](http://msdn.microsoft.com/en-us/499cb66f-7df1-45d6-8b6b-33d94fd1f17c)   
 [DELETE_PENDING_Building and Debugging](http://msdn.microsoft.com/en-us/9f6ba537-5ea0-46fb-b6ba-b63d657d84f1)