---
title: "Application Domains and Visual C++ | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: ["C++"]
helpviewer_keywords: ["interop [C++], application domains", "application domains [C++], C++", "/clr compiler option [C++], application domains", "interoperability [C++], application domains", "mixed assemblies [C++], application domains"]
ms.assetid: 75a08efc-9b02-40ba-99b7-dcbd71010bbf
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Application Domains and Visual C++
If you have a `__clrcall` virtual function, the vtable will be per application domain (appdomain). If you create an object in one appdomain, you can only call the virtual function from within that appdomain. All functions defined in **/clr:pure** compilands use the `__clrcall` calling convention. Therefore, all vtables defined in **/clr:pure** compilands are per appdomain. In mixed mode (**/clr**) you will have per process vtables if your type has no `__clrcall` virtual functions. The **/clr:pure** and **/clr:safe** compiler options are deprecated in Visual Studio 2015.  
  
 For more information, see  
  
-   [appdomain](../cpp/appdomain.md)  
  
-   [__clrcall](../cpp/clrcall.md)  
  
-   [How to: Migrate to /clr:pure (C++/CLI)](../dotnet/how-to-migrate-to-clr-pure-cpp-cli.md)  
  
-   [process](../cpp/process.md)  
  
## See Also  
 [Mixed (Native and Managed) Assemblies](../dotnet/mixed-native-and-managed-assemblies.md)