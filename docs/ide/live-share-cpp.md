---
title: "Collaborate with Live Share for C++ in Visual Studio"
description: "Use Live Share for C++ in Visual Studio to collaborate and share code in real time."
ms.date: "05/24/2019"
---
# Collaborate using Live Share for C++

In Visual Studio 2019 and Visual Studio Code, you can use **Live Share** to collaborate on C++ projects in real-time. With **Live Share** another person can edit and debug your code without having to install your project or any of its dependencies. You see each other's edits as they occur, and each edit is tagged with the name of the person who made it.

![Screenshot of C plus plus Live Share Editing. A change to the code specifying a color is highlighted and annotated with the name of the person making it.](../ide/media/live-share-edit-cpp.png)

## Live Share host and guests

In a Live Share session, there's a host and one or more guests. Both host and guests can use either Visual Studio or Visual Studio Code. A Visual Studio 2019 host on Windows can share with a Visual Studio Code guest on Linux.

The host provides the guests with everything they need to be productive. Guests aren't required to have the source code, compiler, external dependencies, or even the same installed components.

The host and guests can use these IntelliSense features:

- Member List
- Parameter Help
- Quick Info
- Debugging/Breakpoints
- Find All References
- Go To Definition
- Symbol Search (Ctrl+T)
- Reference Highlighting
- Diagnostics/Errors/Squiggles

![A side-by-side screenshot of a C plus plus Live Share Debugging intended to show two people seeing the debugging experience on their own screen.](../ide/media/live-share-debug-cpp.png)

## Start and end a Live Share session

To start a Live Share session in Visual Studio, click the Share button in the top right, or go to **File** > **Start Collaboration Session**. This generates a link that you can share with your collaborators.

![A small screenshot of the Live Share button.](../ide/media/live-share-button-cpp.png "Live Share Button")

To end a session, select **End Collaboration Session** from the **Sharing** dropdown.

![Screenshot of the Sharing dropdown list with the End Collaboration Session option highlighted.](../ide/media/live-share-end-session-cpp.png "Live Share Button")

## For more information

For more information about **Live Share** in Visual Studio, see [What is Visual Studio Live Share?](/visualstudio/liveshare/). For more information about Live Share in Visual Studio Code, see [
Live Share](https://marketplace.visualstudio.com/items?itemName=ms-vsliveshare.vsliveshare).

## See Also

[Edit and refactor code (C++)](writing-and-refactoring-code-cpp.md)</br>
[Navigate your C++ code base in Visual Studio](navigate-code-cpp.md)</br>
[Read and understand C++ code](read-and-understand-code-cpp.md)</br>
