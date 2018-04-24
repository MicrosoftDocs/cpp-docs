---
title: "DLL Import and Export Functions | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "DLLs [C++], importing"
  - "dllimport attribute [C++], storage-class attribute"
  - "DLL exports [C++]"
  - "declaring functions, with dllexport and dllimport"
  - "extended storage-class attributes"
  - "dllexport attribute [C++], storage-class attribute"
ms.assetid: 08d164b9-770a-4e14-afeb-c6f21d9e33e4
caps.latest.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# DLL Import and Export Functions
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [DLL Import and Export Functions](https://docs.microsoft.com/cpp/c-language/dll-import-and-export-functions).  
  
Microsoft Specific**  
  
 The most complete and up-to-date information on this topic can be found in [dllexport, dllimport](../cpp/dllexport-dllimport.md).  
  
 The **dllimport** and `dllexport` storage-class modifiers are Microsoft-specific extensions to the C language. These modifiers explicitly define the DLL's interface to its client (the executable file or another DLL). Declaring functions as `dllexport` eliminates the need for a module-definition (.DEF) file. You can also use the **dllimport** and `dllexport` modifiers with data and objects.  
  
 The **dllimport** and `dllexport` storage-class modifiers must be used with the extended attribute syntax keyword, `__declspec`, as shown in this example:  
  
```  
#define DllImport   __declspec( dllimport )  
#define DllExport   __declspec( dllexport )  
  
DllExport void func();  
DllExport int i = 10;  
DllExport int j;  
DllExport int n;  
```  
  
 For specific information about the syntax for extended storage-class modifiers, see [Extended Storage-Class Attributes](../c-language/c-extended-storage-class-attributes.md).  
  
 **END Microsoft Specific**  
  
## See Also  
 [C Function Definitions](../c-language/c-function-definitions.md)





