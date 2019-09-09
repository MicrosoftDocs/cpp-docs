---
title: "Linker Tools Error LNK1104"
ms.date: "09/06/2019"
f1_keywords: ["LNK1104"]
helpviewer_keywords: ["LNK1104"]
ms.assetid: 9ca6f929-0efc-4055-8354-3cf5b4e636dc
---
# Linker Tools Error LNK1104

> cannot open file '*filename*'

The linker couldn't open the specified file. The most common causes of this problem are that the file is in use or locked by another process. It's also possible the file doesn't exist, or can't be found in one of the directories the linker searches. Or, you may not have sufficient permission to access the file. Less commonly, you may have run out of disk space, the file may be too large, or the path to the file may be too long.

## Possible causes and solutions

This error can occur when the linker attempts to open a file either for reading or for writing. To narrow down the possible causes, first check what kind of file it is. Then, use the following sections to help identify and fix the specific issue.

### Can't open your app or its .pdb file

If the filename is the executable your project builds, or an associated .pdb file, the most common cause is that your application is already running when you try to rebuild it, or it's loaded in a debugger. To fix this issue, stop the program and unload it from the debugger before building it again. If the app is open in another program, such as a resource editor, close it. In extreme cases, you may need to use Task Manager to terminate the process, or stop and restart Visual Studio.

Antivirus programs often temporarily block access to newly created files, especially .exe and .dll executable files. To fix this issue, try excluding your project build directories from the antivirus scanner.

### Can't open a Microsoft Library file

If the file that can't be opened is one of the standard library files provided by Microsoft, such as kernel32.lib, you may have a project configuration error or an installation error. Verify that the Windows SDK has been installed, and if your project requires other Microsoft libraries such as MFC, make sure that the MFC components were also installed by the Visual Studio installer. You can run the installer again to add optional components at any time. For more information, see [Modify Visual Studio](/visualstudio/install/modify-visual-studio). Use the Individual components tab in the installer to choose specific libraries and SDKs.

There are no Spectre-mitigated libraries for Universal Windows (UWP) apps or components. If the error report mentions the *vccorlib.lib* file, you may have enabled [/Qspectre](../../build/reference/qspectre.md) in a UWP project. Disable the **/Qspectre** compiler option to fix this issue. In Visual Studio, change the **Spectre Mitigation** property, found in the **C/C++** > **Code Generation** page of the project **Property Pages** dialog.

If you're building a project that was created using an older version of Visual Studio, the platform toolset and libraries for that version may not be installed. If the error message occurs for a versioned library name, such as msvcr100.lib, this is probably the cause. To fix this issue, you have two options: you can upgrade the project to use the current platform toolset you have installed, or you can install the older toolset and build the project unchanged. For more information, see [Upgrading Projects from Earlier Versions of Visual C++](../../porting/upgrading-projects-from-earlier-versions-of-visual-cpp.md) and [Use native multi-targeting in Visual Studio to build old projects](../../porting/use-native-multi-targeting.md).

If you see this error when you build for a new target platform or configuration, the libraries for that project configuration or platform toolset may not be installed. Verify that the **Platform toolset** and **Windows SDK Version** specified in the [General property page](../../build/reference/general-property-page-project.md) for your project are installed, and verify that the required libraries are available in the **Library Directories** specified in the [VC++ Directories Property Page](../../build/reference/vcpp-directories-property-page.md) for your configuration settings. There are separate settings for Debug and Retail configurations, as well as 32-bit and 64-bit configurations, so if one build works but another causes an error, make sure the settings are correct and the required tools and libraries are installed for every configuration you build.

If you are using the Visual Studio IDE to build a project that was copied from another computer, the installation locations for libraries may be different. Check the **Library Directories** property on the [VC++ Directories Property Page](../../build/reference/vcpp-directories-property-page.md) for the project and update it if necessary. To see and edit the current library paths set in the IDE, choose the drop-down control for the **Library Directories** property and choose **Edit**. The **Evaluated value** section of the **Library Directories** dialog lists the current paths searched for library files.

This error can also occur when the path to the Windows SDK is out of date. If you have installed a version of the Windows SDK that is newer than your version of Visual Studio, make sure that the paths specified in the [VC++ Directories Property Page](../../build/reference/vcpp-directories-property-page.md) are updated to match the new SDK. If you use the Developer Command Prompt, make sure that the batch file that initializes the environment variables is updated for the new SDK paths. This problem can be avoided by using the Visual Studio installer to install updated SDKs.

### Cannot open a third-party library file

There are several common causes for this issue:

- The path to your library file may be incorrect, or you may not have specified it to the linker.

- You may have installed a 32-bit version of the library, but you are building for 64-bits, or vice-versa.

- The library may have dependencies on other libraries that are not installed.

To fix a path issue, verify that the LIB environment variable is set and contains all the directories for the libraries you use, for every configuration you build. In the IDE, the LIB variable is set by the **Library Directories** property on the [VC++ Directories Property Page](../../build/reference/vcpp-directories-property-page.md). Make sure all the directories that contain the libraries you need are listed here, for every configuration you build.

If you need to supply a library directory that overrides a standard library directory, you can use the [/LIBPATH](../../build/reference/libpath-additional-libpath.md) option on the command line, or in the IDE, you can use the **Additional Library Directories** property in the **Configuration Properties > Linker > General** property page for your project.

Make sure you have installed every version of the library you need for the configurations you build. Consider using the [vcpkg](../../vcpkg.md) package management utility to automate the installation and setup for many common libraries. When you can, it's best to build your own copies of third-party libraries, so you are sure to have all the local dependencies that the libraries require, and they are built for the same configurations as your project.

### Cannot open a file built by your project

You may see this error if the file *filename* is built by your solution, but does not yet exist when the linker tries to access it. This can happen when one project depends on another project, but the projects are not built in the correct order. To fix this issue, make sure your project references are set in the project that uses the file so the missing file is built before it is required. For more information, see [Adding references in Visual Studio C++ projects](../../build/adding-references-in-visual-cpp-projects.md) and [Managing references in a project](/visualstudio/ide/managing-references-in-a-project).

### Cannot open file 'C:\\Program.obj'

If you see this error, or a similar error involving an unexpected .obj file in the root of your drive, the problem is almost certainly a library path that is not wrapped in double quotes.

To fix this issue for command-line builds, check the [/LIBPATH](../../build/reference/libpath-additional-libpath.md) option parameters, the paths specified in the LIB environment variable, and the paths specified on the command line, and make sure to use double-quotes around any paths that include spaces.

To fix this issue in the IDE, check the **Library Directories** property on the [Configuration Properties > VC++ Directories](../../build/reference/vcpp-directories-property-page.md) property page, the **Additional Library Directories** property in the **Configuration Properties > Linker > General** property page, and the **Additional Dependencies** property in the **Configuration Properties > Linker > Input** property page for your project. Make sure all the directory paths that contain the libraries you need are wrapped in double-quotes if necessary.

### Other common issues

This error can occur when the library filename or path specified to the linker on the command line or in a [#pragma comment( lib, "library_name" )](../../preprocessor/comment-c-cpp.md) directive is incorrect, or the path has an invalid drive specification. Check your spelling and the file extension, and verify the file exists at the specified location.

Another program may have the file open and the linker cannot write to it. Antivirus programs often temporarily block access to newly created files. To fix this issue, try excluding your project build directories from the antivirus scanner.

If you are using a parallel build option, it's possible that Visual Studio has locked the file on another thread. To fix this issue, verify that you do not build the same code object or library in multiple projects, and that you use build dependencies or project references to pick up built binaries in your project.

When you specify individual libraries in the **Additional Dependencies** property directly, use spaces to separate the library names, not commas or semicolons. If you use the **Edit** menu item to open the **Additional Dependencies** dialog box, use newlines to separate the names, not commas, semicolons, or spaces. Also use newlines when you specify library paths in the **Library Directories** and **Additional Library Directories** dialog boxes.

You may see this error when the path for *filename* expands to more than 260 characters. Change the names or rearrange your directory structure if needed to shorten the paths to the required files.

This error can occur because the file is too large. Libraries or object files more than a gigabyte in size may cause problems for the 32-bit linker. A possible fix for this issue is to use the 64-bit toolset. For more information on how to do this at the command line, see [How to: Enable a 64-Bit Visual C++ Toolset on the Command Line](../../build/how-to-enable-a-64-bit-visual-cpp-toolset-on-the-command-line.md). For information on how to do this in the IDE, see [Using MSBuild with the 64-bit Compiler and Tools](../../build/walkthrough-using-msbuild-to-create-a-visual-cpp-project.md#using-msbuild-to-build-your-project)  and this Stack Overflow post: [How to make Visual Studio use the native amd64 toolchain](https://stackoverflow.com/questions/19820718/how-to-make-visual-studio-use-the-native-amd64-toolchain/23793055).

This error can occur if you have insufficient file permissions to access *filename*. This can happen if you use an ordinary user account and attempt to access library files in protected system directories, or use files copied from other users that have their original permissions set. To fix this issue, move the file to a writeable project directory. If the file is in a writeable directory but has inaccessible permissions, you can use an Administrator command prompt and run the takeown.exe command to take ownership of the file.

The error can occur when you don't have enough disk space. The linker uses temporary files in several cases. Even if you have sufficient disk space, a very large link can deplete or fragment the available disk space. Consider using the [/OPT (Optimizations)](../../build/reference/opt-optimizations.md) option; doing transitive COMDAT elimination reads all the object files multiple times.

If the *filename* is named LNK*nnn*, which is a filename generated by the linker for a temporary file, the directory specified in the TMP environment variable may not exist, or more than one directory may be specified for the TMP environment variable. Only one directory path should be specified for the TMP environment variable.
