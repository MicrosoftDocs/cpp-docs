---
description: "Learn more about: How to: Organize Project Output Files for Builds"
title: "How to: Organize Project Output Files for Builds"
ms.date: "05/06/2019"
helpviewer_keywords: ["C++, output files", "output files, organizing"]
ms.assetid: 521d95ea-2dcc-4da0-b5eb-ac3e57941446
---
# How to: Organize Project Output Files for Builds

This topic describes best practices for organizing project output files. Build errors can occur when you set up project output files incorrectly. This topic also outlines the advantages and disadvantages of each alternative for organizing your project output files.

## Referencing CLR Assemblies

#### To reference assemblies with #using

1. You can reference an assembly directly from your code by using the #using directive, such as `#using <System.Data.dll>`. For more information, see [#using Directive](../preprocessor/hash-using-directive-cpp.md).

   The file specified can be a .dll, .exe, .netmodule, or .obj, as long as it is in MSIL. The referenced component can be built in any language. Using this option, you will have access to IntelliSense since the metadata will be extracted from the MSIL. The file in question must be in the path for the project; otherwise, the project will not compile and IntelliSense will not be available. An easy way to determine whether the file is in the path is to right-click on the #using line and choose the **Open document** command. You will be notified if the file cannot be found.

   If you do not want to put the full path to the file, you can use the **/AI** compiler option to edit the search path for #using references. For more information, see [/AI (Specify Metadata Directories)](reference/ai-specify-metadata-directories.md).

#### To reference assemblies with /FU

1. Instead of referencing an assembly directly from a code file as described above, you can use the **/FU** compiler option. The advantage to this method is that you do not have to add a separate #using statement to every file that references a given assembly.

   To set this option, open the **Properties Pages** for the project. Expand the **Configuration Properties** node, and then expand the **C/C++** node and select **Advanced**. Add the desired assemblies next to **Force #using**. For more information, see [/FU (Name Forced #using File)](reference/fu-name-forced-hash-using-file.md).

#### To reference assemblies with Add New Reference

1. This is the easiest way to use CLR assemblies. First, make sure the project is compiled with the **/clr** compiler option. Then, right click the project from the **Solution Explorer** and select **Add**, **References**. The **Property Pages** dialog will appear.

1. From the **Property Pages** dialog, select **Add New Reference**. A dialog will appear listing all .NET, COM, and other assemblies available in the current project. Select the desired assembly and click **OK**.

   Once a project reference is set, the corresponding dependencies are automatically handled. In addition, since metadata is part of an assembly, there is no need to add a header file or prototype the elements that are being used from managed assemblies.

## Referencing Native DLLs or Static Libraries

#### To reference native DLLs or static libraries

1. Reference the appropriate header file in your code using the #include directive. The header file must be in the include path or part of the current project. For more information, see [#include Directive (C/C++)](../preprocessor/hash-include-directive-c-cpp.md).

1. You can also set project dependencies. Setting project dependencies guarantees two things. First, it ensures that projects are built in the right order so that a project can always find the dependent files it needs. Second, it implicitly adds the dependent project's output directory to the path so that files can be found easily at link-time.

1. To deploy the application, you will need to place the DLL in an appropriate place. This can be one of the following:

   1. The same path as the executable.

   1. Anywhere in the system path (the **path** environment variable).

   1. In the side-by-side assembly. For more information, see [Building C/C++ Side-by-side Assemblies](building-c-cpp-side-by-side-assemblies.md).

## Working with Multiple Projects

By default, projects are built such that all output files are created in a subdirectory of the project directory. The directory is named based on the build configuration (e.g. Debug or Release). In order for sibling projects to refer to each other, each project must explicitly add the other project output directories to their path in order for linking to succeed. This is done automatically when you set the project dependencies. However, if you do not use dependencies, you must carefully handle this because builds can become very difficult to manage. For example, when a project has Debug and Release configurations, and it includes an external library from a sibling project, it should use a different library file depending on which configuration is being built. Thus, hard-coding these paths can be tricky.

All essential output files (such as executables, incremental linker files, and PDB files) are copied into a common solution directory. Thus, when working with a solution that contains a number of C++ projects with equivalent configurations, all the output files are centralized for simplified linking and deployment. You can be sure that their application/library will work as expected if they keep those files together (since the files are guaranteed to be in the path).

The location of output files can be a major issue when deploying to a production environment. While running projects in the IDE, the paths to included libraries are not necessarily the same as in the production environment. For example, if you have `#using "../../lib/debug/mylib.dll"` in your code but then deploy mylib.dll into a different relative position, the application will fail at runtime. To prevent this, you should avoid using relative paths in #include statements in your code. It is better to ensure that the necessary files are in the project build path and similarly ensuring that the corresponding production files are properly placed.

#### How to specify where output files go

1. The location of project output settings can be found in the project's **Property Pages**. Expand the node next to **Configuration Properties** and select **General**. The output location is specified next to **Output Directory**. For more information, see [General Property Page (Project)](reference/general-property-page-project.md).

## See also

[C++ project types in Visual Studio](reference/visual-cpp-project-types.md)
