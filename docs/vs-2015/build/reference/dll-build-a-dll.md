---
title: "-DLL (Build a DLL) | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/dll"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "-DLL linker option"
  - "/DLL linker option [C++]"
  - "exporting DLLs [C++], specifying exports"
  - "DLLs [C++], building"
  - "DLL linker option [C++]"
ms.assetid: c7685aec-31d0-490f-9503-fb5171a23609
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /DLL (Build a DLL)
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [-DLL (Build a DLL)](https://docs.microsoft.com/cpp/build/reference/dll-build-a-dll).  
  
  
DLL  
```  
  
## Remarks  
 The /DLL option builds a DLL as the main output file. A DLL usually contains exports that can be used by another program. There are three methods for specifying exports, listed in recommended order of use:  
  
1.  [__declspec(dllexport)](../../cpp/dllexport-dllimport.md) in the source code  
  
2.  An [EXPORTS](../../build/reference/exports.md) statement in a .def file  
  
3.  An [/EXPORT](../../build/reference/export-exports-a-function.md) specification in a LINK command  
  
 A program can use more than one method.  
  
 Another way to build a DLL is with the **LIBRARY** module-definition statement. The /BASE and /DLL options together are equivalent to the **LIBRARY** statement.  
  
 Do not specify this option within the development environment; this option is for use only on the command line. This option is set when you create a DLL project with an Application Wizard.  
  
 Note that if you create your import library in a preliminary step, before creating your .dll, you must pass the same set of object files when building the .dll, as you passed when building the import library.  
  
### To set this linker option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Setting Visual C++ Project Properties](../../ide/working-with-project-properties.md).  
  
2.  Click the **Configuration Properties** folder.  
  
3.  Click the **General** property page.  
  
4.  Modify the **Configuration Type** property.  
  
### To set this linker option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCPropertySheet.ConfigurationType%2A>.  
  
## See Also  
 [Setting Linker Options](../../build/reference/setting-linker-options.md)   
 [Linker Options](../../build/reference/linker-options.md)

