---
description: "Learn more about: Walkthrough: Debugging a Project (C++)"
title: "Walkthrough: Debugging a Project (C++)"
ms.date: "04/25/2019"
helpviewer_keywords: ["projects [C++], debugging", "project debugging [C++]", "debugging projects"]
ms.assetid: a5cade77-ba51-4b03-a7a0-6897e3cd6a59
---
# Walkthrough: Debugging a Project (C++)

In this walkthrough, you modify the program to fix the problem that you found when you tested the project.

## Prerequisites

- This walkthrough assumes that you understand the fundamentals of the C++ language.

- It also assumes that you've completed the earlier related walkthroughs that are listed in [Using the Visual Studio IDE for C++ Desktop Development](../ide/using-the-visual-studio-ide-for-cpp-desktop-development.md).

### To fix a program that has a bug

1. To see what occurs when a `Cardgame` object is destroyed, view the destructor for the `Cardgame` class.

   On the menu bar, choose **View** > **Class View**.

   In the **Class View** window, expand the **Game** project tree and select the **Cardgame** class to display the class members and methods.

   Open the shortcut menu for the **~Cardgame(void)** destructor and then choose **Go To Definition**.

1. To decrease the `totalParticipants` when a Cardgame ends, add the following code between the opening and closing braces of the `Cardgame::~Cardgame` destructor.

   [!code-cpp[NVC_Walkthrough_Debugging_A_Project#110](../ide/codesnippet/CPP/walkthrough-debugging-a-project-cpp_1.cpp)]

1. The Cardgame.cpp file should resemble the code below after you change it:

   [!code-cpp[NVC_Walkthrough_Debugging_A_Project#111](../ide/codesnippet/CPP/walkthrough-debugging-a-project-cpp_2.cpp)]

1. On the menu bar, choose **Build** > **Build Solution**.

1. When the build completes, run it in Debug mode by choosing **Debug** > **Start Debugging** on the menu bar, or by choosing the **F5** key. The program pauses at the first breakpoint.

1. To step through the program, on the menu bar, choose **Debug** > **Step Over**, or choose the **F10** key.

   Notice that after each `Cardgame` constructor executes, the value of `totalParticipants` increases. When the `PlayGames` function returns, as each `Cardgame` instance goes out of scope and is deleted (and the destructor is called), `totalParticipants` decreases. Just before the **`return`** statement is executed, `totalParticipants` equals 0.

1. Continue stepping through the program until it exits, or let it run by choosing **Debug** > **Run** on the menu bar, or by choosing the **F5** key.

## Next Steps

**Previous:** [Walkthrough: Testing a Project (C++)](../ide/walkthrough-testing-a-project-cpp.md)<br/>
**Next:** [Walkthrough: Deploying Your Program (C++)](../ide/walkthrough-deploying-your-program-cpp.md)

## See also

[C++ Language Reference](../cpp/cpp-language-reference.md)<br/>
[Projects and build systems](../build/projects-and-build-systems-cpp.md)<br/>
