---
title: ".Lib Files as Linker Input"
ms.custom: ""
ms.date: "10/28/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCLinkerTool.AdditionalDependencies"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "OMF libraries"
  - "linking [C++], OMF libraries"
  - "import libraries, linker files"
  - "libraries [C++], .lib files as linker input"
  - "COFF files, import libraries"
  - "default libraries [C++], linker output"
  - "default libraries [C++]"
  - "defaults [C++], libraries"
  - ".lib files"
ms.assetid: dc5d2b1c-2487-41fa-aa71-ad1e0647958b
caps.latest.revision: 15
author: "corob-msft"
ms.author: "corob"
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
# .Lib Files as Linker Input
LINK accepts COFF standard libraries and COFF import libraries, both of which usually have the extension .lib. Standard libraries contain objects and are created by the LIB tool. Import libraries contain information about exports in other programs and are created either by LINK when it builds a program that contains exports or by the LIB tool. For information on using LIB to create standard or import libraries, see [LIB Reference](../../build/reference/lib-reference.md). For details on using LINK to create an import library, see the [/DLL](../../build/reference/dll-build-a-dll.md) option.  
  
 A library is specified to LINK as either a file name argument or a default library. LINK resolves external references by searching first in libraries specified on the command line, then in default libraries specified with the [/DEFAULTLIB](../../build/reference/defaultlib-specify-default-library.md) option, and then in default libraries named in .obj files. If a path is specified with the library name, LINK looks for the library in that directory. If no path is specified, LINK looks first in the directory that LINK is running from, and then in any directories specified in the LIB environment variable.  
  
### To add .lib files as linker input in the development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Setting Visual C++ Project Properties](../../ide/working-with-project-properties.md).  
  
2.  Click the **Linker** folder.  
  
3.  Click the **Input** property page.  
  
4.  Modify the **Additional Dependencies** property.  
  
### To programmatically add .lib files as linker input  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalDependencies*>.  
  
## Example  
 The following sample shows how to build and use a .lib file:  
  
```  
// lib_link_input_1.cpp  
// compile with: /LD  
__declspec(dllexport) int Test() {  
   return 213;  
}  
```  
  
## Example  
 And then:  
  
```  
// lib_link_input_2.cpp  
// compile with: /EHsc lib_link_input_1.lib  
__declspec(dllimport) int Test();  
#include <iostream>  
int main() {  
   std::cout << Test() << std::endl;  
}  
```  
  
```Output  
213  
```  
  
## See Also  
 [LINK Input Files](../../build/reference/link-input-files.md)   
 [Linker Options](../../build/reference/linker-options.md)