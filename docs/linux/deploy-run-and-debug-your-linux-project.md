---
title: "Deploy, run, and debug your C++ Linux project in Visual Studio"
description: "Describes how to compile, execute, and debug code on the remote target from inside a Linux C++ project in Visual Studio."
ms.date: "06/07/2019"
ms.assetid: f7084cdb-17b1-4960-b522-f84981bea879
---
# Deploy, run, and debug your Linux project

::: moniker range="vs-2015"

Linux support is available in Visual Studio 2017 and later.

::: moniker-end

Once you have created a Linux C++ project in Visual Studio and you have connected to the project using the [Linux Connection Manager](connect-to-your-remote-linux-computer.md), you can run and debug the project. You compile, execute, and debug the code on the remote target.

::: moniker range="vs-2019"

**Visual Studio 2019 version 16.1** You can target different Linux systems for debugging and building. Specify the build machine on the **General** property page and the debug machine on the **Debugging** property page.

::: moniker-end

There are several ways to interact with and debug your Linux project.

- Debug using traditional Visual Studio features, such as breakpoints, watch windows, and hovering over a variable. Using these methods, you may debug as you normally would for other project types.

- View output from the target computer in the Linux Console window. You can also use the console to send input to the target computer.

## Debug your Linux project

1. Select debugging mode in the **Debugging** property page.

   
   
   ::: moniker range="vs-2019"

   GDB is used to debug applications running on Linux. When debugging on a remote system (not WSL) GDB can run in two different modes, which can be selected from the **Debugging Mode** option in the project's **Debugging** property page:

   ![GDB options](media/vs2019-debugger-settings.png)

   ::: moniker-end

   ::: moniker range="vs-2017"

   GDB is used to debug applications running on Linux. GDB can run in two different modes, which can be selected from the **Debugging Mode** option in the project's **Debugging** property page:

   ![GDB options](media/vs2017-debugger-settings.png)

   ::: moniker-end


   - In **gdbserver** mode, GDB is run locally, which connects to gdbserver on the remote system.  Note that this is the only mode that the Linux Console window supports.

   - In **gdb** mode, the Visual Studio debugger drives GDB on the remote system. This is a better option if the local version of GDB is not compatible with the version installed on the target computer. |

   > [!NOTE]
   > If you are unable to hit breakpoints in gdbserver debugging mode, try gdb mode. gdb must first be [installed](download-install-and-setup-the-linux-development-workload.md) on the remote target.

1. Select the remote target using the standard **Debug** toolbar in Visual Studio.

   When the remote target is available, you will see it listed by either name or IP address.

   ![Remote target](media/remote_target.png)

   If you have not yet connected to the remote target, you will see an instruction to use [Linux Connection Manager](connect-to-your-remote-linux-computer.md) to connect to the remote target.

   ![Remote Architecture](media/architecture.png)

1. Set a breakpoint by clicking in the left gutter of some code that you know will execute.

   A red dot appears on the line of code where you set the breakpoint.

1. Press **F5** (or **Debug > Start Debugging**) to start debugging.

   When you start debugging, the application is compiled on the remote target before it starts. Any compilation errors will appear in the **Error List** window.

   If there are no errors, the app will start and the debugger will pause at the breakpoint.

   ![Hit a breakpoint](media/hit_breakpoint.png)

   Now, you can interact with the application in its current state, view variables, and step through code by pressing command keys such as **F10** or **F11**.

1. If you want to use the Linux Console to interact with your app, select **Debug > Linux Console**.

   ![Linux Console menu](media/consolemenu.png)

   This console will display any console output from the target computer as well as take input and send it to the target computer.

   ![Linux Console window](media/consolewindow.png)

## Configure other debugging options

- Command-line arguments can be passed to the executable using the **Program Arguments** item in the project's **Debugging** property page.

   ![Program Arguments](media/settings_programarguments.png)

- Specific debugger options can be passed to GDB using the **Additional Debugger Commands** entry.  For example, you might want to ignore SIGILL (illegal instruction) signals.  You could use the **handle** command to achieve this.  by adding the following to the **Additional Debugger Commands** entry as shown above:

   `handle SIGILL nostop noprint`

## Debug with Attach to Process

The [Debugging](debugging-linux.md) property page for Visual Studio projects, and the **Launch.vs.json** settings for CMake projects, have settings that enable you to attach to a running process. If you require additional control beyond what is provided in those settings, you can place a file named `Microsoft.MIEngine.Options.xml` in the root of your solution or workspace. Here is a simple example:

```xml
<?xml version="1.0" encoding="utf-8"?>
<SupplementalLaunchOptions>
    <AttachOptions>
      <AttachOptionsForConnection AdditionalSOLibSearchPath="/home/user/solibs">
        <ServerOptions MIDebuggerPath="C:\Program Files (x86)\Microsoft Visual Studio\Preview\Enterprise\Common7\IDE\VC\Linux\bin\gdb\7.9\x86_64-linux-gnu-gdb.exe"
ExePath="C:\temp\ConsoleApplication17\ConsoleApplication17\bin\x64\Debug\ConsoleApplication17.out"/>
        <SetupCommands>
          <Command IgnoreFailures="true">-enable-pretty-printing</Command>
        </SetupCommands>
      </AttachOptionsForConnection>
    </AttachOptions>
</SupplementalLaunchOptions>
```

The **AttachOptionsForConnection** has most of the attributes you might need. The example above shows how to specify a location to search for additional .so libraries. The child element **ServerOptions** enables attaching to the remote process with gdbserver instead. To do that you need to specify a local gdb client (the one shipped in Visual Studio 2017 is shown above) and a local copy of the binary with symbols. The **SetupCommands** element enables you to pass commands directly to gdb. You can find all the options available in the [LaunchOptions.xsd schema](https://github.com/Microsoft/MIEngine/blob/master/src/MICore/LaunchOptions.xsd) on GitHub.

## Next steps

- To debug ARM devices on Linux, see this blog post: [Debugging an embedded ARM device in Visual Studio](https://blogs.msdn.microsoft.com/vcblog/2018/01/10/debugging-an-embedded-arm-device-in-visual-studio/).

## See also

[C++ Debugging Properties (Linux C++)](prop-pages/debugging-linux.md)
