---
description: "Learn more about: XML Documentation (Visual C++)"
title: "XML Documentation (Visual C++)"
ms.date: "11/04/2016"
helpviewer_keywords: ["XML documentation", "XML, documentation comments in source code", "comments, C++ source code files", "/// delimiter for C++ documentation"]
ms.assetid: a1aec1c5-b2d1-4c74-83ae-1dbbbb76b506
---
# XML Documentation (Visual C++)

In Visual C++, you can add comments to your source code that will be processed to an .xml file. This file can then be the input to a process that creates documentation for the classes in your code.

In a Visual C++ code file, XML documentation comments must be located directly prior to a method or type definition. The comments can be used to populate the IntelliSense QuickInfo data tip in the following scenarios:

1. when the code is compiled as a Windows Runtime component with an accompanying .winmd file

1. when the source code is included in the current project

1. in a library whose type declarations and implementations are located in the same header file

> [!NOTE]
> In the current release, code comments are not processed on templates or anything containing a template type (for example, a function taking a parameter as a template). Adding such comments will result in undefined behavior.

For details on creating an .xml file with documentation comments, see the following topics.

|For information about|See|
|---------------------------|---------|
|The compiler options to use|[/doc](doc-process-documentation-comments-c-cpp.md)|
|Tags you can use to provide commonly used functionality in documentation|[Recommended Tags for Documentation Comments](recommended-tags-for-documentation-comments-visual-cpp.md)|
|The ID strings that the compiler produces to identify the constructs in your code|[Processing the .xml File](dot-xml-file-processing.md)|
|How to delimit documentation tags|[Delimiters for Visual C++ Documentation Tags](delimiters-for-visual-cpp-documentation-tags.md)|
|Generating an .xml file from one or more .xdc files.|[XDCMake Reference](xdcmake-reference.md)|
|Links to information about XML as it relates to Visual Studio feature areas|[XML in Visual Studio](/visualstudio/xml-tools/xml-tools-in-visual-studio)|

If you need to put XML special characters in the text of a documentation comment, you must use XML entities or a CDATA section.

## See also

[Component Extensions for Runtime Platforms](../../extensions/component-extensions-for-runtime-platforms.md)
