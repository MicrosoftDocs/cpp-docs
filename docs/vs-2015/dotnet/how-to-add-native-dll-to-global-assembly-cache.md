---
title: "How to: Add Native DLL to Global Assembly Cache | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "get-started-article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "DLLs [C++], native"
  - "GAC (global assembly cache), loading native DLLs"
  - "native DLLs [C++]"
ms.assetid: 25e8d78a-b197-4269-b4e9-237a544ab3c8
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# How to: Add Native DLL to Global Assembly Cache
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [How to: Add Native DLL to Global Assembly Cache](https://docs.microsoft.com/cpp/dotnet/how-to-add-native-dll-to-global-assembly-cache).  
  
  
You can put a native DLL (not COM) into the Global Assembly Cache.  
  
## Example  
 **/ASSEMBLYLINKRESOURCE** lets you embed a native DLL in an assembly.  
  
 For more information, see [/ASSEMBLYLINKRESOURCE (Link to .NET Framework Resource)](../build/reference/assemblylinkresource-link-to-dotnet-framework-resource.md).  
  
```  
/ASSEMBLYLINKRESOURCE:MyComponent.dll  
```  
  
## See Also  
 [Using C++ Interop (Implicit PInvoke)](../dotnet/using-cpp-interop-implicit-pinvoke.md)

