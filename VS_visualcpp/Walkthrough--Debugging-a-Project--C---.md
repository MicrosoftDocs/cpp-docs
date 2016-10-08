---
title: "Walkthrough: Debugging a Project (C++)"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: a5cade77-ba51-4b03-a7a0-6897e3cd6a59
caps.latest.revision: 16
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# Walkthrough: Debugging a Project (C++)
In this walkthrough, you modify the program to fix the problem that you discovered when you tested the project.  
  
## Prerequisites  
  
-   This walkthrough assumes that you understand the fundamentals of the C++ language.  
  
-   It also assumes that you have completed the earlier related walkthroughs that are listed in [Using the Visual Studio IDE for C++ Desktop Development](../VS_visualcpp/Using-the-Visual-Studio-IDE-for-C---Desktop-Development.md).  
  
### To fix a program that has a bug  
  
1.  To see what occurs when a `Cardgame` object is destroyed, view the destructor for the `Cardgame` class.  
  
     On the menu bar, choose **View**, **Class View**.  
  
     In the **Class View** window, expand the **Game** project tree and select the **Cardgame** class to display the class members and methods.  
  
     Open the shortcut menu for the **~Cardgame(void)** destructor and then choose **Go To Definition**.  
  
2.  To decrease the `totalParticipants` when a Cardgame terminates, add the following code between the opening and closing braces of the `Cardgame::~Cardgame` destructor.  
  
     [!CODE [NVC_Walkthrough_Debugging_A_Project#110](../CodeSnippet/VS_Snippets_Cpp/nvc_walkthrough_debugging_a_project#110)]  
  
3.  The Cardgame.cpp file should resemble this after you change it:  
  
     [!CODE [NVC_Walkthrough_Debugging_A_Project#111](../CodeSnippet/VS_Snippets_Cpp/nvc_walkthrough_debugging_a_project#111)]  
  
4.  On the menu bar, choose **Build**, **Build Solution**.  
  
5.  When the build completes, run it in Debug mode by choosing **Debug**, **Start Debugging** on the menu bar, or by choosing the F5 key. The program pauses at the first breakpoint.  
  
6.  To step through the program, on the menu bar, choose **Debug**, **Step Over**, or choose the F10 key.  
  
     Notice that after each Cardgame constructor executes, the value of `totalParticipants` increases. When the `PlayGames` function returns, as each Cardgame instance goes out of scope and is deleted (and the destructor is called), `totalParticipants` decreases. Just before the `return` statement is executed, `totalParticipants` equals 0.  
  
7.  Continue stepping through the program until it exits, or let it run by choosing **Debug**, **Run** on the menu bar, or by choosing the F5 key.  
  
## Next Steps  
 **Previous:** [Walkthrough: Testing a Project (C++)](../VS_visualcpp/Walkthrough--Testing-a-Project--C---.md) &#124; **Next:**[Walkthrough: Deploying Your Program (C++)](../VS_visualcpp/Walkthrough--Deploying-Your-Program--C---.md)  
  
## See Also  
 [Visual C++ Guided Tour](assetId:///499cb66f-7df1-45d6-8b6b-33d94fd1f17c)   
 [DELETE_PENDING_Building and Debugging](assetId:///9f6ba537-5ea0-46fb-b6ba-b63d657d84f1)