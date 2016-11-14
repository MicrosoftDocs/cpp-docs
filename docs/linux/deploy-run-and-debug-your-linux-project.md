---
title: "Deploy, Run, and Debug Your Linux Project | Microsoft Docs"
ms.custom: ""
ms.date: "11/16/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
    - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: f7084cdb-17b1-4960-b522-f84981bea879
author: "BrianPeek"
ms.author: "brpeek"
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

# Deploy, Run, and Debug Your Project

Now that the project is created, you will need to connect to your Linux computer, which is where the code will be compiled and debugged.

1. Set the remote target architecture using the standard dropdown in Visual Studio as shown:
   ![Remote Architecture](media/architecture.png)

There are several ways to interact with and debug your Linux project.

* The traditional Visual Studio features like breakpoints, watch windows, hovering over a variable, etc. will all work as expected, so you may debug as you normally would.
* A special Linux Console window can be opened with the **Debug > Linux Console** menu item.

  ![Linux Console menu](media/consolemenu.png)

  This console will display any console output from the target computer as well as take input and send it to the target computer.

  ![Linux Console window](media/consolewindow.png)

* Command line arguments can be passed to the executable using the **Program Arguments** item in the project's **Debugging** property page.
  
  ![Program Arguments](media/settings_programarguments.png)

* GDB is used to debug applications running on Linux.  However, this can run in two different modes, which can be selected from the **Debugging Mode** option in the project's **Debugging** property page:

  ![GDB options](media/settings_debugger.png)

  | Selection | Description
  | --------- | ---
  | gdbserver | gdb is run locally which connects to gdbserver running on the remote system.  Note that this is the only mode in which the Linux Console window supports. 
  | gdb       | the Visual Studio debugger drives gdb on the remote system, which is more compatible if the local version of gdb is not compatible with the version installed on the target computer

* Specific debugger options can be passed to gdb using the **Additional Debugger Commands** entry.  For example, you migh twant to ignore SIGILL (illegal instruction) signals.  You could use the **handle** command to achieve this.  by adding the following to the **Additional Debugger Commands** entry as shown above:

  ```handle SIGILL nostop noprint```
