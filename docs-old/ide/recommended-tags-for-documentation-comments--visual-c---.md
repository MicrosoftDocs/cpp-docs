---
title: "Recommended Tags for Documentation Comments (Visual C++)"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: 6548e798-5235-4a38-9482-bdc7b88f40a9
caps.latest.revision: 10
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
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
|[\<c>](../ide/-c---visual-c---.md)|[\<code>](../ide/-code---visual-c---.md)|[\<example>](../ide/-example---visual-c---.md)|  
|[\<exception>](../ide/-exception---visual-c---.md)1|[\<include>](../ide/-include---visual-c---.md)1|[\<list>](../ide/-list---visual-c---.md)|  
|[\<para>](../ide/-para---visual-c---.md)|[\<param>](../ide/-param---visual-c---.md)1|[\<paramref>](../ide/-paramref---visual-c---.md)1|  
|[\<permission>](../ide/-permission---visual-c---.md)1|[\<remarks>](../ide/-remarks---visual-c---.md)|[\<returns>](../ide/-returns---visual-c---.md)|  
|[\<see>](../ide/-see---visual-c---.md)1|[\<seealso>](../ide/-seealso---visual-c---.md)1|[\<summary>](../ide/-summary---visual-c---.md)|  
|[\<value>](../ide/-value---visual-c---.md)|||  
  
 1. Compiler verifies syntax.  
  
 In the current release, the Visual C++ compiler does not support `<paramref>`, a tag that is supported by other Visual Studio compilers. Visual C++ may support `<paramref>` in a future release.  
  
## See Also  
 [XML Documentation](../ide/xml-documentation--visual-c---.md)