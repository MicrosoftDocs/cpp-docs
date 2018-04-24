---
title: "COM Interop unregistration failed | Microsoft Docs"
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
  - "vs.tasklisterror.cannot_unregister_com2"
ms.assetid: 1172b560-c4b0-4aff-9f74-cf9b29ff76d9
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# COM Interop unregistration failed
A problem occurred when trying to unregister an old copy of the assembly.  
  
 If the **Register for COM Interop** property is set, the project system will attempt to first unregister an old copy of the COM object before registering the copy that was just built. This is done to keep the registry current.  
  
 See the **Build** property page in the Configuration Properties folder to access the **Register for COM Interop** property.  
  
 Some possible reasons for failure include:  
  
-   Inability to unregister the previous type library for the assembly. This could be a permissions problem in the registry.  
  
-   Inability to unregister the old assembly. This could be a permissions problem in the registry as well.  
  
 If the unregistration process fails, a leak of the GUID for CoCreatable objects may occur, as well as for any type library GUIDs. However, the overall build process will still succeed.  
  
## See Also  
 [COM Interoperability in .NET Framework Applications](http://msdn.microsoft.com/library/f5a72143-c268-4dff-a019-974ad940e17d)