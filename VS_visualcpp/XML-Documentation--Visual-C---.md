---
title: "XML Documentation (Visual C++)"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: a1aec1c5-b2d1-4c74-83ae-1dbbbb76b506
caps.latest.revision: 18
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# XML Documentation (Visual C++)
In Visual C++, you can add comments to your source code that will be processed to an .xml file. This file can then be the input to a process that creates documentation for the classes in your code.  
  
 In a Visual C++ code file, XML documentation comments must be located directly prior to a method or type definition. The comments can be used to populate the Intellisense QuickInfo data tip in the following scenarios:  
  
1.  when the code is compiled as a Windows Runtime component with an accompanying .winmd file  
  
2.  when the source code is included in the current project  
  
3.  in a library whose type declarations and implementations are located in the same header file  
  
> [!NOTE]
>  In the current release, code comments are not processed on templates or anything containing a template type (for example, a function taking a parameter as a template). Adding such comments will result in undefined behavior.  
  
 For details on creating an .xml file with documentation comments, see the following topics.  
  
|For information about|See|  
|---------------------------|---------|  
|The compiler options to use|[/doc](../VS_visualcpp/-doc--Process-Documentation-Comments---C-C---.md)|  
|Tags you can use to provide commonly used functionality in documentation|[Recommended Tags for Documentation Comments](../VS_visualcpp/Recommended-Tags-for-Documentation-Comments--Visual-C---.md)|  
|The ID strings that the compiler produces to identify the constructs in your code|[Processing the .xml File](../VS_visualcpp/.Xml-File-Processing.md)|  
|How to delimit documentation tags|[Delimiters for Visual C++ Documentation Tags](../VS_visualcpp/Delimiters-for-Visual-C---Documentation-Tags.md)|  
|Generating an .xml file from one or more .xdc files.|[XDCMake Reference](../VS_visualcpp/XDCMake-Reference.md)|  
|Links to information about XML as it relates to Visual Studio feature areas|[XML in Visual Studio](../Topic/XML%20Tools%20in%20Visual%20Studio.md)|  
  
 If you need to put XML special characters in the text of a documentation comment, you must use XML entities or a CDATA section.  
  
## See Also  
 [Component Extensions for Runtime Platforms](../VS_visualcpp/Component-Extensions-for-Runtime-Platforms.md)