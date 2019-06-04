---
title: "How to: Integrate Custom Tools into the Project Properties"
ms.date: "05/16/2019"
helpviewer_keywords: ["msbuild (c++), howto: integrate custom tools"]
ms.assetid: f32d91a4-44e9-4de3-aa9a-1c7f709ad2ee
---
# How to: Integrate Custom Tools into the Project Properties

You can add custom tool options to the Visual Studio **Property Pages** window by creating an underlying XML schema file.

The **Configuration Properties** section of the **Property Pages** window displays setting groups that are known as *rules*. Every rule contains the settings for a tool or a group of features. For example, the **Linker** rule contains the settings for the linker tool. The settings in a rule can be subdivided into *categories*.

This document explains how to create a file in a set directory that contains properties for your custom tool so that the properties are loaded when Visual Studio starts. For information about how to modify the file, see [Platform Extensibilty Part 2](https://blogs.msdn.microsoft.com/vsproject/2009/06/18/platform-extensibility-part-2/) on the Visual Studio Project Team blog.

### To add or change project properties

1. In the XML editor, create an XML file.

1. Save the file in the Visual Studio `VCTargets\1033` folder. You will have a different path for each edition of Visual Studio that is installed and each language. For example, the default folder path for Visual Studio 2019 Community edition in English is `C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\Common7\IDE\VC\VCTargets`. Adjust the path for your language and Visual Studio edition. Every rule in the **Property Pages** window is represented by an XML file in this folder. Make sure that the file is uniquely named in the folder.

1. Copy the content of `%ProgramFiles%\Microsoft Visual Studio\2019\<VS Edition>\Common7\IDE\VC\VCTargets\<LCID>\cl.xml` (or whatever your path is), close it without saving changes, and then paste the content in your new XML file. You can use any XML schema file - this is just one that can be used so you start with a template.

1. In the new XML file, modify the content according to your requirements. Make sure to change the **Rule Name** and **Rule.DisplayName** at the top of the file.

1. Save the changes and close the file.

1. The XML files in `%ProgramFiles%\Microsoft Visual Studio\2019\<VS Edition>\Common7\IDE\VC\VCTargets\<LCID>` (or wherever you saved them) are loaded when Visual Studio starts. Therefore, to test the new file, restart Visual Studio.

1. In **Solution Explorer**, right-click a project and then click **Properties**. In the **Property Pages** window, in the left pane, verify that there is a new node with the name of your Rule.

## See also

[MSBuild on the command line - C++](msbuild-visual-cpp.md)
