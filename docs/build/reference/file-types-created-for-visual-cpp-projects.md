---
description: "Learn more about: File Types Created for Visual Studio C++ Projects"
title: "File Types Created for Visual Studio C++ projects"
ms.date: "04/08/2019"
helpviewer_keywords: ["header files [C++], Visual Studio projects", "ActiveX controls [C++], Help files", "def files", "project items [C++], files", "Visual Studio C++ projects, files and directories", "resource files, created by wizard", "files [C++], extensions", "Help files, for ActiveX controls", "Web projects [C++], adding items", ".def files", "licensing ActiveX controls"]
ms.assetid: 2b0ee2e0-ae81-4185-9bb9-11da3c99a283
---
# File Types Created for Visual Studio C++ Projects

Many types of files are associated with Visual Studio projects for classic desktop applications. The actual files included in your project depend on the project type and the options you select when using a wizard.

- [Project and Solution Files](project-and-solution-files.md)

- [CLR Projects](files-created-for-clr-projects.md)

- [ATL Program or Control Source and Header Files](atl-program-or-control-source-and-header-files.md)

- [MFC Program or Control Source and Header Files](mfc-program-or-control-source-and-header-files.md)

- [Precompiled Header Files](../creating-precompiled-header-files.md)

- [Resource Files](resource-files-cpp.md)

- [Help Files (WinHelp)](help-files-winhelp.md)

- [Hint Files](hint-files.md)

When you create a Visual Studio project, you might create it in a new solution, or you might add a project to an existing solution. Non-trivial applications are commonly developed with multiple projects in a solution.

Projects usually produce either an EXE or a DLL. Projects can be dependent on each other; during the build process, the Visual Studio environment checks dependencies both within and between projects. Each project usually has core source code. Depending on the kind of project, it may have many other files containing various aspects of the project. The contents of these files are indicated by the file extension. The Visual Studio development environment uses the file extensions to determine how to handle the file contents during a build.

The following table shows common files in a Visual Studio project, and identifies them with their file extension.

|File extension|Type|Contents|
|--------------------|----------|--------------|
|.asmx|Source|Deployment file.|
|.asp|Source|Active Server Page file.|
|.atp|Project|Application template project file.|
|.bmp, .dib, .gif, .jpg, .jpe, .png|Resource|General image files.|
|.bsc|Compiling|The browser code file.|
|.cpp, .c|Source|Main source code files for your application.|
|.cur|Resource|Cursor bitmap graphic file.|
|.dbp|Project|Database project file.|
|.disco|Source|The dynamic discovery document file. Handles XML Web service discovery.|
|.exe, .dll|Project|Executable or dynamic-link library files.|
|.h|Source|A header (include) file.|
|.htm, .html, .xsp, .asp, .htc, .hta, .xml|Resource|Common Web files.|
|.HxC|Project|Help project file.|
|.ico|Resource|Icon bitmap graphic file.|
|.idb|Compiling|The state file, containing dependency information between source files and class definitions. It can be used by the compiler during incremental compilation. Use the [/Fd](fd-program-database-file-name.md) compiler option to specify the name of the .idb file.|
|.idl|Compiling|An interface definition language file. For more information, see [Interface Definition (IDL) File](/windows/win32/Rpc/the-interface-definition-language-idl-file) in the Windows SDK.|
|.ilk|Linking|Incremental link file. For more information, see [/INCREMENTAL](incremental-link-incrementally.md).|
|.map|Linking|A text file containing linker information. Use the [/Fm](fm-name-mapfile.md) compiler option to name the map file. For more information, see [/MAP](map-generate-mapfile.md).|
|.mfcribbon-ms|Resource|A resource file that contains the XML code that defines the MFC buttons, controls, and attributes in the ribbon. For more information, see [Ribbon Designer](../../mfc/ribbon-designer-mfc.md).|
|.obj, .o||Object files, compiled but not linked.|
|.pch|Debug|Precompiled header file.|
|.rc, .rc2|Resource|[Resource script files](../../windows/working-with-resource-files.md) to generate resources.|
|.sbr|Compiling|Source browser intermediate file. The input file for [BSCMAKE](bscmake-options.md).|
|.sln|Solution|The [solution](/visualstudio/ide/solutions-and-projects-in-visual-studio) file.|
|.suo|Solution|The solution options file.|
|.txt|Resource|A text file, usually the "readme" file.|
|.vap|Project|A Visual Studio Analyzer project file.|
|.vbg|Solution|A compatible project group file.|
|.vbp, .vip, .vbproj|Project|The Visual Basic project file.|
|.vcxitems|Project|Shared Items project for sharing code files between multiple C++ projects. For more information, see [Project and Solution Files](project-and-solution-files.md).|
|.vcxproj|Project|The Visual Studio project file. For more information, see [Project and Solution Files](project-and-solution-files.md).|
|.vcxproj.filters|Project|Used when you use Solution Explorer to add a file to a project. The filters file defines where in the Solution Explorer tree view to add the file, based on its file name extension.|
|.vdproj|Project|The Visual Studio deployment project file.|
|.vmx|Project|The macro project file.|
|.vup|Project|The utility project file.|

For information on other files associated with Visual Studio, see [File Types and File Extensions in Visual Studio .NET](/visualstudio/ide/reference/project-and-solution-file-types).

Project files are organized into folders in Solution Explorer. Visual Studio creates a folder for source files, header files, and resource files, but you can reorganize these folders or create new ones. You can use folders to organize explicitly logical clusters of files within the hierarchy of a project. For example, you could create folders to contain all your user interface source files. Or, folders for specifications, documentation, or test suites. All file folder names should be unique.

When you add an item to a project, you add the item to all configurations for that project. The item is added whether it's buildable or not. For example, if you have a project named MyProject, adding an item adds it to both the Debug and Release project configurations.

## See also

[Creating and Managing Visual Studio C++ Projects](../creating-and-managing-visual-cpp-projects.md)<br>
[Visual Studio C++ Project Types](visual-cpp-project-types.md)<br>
