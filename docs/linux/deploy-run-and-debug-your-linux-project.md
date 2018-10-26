---
title: "Deploy, run, and debug your C++ Linux project in Visual Studio | Microsoft Docs"
description: "Describes how to compile, execute, and debug code on the remote target from inside a Linux C++ project in Visual Studio."
ms.custom: ""
ms.date: "09/12/2018"
ms.technology: ["cpp-linux"]
ms.tgt_pltfrm: "Linux"
ms.topic: "conceptual"
ms.assetid: f7084cdb-17b1-4960-b522-f84981bea879
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "linux"]
---

# Deploy, run, and debug your Linux project

Once you have created a Linux C++ project in Visual Studio and you have connected to the project using the [Linux Connection Manager](../linux/connect-to-your-remote-linux-computer.md), you can run and debug the project. You compile, execute, and debug the code on the remote target.

There are several ways to interact with and debug your Linux project.

* Debug using traditional Visual Studio features, such as breakpoints, watch windows, and hovering over a variable. Using these methods, you may debug as you normally would for other project types.
* View output from the target computer in a special Linux Console window. You can also use the console to send input to the target computer.

## Debug your Linux project

1. Select debugging mode in the **Debugging** property page.

    GDB is used to debug applications running on Linux.  However, this can run in two different modes, which can be selected from the **Debugging Mode** option in the project's **Debugging** property page:

    ![GDB options](media/settings_debugger.png)

    - In **gdbserver** mode, GDB is run locally which connects to gdbserver running on the remote system.  Note that this is the only mode which the Linux Console window supports.

    - In **gdb** mode, the Visual Studio debugger drives GDB on the remote system, which is more compatible if the local version of GDB is not compatible with the version installed on the target computer. |

    > [!NOTE]
    > If you are unable to hit breakpoints in gdbserver debugging mode, try gdb mode. gdb must first be [installed](../linux/download-install-and-setup-the-linux-development-workload.md) on the remote target.

2. Select the remote target using the standard **Debug** toolbar in Visual Studio.

    When the remote target is available, you will see it listed by either name or IP address.

    ![Remote target](media/remote_target.png)

    If you have not yet connected to the remote target, you will see an instruction to use [Linux Connection Manager](../linux/connect-to-your-remote-linux-computer.md) to connect to the remote target.

    ![Remote Architecture](media/architecture.png)

3. Set a breakpoint by clicking in the left gutter of some code that you know will execute.

    A red dot appears on the line of code where you set the breakpoint.

4. Press **F5** (or **Debug > Start Debugging**) to start debugging.

    When you start debugging, the application is compiled on the remote target before it starts. Any compilation errors will appear in the **Error List** window.

    If there are no errors, the app will start and the debugger will pause at the breakpoint.

    ![Hit a breakpoint](media/hit_breakpoint.png)

    Now, you can interact with the application in it's current state, view variables, and step through code by pressing command keys such as **F10** or **F11**.

4. If you want to use the Linux Console to interact with your app, select **Debug > Linux Console**.

  ![Linux Console menu](media/consolemenu.png)

  This console will display any console output from the target computer as well as take input and send it to the target computer.

  ![Linux Console window](media/consolewindow.png)

## Configure other debugging options

* Command line arguments can be passed to the executable using the **Program Arguments** item in the project's **Debugging** property page.

  ![Program Arguments](media/settings_programarguments.png)

* Specific debugger options can be passed to GDB using the **Additional Debugger Commands** entry.  For example, you might want to ignore SIGILL (illegal instruction) signals.  You could use the **handle** command to achieve this.  by adding the following to the **Additional Debugger Commands** entry as shown above:

  ```handle SIGILL nostop noprint```

## Next steps

* To debug ARM devices on Linux, see this blog post: [Debugging an embedded ARM device in Visual Studio](https://blogs.msdn.microsoft.com/vcblog/2018/01/10/debugging-an-embedded-arm-device-in-visual-studio/).

* To debug using the **Attach to Process** command, see this blog post: [Linux C++ Workload improvements to the Project System, Linux Console Window, rsync and Attach to Process](https://blogs.msdn.microsoft.com/vcblog/2018/03/13/linux-c-workload-improvements-to-the-project-system-linux-console-window-rsync-and-attach-to-process/).

## See also
[C++ Debugging Properties (Linux C++)](../linux/prop-pages/debugging-linux.md).
