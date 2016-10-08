---
title: "Recommended Tags for Documentation Comments (Visual C++)"
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
ms.assetid: 6548e798-5235-4a38-9482-bdc7b88f40a9
caps.latest.revision: 10
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
# Recommended Tags for Documentation Comments (Visual C++)
The Visual C++ compiler will process documentation comments in your code and creates an .xdc file for each compiland, and xdcmake.exe will process the .xdc files to an .xml file. Processing the .xml file to create documentation is a detail that needs to be implemented at your site.  
  
 Tags are processed on constructs such as types and type members.  
  
 Tags must immediately precede types or members.  
  
> [!NOTE]
>  Documentation comments cannot be applied to a namespace or on out of line definition for properties and events; documentation comments must on the in-class declarations.  
  
 The compiler will process any tag that is valid XML. The following tags provide commonly used functionality in user documentation:  
  
||||  
|-|-|-|  
|[<c\>](../VS_visualcpp/-c---Visual-C---.md)|[<code\>](../VS_visualcpp/-code---Visual-C---.md)|[<example\>](../VS_visualcpp/-example---Visual-C---.md)|  
|[<exception\>](../VS_visualcpp/-exception---Visual-C---.md)1|[<include\>](../VS_visualcpp/-include---Visual-C---.md)1|[<list\>](../VS_visualcpp/-list---Visual-C---.md)|  
|[<para\>](../VS_visualcpp/-para---Visual-C---.md)|[<param\>](../VS_visualcpp/-param---Visual-C---.md)1|[<paramref\>](../VS_visualcpp/-paramref---Visual-C---.md)1|  
|[<permission\>](../VS_visualcpp/-permission---Visual-C---.md)1|[<remarks\>](../VS_visualcpp/-remarks---Visual-C---.md)|[<returns\>](../VS_visualcpp/-returns---Visual-C---.md)|  
|[<see\>](../VS_visualcpp/-see---Visual-C---.md)1|[<seealso\>](../VS_visualcpp/-seealso---Visual-C---.md)1|[<summary\>](../VS_visualcpp/-summary---Visual-C---.md)|  
|[<value\>](../VS_visualcpp/-value---Visual-C---.md)|||  
  
 1. Compiler verifies syntax.  
  
 In the current release, the Visual C++ compiler does not support `<paramref>`, a tag that is supported by other Visual Studio compilers. Visual C++ may support `<paramref>` in a future release.  
  
## See Also  
 [XML Documentation](../VS_visualcpp/XML-Documentation--Visual-C---.md)