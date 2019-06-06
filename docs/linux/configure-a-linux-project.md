---
title: "Configure a C++ Linux project in Visual Studio"
ms.date: "06/07/2019"
ms.assetid: 4d7c6adf-54b9-4b23-bd23-5de0c825b768
---
# Configure a Linux project

This topic describes how to configure a C++ Linux project as described in [Create a new C++ Linux project in Visual Studio](create-a-new-linux-project.md). For CMake Linux projects, see [Configure a Linux CMake Project ](cmake-linux-project.md). 

You can configure a Linux project to target a physical Linux machine, a virtual machine, or the [Windows Subsystem for Linux](/windows/wsl/about) (WSL). 

::: moniker range="vs-2019"

**Visual Studio 2019 version 16.1**:

- When targeting WSL, you can avoid the copy operations that are necessary for building and IntelliSense when targeting remote Linux systems.

- You can specify separate Linux targets for building and debugging.

::: moniker-end

## General settings

To view configuration options, select the **Project > Properties** menu, or right click on the project in **Solution Explorer** and select **Properties** from the context menu. The **General** settings appear.

![General configuration](media/settings_general.png)

By default, an executable (.out) is built with the tool. To build a static or dynamic library, or to use an existing Makefile, use the **Configuration Type** setting.

For more information about the settings in the property pages, see [Linux Project Property Page Reference](prop-pages-linux.md).

## Remote settings

To change settings pertaining to the remote Linux computer, configure the remote settings that appear under [General](prop-pages/general-linux.md).

- To specify a remote target Linux computer, use the **Remote Build Machine** entry. This will allow you to select one of the connections created previously. To create a new entry, see the [Connecting to Your Remote Linux Computer](connect-to-your-remote-linux-computer.md) section.

   ![Build Machine](media/remote-build-machine-vs2019.png)

   ::: moniker range="vs-2019"

   **Visual Studio 16.1**: To target Windows Subsystem for Linux, click the down arrow for **Platform Toolset** and choose **WSL_1_0**. The other remote options will disappear and the path to the default WSL shell will appear in their place:

   ![WSL build machine](media/wsl-remote-vs2019.png)

   If you have side-by-side WSL installations, you can specify a different path here. For example, if you have Ubuntu 18.04 installed, it is located in **C:\Users\\<username>\AppData\Local\Microsoft\WindowsApps\ubuntu1804.exe**.

   You can specify a different target for debugging on the **Configuration Properties** > **Debugging** page.

   ::: moniker-end

- The **Remote Build Root Directory** determines the root location of where the project is built on the remote Linux computer. This will default to **~/projects** unless changed.

- The **Remote Build Project Directory** is where this specific project will be built on the remote Linux computer. This will default to **$(RemoteRootDir)/$(ProjectName)**, which will expand to a directory named after the current project, under the root directory set above.

> [!NOTE]
> To change the default C and C++ compilers, or the Linker and Archiver used to build the project, use the appropriate entries in the **C/C++ > General** section and the **Linker > General** section. You can specify a certain version of GCC or Clang, for example. For more information see [C/C++ Properties (Linux C++)](prop-pages/c-cpp-linux.md) and [Linker Properties (Linux C++)](prop-pages/linker-linux.md).

## Copy sources (remote systems only)

::: moniker range="vs-2019"

This section does not apply when targeting WSL.

::: moniker-end

When building on remote systems, the source files on your development PC are copied to the Linux computer and compiled there. By default, all sources in the Visual Studio project are copied to the locations set in the settings above. However, additional sources can also be added to the list, or copying sources can be turned off entirely, which is the default for a Makefile project.

- **Sources to copy** determines which sources are copied to the remote computer. By default, the **\@(SourcesToCopyRemotely)** defaults to all source code files in the project, but does not include any asset/resource files, such as images.

- **Copy sources** can be turned on and off to enable and disable the copying of source files to the remote computer.

- **Additional sources to copy** allows you to add additional source files which will be copied to the remote system. You can specify a semi-colon delimited list, or you can use the **:=** syntax to specify a local and remote name to use:

`C:\Projects\ConsoleApplication1\MyFile.cpp:=~/projects/ConsoleApplication1/ADifferentName.cpp;C:\Projects\ConsoleApplication1\MyFile2.cpp:=~/projects/ConsoleApplication1/ADifferentName2.cpp;`

## Build events

Since all compilation is happening on a remote computer (or WSL), several additional Build Events have been added to the Build Events section in Project Properties. These are **Remote Pre-Build Event**, **Remote Pre-Link Event**, and **Remote Post-Build Event**, and will occur on the remote computer before or after the individual steps in the process.

![Build Events](media/settings_buildevents.png)

## <a name="remote_intellisense"></a> IntelliSense for headers on remote systems

::: moniker range="vs-2019"

This section does not apply when targeting WSL.

::: moniker-end

When you add a new connection in **Connection Manager**, Visual Studio automatically detects the include directories for the compiler on the remote system. Visual Studio then zips up and copies those files to a directory on your local Windows machine. After that, whenever you use that connection in a Visual Studio or CMake project, the headers in those directories are used to provide IntelliSense.

This functionality depends on the Linux machine having zip installed. You can install zip by using this apt-get command:

```cmd
apt install zip
```

To manage your header cache, navigate to **Tools > Options, Cross Platform > Connection Manager > Remote Headers IntelliSense Manager**. To update the header cache after making changes on your Linux machine, select the remote connection and then select **Update**. Select **Delete** to remove the headers without deleting the connection itself. Select **Explore** to open the local directory in **File Explorer**. Treat this folder as read-only. To download headers for an existing connection that was created prior to Visual Studio 2017 version 15.3, select the connection and then select **Download**.

::: moniker range="vs-2017"

![Remote Header IntelliSense](media/remote-header-intellisense.png)

::: moniker-end

::: moniker range="vs-2019"

![Remote Header IntelliSense](media/connection-manager-vs2019.png)

You can enable logging to help troubleshoot problems:

![Remote Logging](media/remote-logging-vs2019.png)

::: moniker-end


## See also

[Set compiler and build properties](../build/working-with-project-properties.md)<br/>
[C++ General Properties (Linux C++)](../linux/prop-pages/general-linux.md)<br/>
[VC++ Directories (Linux C++)](../linux/prop-pages/directories-linux.md)<br/>
[Copy Sources Project Properties (Linux C++)](../linux/prop-pages/copy-sources-project.md)<br/>
[Build Event Properties (Linux C++)](../linux/prop-pages/build-events-linux.md)
