---
title: "How to: Add Native DLL to Global Assembly Cache | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "cpp-windows"
ms.tgt_pltfrm: ""
ms.topic: "get-started-article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "DLLs [C++], native"
  - "GAC (global assembly cache), loading native DLLs"
  - "native DLLs [C++]"
ms.assetid: 25e8d78a-b197-4269-b4e9-237a544ab3c8
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
ms.workload: 
  - "cplusplus"
  - "dotnet"
---
# How to: Add Native DLL to Global Assembly Cache
You can put a native DLL (not COM) into the Global Assembly Cache.  
  
## Example  
 **/ASSEMBLYLINKRESOURCE** lets you embed a native DLL in an assembly.  
  
 For more information, see [/ASSEMBLYLINKRESOURCE (Link to .NET Framework Resource)](../build/reference/assemblylinkresource-link-to-dotnet-framework-resource.md).  
  
```  
/ASSEMBLYLINKRESOURCE:MyComponent.dll  
```  
  
## See Also  
 [Using C++ Interop (Implicit PInvoke)](../dotnet/using-cpp-interop-implicit-pinvoke.md)