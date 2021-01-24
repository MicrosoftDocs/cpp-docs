---
description: "Learn more about: Walkthrough: Testing a Project (C++)"
title: "Walkthrough: Testing a Project (C++)"
ms.date: "04/25/2019"
helpviewer_keywords: ["project testing [C++]", "testing projects", "projects [C++], testing"]
ms.assetid: 88cdd377-c5c8-4201-889d-32f5653ebead
---
# Walkthrough: Testing a Project (C++)

When you run a program in Debug mode, you can use breakpoints to pause the program to examine the state of variables and objects.

In this walkthrough, you watch the value of a variable as the program runs and deduce why the value isn't what you expect.

## Prerequisites

- This walkthrough assumes that you understand the fundamentals of the C++ language.

- It also assumes that you've completed the earlier related walkthroughs that are listed in [Using the Visual Studio IDE for C++ Desktop Development](../ide/using-the-visual-studio-ide-for-cpp-desktop-development.md).

### To run a program in Debug mode

1. Open Games.cpp for editing.

1. Select this line of code:

   `Cardgame solitaire(1);`

1. To set a breakpoint on that line, on the menu bar, choose **Debug** > **Toggle Breakpoint**, or choose the **F9** key. A red circle appears to the left of the line; it indicates that a breakpoint is set. To remove a breakpoint, you can choose the menu command or the **F9** key again.

   If you're using a mouse, you can also set or remove a breakpoint by clicking in the left margin.

1. On the menu bar, choose **Debug** > **Start Debugging**, or choose the **F5** key.

   When the program reaches the line that has the breakpoint, execution stops temporarily, because your program is in Break mode. A yellow arrow to the left of a line of code indicates that it's the next line to be executed.

1. To examine the value of the `Cardgame::totalParticipants` variable, move the pointer over `Cardgame` and then move it over the expansion control at the left of the tooltip window. The variable name `totalParticipants` and its value of **12** are displayed.

   Open the shortcut menu for the `Cardgame::totalParticipants` variable and then choose **Add Watch** to display that variable in the **Watch 1** window. You can also highlight a variable and drag it to the **Watch 1** window.

1. To step to the next line of code, on the menu bar, choose **Debug** > **Step Over**, or choose the **F10** key.

   The value of `Cardgame::totalParticipants` in the **Watch 1** window is now displayed as **13**.

1. Open the shortcut menu for the `return 0;` statement and then choose **Run to Cursor**. The yellow arrow to the left of the code points to the next statement to be executed.

1. The `Cardgame::totalParticipants` number should decrease when a `Cardgame` ends. At this point, `Cardgame::totalParticipants` should equal 0 because all `Cardgame` instances have been deleted, but the **Watch 1** window indicates that `Cardgame::totalparticipants` equals **18**. The difference indicates that there's a bug in the code, which you can detect and fix by completing the next walkthrough, [Walkthrough: Debugging a Project (C++)](../ide/walkthrough-debugging-a-project-cpp.md).

1. To stop the program, on the menu bar, choose **Debug** > **Stop Debugging**, or choose the **Shift**+**F5** keyboard shortcut.

## Next Steps

**Previous:** [Walkthrough: Building a Project (C++)](../ide/walkthrough-building-a-project-cpp.md)<br/>
**Next:** [Walkthrough: Debugging a Project (C++)](../ide/walkthrough-debugging-a-project-cpp.md)

## See also

[C++ Language Reference](../cpp/cpp-language-reference.md)<br/>
[Projects and build systems](../build/projects-and-build-systems-cpp.md)<br/>
