---
description: "Learn more about: Visual Studio projects - C++"
title: "Visual Studio Projects - C++"
ms.date: "10/25/2019"
helpviewer_keywords: ["ATL projects, creating", "Visual Studio C++ projects, creating", "projects [C++], creating", "Visual Studio C++ projects", "ATL projects"]
ms.assetid: 11003cd8-9046-4630-a189-a32bf3b88047
---
# Visual Studio projects - C++

A *Visual Studio project* is a project based on the MSBuild build system. MSBuild is the native build system for Visual Studio and is generally the best build system to use for Windows-specific programs. MSBuild is tightly integrated with Visual Studio, but you can also use it from the command line. For cross-platform projects, or projects that use open-source libraries, we recommend using [CMake projects in Visual Studio](cmake-projects-in-visual-studio.md) in Visual Studio 2017 and later. For information about upgrading MSBuild projects from older versions of Visual Studio, see the [Microsoft C++ Porting and Upgrading Guide](../porting/visual-cpp-porting-and-upgrading-guide.md).

## Create a project

::: moniker range="msvc-160"

You can create C++ projects by choosing **File** > **New** > **Project**, then setting the **Language** to C++. In the results list you see a list of project templates which you can filter by setting the **Platform** or **Project Type** and by typing keywords into the search box.

   ![Visual Studio 2019 Project Templates](../build/media/vs2019-choose-console-app.png "Visual Studio 2019 New Project Dialog")

::: moniker-end

::: moniker range="msvc-150"

You can create C++ projects by choosing **File** > **New** > **Project**, then choosing Visual C++ in the left pane. In the center pane you see a list of project templates:

   ![Project Templates](../overview/media/vs2017-new-project.png "Visual Studio 2017 New Project Dialog")

::: moniker-end

For more information about all the default project templates that are included in Visual Studio, see [C++ project templates in Visual Studio](reference/visual-cpp-project-types.md). You can create your own project templates. For more information, see [How to: Create project templates](/visualstudio/ide/how-to-create-project-templates).

After you create a project, it appears in the [Solution Explorer](/visualstudio/ide/solutions-and-projects-in-visual-studio) window:

   ![Solution Explorer](media/mathlibrary-solution-explorer-153.png)

When you create a new project, a solution file (.sln) is also created. You can add additional projects to the solution by right-clicking on it in **Solution Explorer**. The solution file is used to coordinate build dependencies when you have multiple related projects but doesn't do much more than that. All the compiler options are set at the project level.

## Add items

Add source code files, icons, or any other items to your project by right-clicking on the project in **Solution Explorer** and choosing **Add > New** or **Add > Existing**.

## Add third party libraries

To add third-party libraries, use the [vcpkg](vcpkg.md) package manager. Run the Visual Studio integration step to set up the paths to that library when you reference it from any Visual Studio project.

## Set compiler options and other build properties

To configure build settings for a project, right-click on the project in **Solution Explorer** and choose **Properties**. For more information, see [Set C++ compiler and build properties in Visual Studio](working-with-project-properties.md).

## Compile and run

To compile and run the new project, press **F5** or click the *debug dropdown* with the green arrow on the main toolbar. The *configuration dropdown* is where you choose whether to perform a *Debug* or *Release* build (or some other custom configuration).

A new project compiles without errors. When adding your own code, you may occasionally introduce an error or trigger a warning. An error prevents the build from completing; a warning does not. All errors and warnings will appear both in the Output Window and in the Error List when you build the project.

   ![Output window and error list](../overview/media/vs2017-output-error-list.png)

In the Error List, you can press **F1** on a highlighted error to go to its documentation topic.

## In This Section

[Set C++ compiler and build properties in Visual Studio](working-with-project-properties.md)<br/>
How to use Property Pages and Property Sheets to specify your project settings.

[Reference libraries and components at build time](adding-references-in-visual-cpp-projects.md)<br/>
How to include libs, DLLs, COM and .NET components in a project.

[Organize Project Output Files](how-to-organize-project-output-files-for-builds.md)<br/>
How to customize the location of the executable files created in the build process.

[Custom Build Steps and Build Events](understanding-custom-build-steps-and-build-events.md)<br/>
How to add any arbitrary command to the build process at specified points.

[Create a project from existing code](how-to-create-a-cpp-project-from-existing-code.md)<br/>
How to create a new Visual Studio project from a loose collection of source files.

## See also

[Projects and build systems](projects-and-build-systems-cpp.md)<br>
[Microsoft C++ Porting and Upgrading Guide](../porting/visual-cpp-porting-and-upgrading-guide.md)
