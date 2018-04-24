---
title: "COM Interop registration failed | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vs.tasklisterror.cannot_register_com2"
ms.assetid: d1b81f8e-66d7-4cfc-96ff-f1436a8f854a
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# COM Interop registration failed
There is a failure in the registration of an assembly that exposes functionality to COM clients. The build process will fail if this error occurs.  
  
 Assemblies can expose objects to COM clients. The project system provides a property to register exposed classes for COM interop, as well as to generate and register a type library so that these classes are usable from scripting languages as well as Visual Basic 6.  
  
 See the **Build** property page in the **Configuration Properties** folder to access the **Register for COM Interop** property.  
  
 Some possible reasons for failure include:  
  
-   Inability to generate a type library for the assembly. This could be a disk space problem or a file locking issue where the type library is locked either by Visual Studio or some other process. Also, type libraries for referenced assemblies may not be registered properly on your system.  
  
-   Inability to register the generated type library. This could be a permissions problem in the registry.  
  
-   Inability to register classes in the assembly. This could be a permissions problem in the registry.  
  
 **To correct this error**  
  
-   Create some free disk space on your computer.  
  
-   If there is a file-locking issue, restart [!INCLUDE[vsprvs](../includes/vsprvs-md.md)].  
  
-   Make sure that you are logged on as an Administrator or as a member of a group that has permission to access the registry.  
  
## See Also  
 [COM Interoperability in .NET Framework Applications](http://msdn.microsoft.com/library/f5a72143-c268-4dff-a019-974ad940e17d)