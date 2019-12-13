---
title: "Linker Tools Error LNK1104"
ms.date: "09/06/2019"
f1_keywords: ["LNK1104"]
helpviewer_keywords: ["LNK1104"]
ms.assetid: 9ca6f929-0efc-4055-8354-3cf5b4e636dc
---
# Linker Tools Error LNK1104

> cannot open file '*filename*'

This error is reported when the linker fails to open a file, either for reading or for writing.

The most common cause of this problem is that your program is running, or is loaded in the debugger. Or, the file is locked by another process, such as an antivirus program. Perhaps the path to the file isn't correct, or there aren't double-quotes around a path that contains spaces. The file might not exist yet, if it's built by a different process. If the path isn't specified, perhaps the file can't be found in the default directories the linker searches. Or, you don't have sufficient permission to access the file. Less commonly, you may have run out of disk space. The file may be too large, or the path to the file is too long.

To narrow down the possible causes, first check what kind of file *filename* is. Then, use the following sections to help identify and fix the specific issue.

## Can't open your app or its .pdb file

If *filename* is your executable's name, or an associated .pdb file, see if your application is already running. Then check whether it's loaded in a debugger. To fix this issue, stop the program and unload it from the debugger before building it again. If the app is open in another program, such as a resource editor, close it. In extreme cases, you may need to use Task Manager to end the process. You might also need to stop and restart Visual Studio.

Antivirus programs often temporarily block access to newly created files, especially .exe and .dll executable files. To fix this issue, try excluding your project build directories from the antivirus scanner.

## Can't open a Microsoft library file

If the file that can't be opened is one of the standard library files provided by Microsoft, such as *kernel32.lib*, you may have a project configuration error or an installation error. Verify the Windows SDK has been installed. If your project requires other Microsoft libraries, such as MFC, make sure the MFC components were also installed by the Visual Studio installer. You can run the installer again to add optional components at any time. For more information, see [Modify Visual Studio](/visualstudio/install/modify-visual-studio). Use the **Individual components** tab in the installer to choose specific libraries and SDKs.

There are no Spectre-mitigated libraries for Universal Windows (UWP) apps or components. If the error message includes *vccorlib.lib*, you may have enabled [/Qspectre](../../build/reference/qspectre.md) in a UWP project. Disable the **/Qspectre** compiler option to fix this issue. In Visual Studio, change the **Spectre Mitigation** property. It's found in the **C/C++** > **Code Generation** page of the project **Property Pages** dialog.

If the error message has a versioned Microsoft library such as *msvcr120.lib*, the platform toolset for that compiler version may not be installed. To fix this issue, you have two options: Upgrade the project to use the current platform toolset, or install the older toolset and build the project unchanged. For more information, see [Upgrading Projects from Earlier Versions of Visual C++](../../porting/upgrading-projects-from-earlier-versions-of-visual-cpp.md) and [Use native multi-targeting in Visual Studio to build old projects](../../porting/use-native-multi-targeting.md).

The error may occur when you first build for a new target platform or configuration, such as Retail, or ARM64. In the IDE, verify the **Platform toolset** and **Windows SDK Version** specified in the [General property page](../../build/reference/general-property-page-project.md) are installed. Also verify the required libraries are available in the **Library Directories** specified in the [VC++ Directories Property Page](../../build/reference/vcpp-directories-property-page.md). Check the properties for each configuration, such as Debug, Retail, x86, or ARM64. If one build works but another doesn't, compare the settings for both. Install any missing required tools and libraries.

If you build a project copied from another computer, the library installation locations may be different. Check the **Library Directories** property on the [VC++ Directories Property Page](../../build/reference/vcpp-directories-property-page.md) for the project and update it if necessary. You can see and edit the current library paths set in the IDE. In the **VC++ Directories** page, choose the drop-down control for the **Library Directories** property, then choose **Edit**. The **Evaluated value** section of the **Library Directories** dialog lists the current paths searched for library files.

This error can also occur when the path to the Windows SDK is out of date. It may happen if you install a newer Windows SDK independently. To fix it, in Visual Studio, update the paths specified in the [VC++ Directories property page](../../build/reference/vcpp-directories-property-page.md) to match the new SDK. If you use the Developer Command Prompt, make sure the batch file that initializes the environment variables is updated for the new SDK paths. This problem can be avoided by using the Visual Studio installer to install updated SDKs.

## Can't open a third-party library file

There are several common causes for this issue:

- The path to your library file may be incorrect, or not wrapped in double-quotes. Or, you may not have specified it to the linker.

- You may have installed a 32-bit version of the library, but you're building for 64 bits, or the other way around.

- The library may have dependencies on other libraries that aren't installed.

To fix a path issue, verify that the LIB environment variable is set. Make sure it contains all the directories for the libraries you use, for every configuration you build. In the IDE, the LIB variable is set by the **Library Directories** property on the [VC++ Directories Property Page](../../build/reference/vcpp-directories-property-page.md). Make sure all the directories that contain the libraries you need are listed here, for every configuration you build.

You might need to supply a library directory that overrides a standard library directory. On the command line, use the [/LIBPATH](../../build/reference/libpath-additional-libpath.md) option. In the IDE, use the **Additional Library Directories** property in the **Configuration Properties > Linker > General** property page for your project.

Make sure you install every version of the library you need for the configurations you build. Consider using the [vcpkg](../../vcpkg.md) package management utility to automate the installation and setup for many common libraries. When you can, it's best to build your own copies of third-party libraries. Then you're sure to have all the local dependencies that the libraries require, built for the same configurations as your project.

## Can't open a file built by your project

You may see this error if the file *filename* doesn't exist yet when the linker tries to access it. It can happen when one project depends on another project in a solution, but the projects don't build in the correct order. To fix this issue, make sure your project references are set in the project that uses the file. Then the missing file gets built before it's required. For more information, see [Adding references in Visual Studio C++ projects](../../build/adding-references-in-visual-cpp-projects.md) and [Managing references in a project](/visualstudio/ide/managing-references-in-a-project).

## Cannot open file 'C:\\Program.obj'

If you see the filename *C:\\Program.obj* in the error message, wrap your library paths in double quotes. This error happens when an unwrapped path that starts *C:\\Program Files* gets passed to the linker. Unwrapped paths can also cause similar errors that show an unexpected .obj file in the root of your drive.

To fix this issue for command-line builds, check the [/LIBPATH](../../build/reference/libpath-additional-libpath.md) option parameters. Also check the paths specified in the LIB environment variable, and the paths specified on the command line. Make sure to use double-quotes around any paths that include spaces.

To fix this issue in the IDE, add quotes as necessary to the following properties for your project:

- The **Library Directories** property on the [Configuration Properties > VC++ Directories](../../build/reference/vcpp-directories-property-page.md) property page,

- The **Additional Library Directories** property in the **Configuration Properties > Linker > General** property page,

- The **Additional Dependencies** property in the **Configuration Properties > Linker > Input** property page.

### Other common issues

This error can occur when the library filename or path specified to the linker is incorrect. Or, when the path has an invalid drive specification. Look on the command line or in any [#pragma comment( lib, "library_name" )](../../preprocessor/comment-c-cpp.md) directive for issues. Check your spelling and the file extension, and verify the file exists at the specified location.

An antivirus program may have the file open for scanning. Antivirus programs often temporarily block access to newly created files. To fix this issue, try excluding your project build directories from the antivirus scanner.

If you're using a parallel build option, it's possible that Visual Studio has locked the file on another thread. To fix this issue, verify the same code object or library isn't built in multiple projects. Use build dependencies or project references to pick up built binaries in your project.

When you specify individual libraries in the **Additional Dependencies** property directly, use spaces to separate the library names. Don't use commas or semicolons. If you use the **Edit** menu item to open the **Additional Dependencies** dialog box, use newlines to separate the names, not commas, semicolons, or spaces. Also use newlines when you specify library paths in the **Library Directories** and **Additional Library Directories** dialog boxes.

You may see this error when the path for *filename* expands to more than 260 characters. Change the names or rearrange your directory structure if needed to shorten the paths to the required files.

This error can occur because the file is too large. Libraries or object files more than a gigabyte in size may cause problems for the 32-bit linker. A possible fix for this issue is to use the 64-bit toolset. For more information on how to use the 64-bit toolset at the command line, see [How to: Enable a 64-Bit Visual C++ Toolset on the Command Line](../../build/how-to-enable-a-64-bit-visual-cpp-toolset-on-the-command-line.md). For information on how to use the 64-bit toolset in the IDE, see [Using MSBuild with the 64-bit Compiler and Tools](../../build/walkthrough-using-msbuild-to-create-a-visual-cpp-project.md#using-msbuild-to-build-your-project). Also see this Stack Overflow post: [How to make Visual Studio use the native amd64 toolchain](https://stackoverflow.com/questions/19820718/how-to-make-visual-studio-use-the-native-amd64-toolchain/23793055).

This error can occur if you have insufficient file permissions to access *filename*. It may happen if you use an ordinary user account to access library files in protected system directories. Or, if you use files copied from other users that have their original permissions set. To fix this issue, move the file to a writeable project directory. If the moved file has inaccessible permissions, run the takeown.exe command in an Administrator command window to take ownership of the file.

The error can occur when you don't have enough disk space. The linker uses temporary files in several cases. Even if you have sufficient disk space, a large link can deplete or fragment the available disk space. Consider using the [/OPT (Optimizations)](../../build/reference/opt-optimizations.md) option; doing transitive COMDAT elimination reads all the object files multiple times.

If the *filename* is named LNK*nnn*, it's a filename generated by the linker for a temporary file. The directory specified in the TMP environment variable may not exist. Or, more than one directory may be specified for the TMP environment variable. Only one directory path should be specified for the TMP environment variable.
