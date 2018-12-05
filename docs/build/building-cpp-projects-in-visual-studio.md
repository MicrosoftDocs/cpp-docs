---
title: "Building C++ Projects in Visual Studio"
ms.date: "11/04/2016"
helpviewer_keywords: ["Visual C++ projects, building", "projects [C++], building", "builds [C++], about building in Visual Studio"]
ms.assetid: 9e8bc1a2-bb17-4951-937a-c757ed88d2d1
---
# Building C++ Projects in Visual Studio

In the Visual Studio integrated development environment (IDE), there are several ways to build an entire solution or just one project in it. You can also modify build settings and specify custom build steps to make your development process more efficient.

To build a solution that's open in Visual Studio and selected in **Solution Explorer**, you can:

- On the menu bar, choose **Build**, **Build Solution**.

- Or, in **Solution Explorer**, open the shortcut menu for the solution and then choose **Build Solution**.

- Or, press F7. (This is the default keyboard shortcut for the C/C++ development settings.)

- Or, in the [Command Window](/visualstudio/ide/reference/command-window) (on the menu bar, choose **View**, **Other Windows**, **Command Window**), enter `Build.BuildSolution`.

- Or, in the [Quick Launch](/visualstudio/ide/reference/quick-launch-environment-options-dialog-box) box, enter `build build solution`.

To build a project that's selected in **Solution Explorer**, you can:

- On the menu bar, choose **Build**, **Build \<Project Name>**.

- Or, in **Solution Explorer**, open the shortcut menu for the project and then choose **Build**.

- Or, in the Command Window (on the menu bar, choose **View**, **Other Windows**, **Command Window**), enter `Build.BuildOnlyProject`.

- Or, in the Quick Launch box, enter `build project only build only <project name>`.

When you build a Visual C++ application in Visual Studio, you can modify many of the build's settings in the project's Property Pages dialog box. For information about how to set project properties, see [Working with Project Properties](working-with-project-properties.md).

For an example about how to use the IDE to create, build, and debug a C++ project, see [Walkthrough: Explore the Visual Studio IDE with C++](/visualstudio/ide/getting-started-with-cpp-in-visual-studio). For an example about how to use the IDE to build a C++/CLR project, see [Walkthrough: Compiling a C++ Program that Targets the CLR in Visual Studio](walkthrough-compiling-a-cpp-program-that-targets-the-clr-in-visual-studio.md). For an example about how to use the IDE to create a Windows Runtime app, see [Create your first Windows Runtime app using C++](https://msdn.microsoft.com/library/windows/apps/hh974580.aspx).

To read more about how to build, modify build settings, and specify custom build steps, see the following articles.

## In This Section

[Understanding Custom Build Steps and Build Events](understanding-custom-build-steps-and-build-events.md)<br>
Describes how to customize the build process in the integrated development environment.

[Common Macros for Build Commands and Properties](common-macros-for-build-commands-and-properties.md)<br>
Lists macros that you can use where strings are accepted.

[Building External Projects](building-external-projects.md)<br>
Discusses building projects that use facilities outside the integrated development environment.

[Project Files](project-files.md)<br>
Presents the XML structure of a .vcxproj file.

## Related Sections

[VC++ Directories, Projects, Options Dialog Box](vcpp-directories-property-page.md)<br>
(MSBuild projects only) Discusses how to modify the search path for executable files, include files, library files, and source code files during a build.

[Compiling and Building](/visualstudio/ide/compiling-and-building-in-visual-studio)<br>
Provides information on building within Visual Studio.

[Building C/C++ Programs](../build/building-c-cpp-programs.md)<br>
Provides links to topics describing building your program from the command line or from the integrated development environment of Visual Studio.

[C/C++ Building Reference](../build/reference/c-cpp-building-reference.md)<br>
Provides links to an overview of building programs in C++, compiler and linker options, and additional build tools.

[Upgrading Projects from Earlier Versions of Visual C++](../porting/upgrading-projects-from-earlier-versions-of-visual-cpp.md)<br>
Provides links to topics covering issues on upgrading your C++ project to more recent versions of the compiler toolset.

[Visual C++ Porting and Upgrading Guide](../porting/visual-cpp-porting-and-upgrading-guide.md)
  Detailed information about how to upgrade C++ applications that were created in earlier versions of Visual Studio, and also how to migrate applications that were created by using tools other than Visual Studio.

## See Also

[Universal Windows Apps (C++)](../windows/universal-windows-apps-cpp.md)