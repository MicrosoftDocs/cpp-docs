---
description: "Learn more about: Files Created for CLR Projects"
title: "Files Created for CLR Projects"
ms.date: "11/04/2016"
helpviewer_keywords: ["Visual Studio C++ projects, CLR programming", ".NET applications, C++"]
ms.assetid: 59ae9020-5f26-4ad0-bbdd-97c2e2023a20
---
# Files Created for CLR Projects

When you use Visual C++ templates to create your projects, several files are created, depending on which template you use. The following table lists all the files that are created by project templates for .NET Framework projects.

|File name|File description|
|---------------|----------------------|
|AssemblyInfo.cpp|The file that contains information (that is, attributes, files, resources, types, versioning information, signing information, and so on) for modifying the project's assembly metadata. For more information see [Assembly Concepts](/dotnet/framework/app-domains/assembly-contents).|
|*projname*.asmx|A text file that references managed classes that encapsulate the functionality of the XML Web service.|
|*projname*.cpp|The main source file and entry point into the application that Visual Studio created for you. Identifies the project .dll file and the project namespace. Provide your own code in this file.|
|*projname*.vsdisco|An XML deployment file containing links to other resources that describe the XML Web service.|
|*projname*.h|The main include file for the project, which contains all declarations, global symbols, and `#include` directives for other header files.|
|*projname*.sln|The solution file used within the development environment to organize all elements of your project into a single solution.|
|*projname*.suo|The solution options file used within the development environment.|
|*projname*.vcxproj|The project file used within the development environment that stores the information specific to this project.|
|ReadMe.txt|A file describing each file in your project using the actual filenames created by the template.|
