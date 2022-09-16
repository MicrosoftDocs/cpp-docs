---
title: "Configure Linux projects to use Address Sanitizer"
description: "Describes how to configure C++ Linux projects in Visual Studio to use Address Sanitizer."
ms.date: "10/7/2020"
---
# Configure Linux projects to use Address Sanitizer

In Visual Studio 2019 version 16.1, AddressSanitizer (ASan) support is integrated into Linux projects. You can enable ASan for both MSBuild-based Linux projects and CMake projects. It works on remote Linux systems and on Windows Subsystem for Linux (WSL).

## About ASan

ASan is a runtime memory error detector for C/C++ that catches the following errors:

- Use after free (dangling pointer reference)
- Heap buffer overflow
- Stack buffer overflow
- Use after return
- Use after scope
- Initialization order bugs

When ASan detects an error, it stops execution immediately. If you run an ASan-enabled program in the debugger, you see a message that describes the type of error, the memory address, and the location in the source file where the error occurred:

   ![Screenshot showing the address sanitizer error message: heap use after free.](media/asan-error.png)

You can also view the full ASan output (including where the corrupted memory was allocated/deallocated) in the Debug pane of the output window.

## Enable ASan for MSBuild-based Linux projects

> [!NOTE]
> Starting in Visual Studio 2019 version 16.4, AddressSanitizer for Linux projects is enabled via **Project properties** > **Configuration Properties** > **C/C++** > **Enable Address Sanitizer**.

To enable ASan for MSBuild-based Linux projects, right-click on the project in **Solution Explorer** and select **Properties**. Next, navigate to **Configuration Properties** > **C/C++** > **Sanitizers**. ASan is enabled via compiler and linker flags, and requires your project to be recompiled to work.

![Screenshot of the project property page with Configuration Properties > C/C plus plus > Sanitizers selected. Enable Address Sanitizer is set to Yes.](media/msbuild-asan-prop-page.png)

You can pass optional ASan runtime flags by navigating to **Configuration Properties** > **Debugging** > **AddressSanitizer Runtime Flags**. Click the down-arrow to add or remove flags.

![Screenshot of the project property page with Configuration Properties > Debugging selected. Address Sanitizer Runtime Flags is `detect_leaks = 0`.](media/msbuild-asan-runtime-flags.png)

## Enable ASan for Visual Studio CMake projects

> [!NOTE]
> To build with CMake Presets, first enable ASan in your CMakeLists.txt file. For more information, see [Enable AddressSanitizer for Windows and Linux](../build/cmake-presets-vs.md#enable-addresssanitizer-for-windows-and-linux).

To enable ASan for CMake, right-click on the `CMakeLists.txt` file in **Solution Explorer** and choose **CMake Settings for Project**.

Make sure you have a Linux configuration (for example, **Linux-Debug**) selected in the left pane of the dialog:

![Screenshot of the Configurations pane with x64-Debug and Linux Debug listed as the options.](media/linux-debug-configuration.png)

The ASan options are under **General**. Enter the ASan runtime flags in the format "flag=value", separated by spaces. The UI incorrectly suggests using semi-colons. Use spaces or colons to separate flags.

![Screenshot of the Enable Address Sanitizer option showing some Address Sanitizer run time flags like detect_leaks=0.](media/cmake-settings-asan-options.png)

## Install the ASan debug symbols

To enable the ASan diagnostics, you must install its debug symbols (libasan-dbg) on your remote Linux machine or WSL installation. The version of libasan-dbg that you load depends on the version of GCC installed on your Linux machine:

|**ASan version**|**GCC version**|
| --- | --- |
|libasan0|gcc-4.8|
|libasan2|gcc-5|
|libasan3|gcc-6|
|libasan4|gcc-7|
|libasan5|gcc-8|

You can determine which version of GCC you have by using this command:

```bash
gcc --version
```

To view the version of libasan-dbg you need, run your program, and then look at the **Debug** pane of the **Output** window. The version of ASan that's loaded corresponds to the version of libasan-dbg needed on your Linux machine. You can use **Ctrl + F** to search for "libasan" in the window. If you have libasan4, for example, you see a line like this:

```Output
Loaded '/usr/lib/x86_64-linux-gnu/libasan.so.4'. Symbols loaded.
```

You can install the ASan debug bits on Linux distros that use apt with the following command. This command installs version 4:

```bash
sudo apt-get install libasan4-dbg
```

Full instructions for installing debug symbol packages on Ubuntu can be found at [Debug symbol packages](https://wiki.ubuntu.com/Debug%20Symbol%20Packages).

If ASan is enabled, Visual Studio prompts you at the top of the **Debug** pane of the **Output** window to install the ASan debug symbols.
