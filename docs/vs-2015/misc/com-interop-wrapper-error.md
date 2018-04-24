---
title: "COM Interop Wrapper Error | Microsoft Docs"
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
  - "vs.tasklisterror.cannotcopyassembly"
  - "Vs.refruntlbimp"
helpviewer_keywords: 
  - "COM Interop Wrapper dialog box"
ms.assetid: 9a9d6374-ee26-4dbc-9e34-e1d90f6254b4
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# COM Interop Wrapper Error
This message box is displayed when the project system could not create a COM interop wrapper for a particular component.  COM interop wrappers are required by the common language runtime (CLR) to manage and communicate with COM components.  For more information, see [COM Interoperability in Visual Basic and Visual C#](http://msdn.microsoft.com/library/f5a72143-c268-4dff-a019-974ad940e17d).  
  
 Common causes for the failure include:  
  
-   The type library for the component is not properly registered.  
  
-   A component on which the component being wrapped is dependent could not be found on your machine.  
  
 In both of these cases, you need to ensure that the COM component is properly installed and registered on your machine and retry the operation.  
  
> [!TIP]
>  You can also search the [MSDN Web site](http://go.microsoft.com/fwlink/?LinkId=3355) for a COM interop wrapper that has been published for your specific COM component.  
  
> [!NOTE]
>  COM interop wrappers are sometimes referred to as "primary interop assemblies." These terms are synonymous  
  
## See Also  
 [Component Model Namespaces in Visual Studio](http://msdn.microsoft.com/en-us/705d0add-0707-44ba-a6de-637381d9c937)   
 [Component Authoring](http://msdn.microsoft.com/library/4a5a5e49-0378-4a31-83bc-24da0f1a727d)   
 [COM Interop](http://msdn.microsoft.com/library/3ffd1bdf-1b8d-47f5-87eb-75b659f64294)   
 [Common Language Runtime](http://msdn.microsoft.com/library/059a624e-f7db-4134-ba9f-08b676050482)   
 [COM Interoperability in .NET Framework Applications](http://msdn.microsoft.com/library/f5a72143-c268-4dff-a019-974ad940e17d)