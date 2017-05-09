---
title: "Static libraries (C++/CX) | Microsoft Docs"
ms.custom: ""
ms.date: "02/03/2017"
ms.prod: "windows-client-threshold"  
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: 7faf53c8-fa21-42cc-8246-d32533ef9dfa
caps.latest.revision: 10
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Static libraries (C++/CX)
A static library that's used in a Universal Windows Platform app can contain ISO-standard C++ code, including STL types, and also calls to Win32 APIs that are not excluded from the Universal Windows Platform app platform. A static library consumes [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] components and may create [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] components with certain restrictions.  
  
## Creating static libraries  
  
#### To create a static library for use in a Universal Windows Platform app  
  
1.  On the menu bar, choose **File** > **New** > **Project** > **Blank Static Library** for Universal Windows Platform apps.  
  
2.  In **Solution Explorer**, open the shortcut menu for the project and then choose **Properties**. In the **Properties** dialog box, on the **Configuration Properties** > **General** page, set Universal Windows Platform app support to **Yes**.  
  
3.  On the **Configuration Properties** > **C/C++** page, set **Consume** [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] **Extension** to **Yes (/ZW)**.  
  
 When you compile a new static library, if you make a call to a Win32 API that's excluded for Universal Windows Platform apps, the compiler will raise error C3861, “Identifier not found.” To look for an alternative method that's supported for the [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)], see [Alternatives to Windows APIs in Windows Store apps](http://msdn.microsoft.com/en-us/75568012-61e0-41cc-a4df-c698f54f21ec).  
  
 If you add a C++ static library project to a Universal Windows Platform app solution, you might have to update the library project’s property settings so that the Universal Windows Platform support property is set to **Yes**. Without this setting, the code builds and links, but an error occurs when you attempt to verify the app for the [!INCLUDE[win8_appstore_long](../cppcx/includes/win8-appstore-long-md.md)]. The static lib should be compiled with the same compiler settings as the project that consumes it.  
  
 If you consume a static library that creates public `ref` classes, public interface classes, or public value classes, the linker raises this warning:  
  
> **warning LNK4264:** archiving object file compiled with /ZW into a static library; note that when authoring [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] types it is not recommended to link with a static library that contains [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] metadata.  
  
 You can safely ignore the warning only if the static library is not producing [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] components that are consumed outside the library itself. If the library doesn’t consume a component that it defines, then the linker can optimize away the implementation even though the public metadata contains the type information. This means that public components in a static library will compile but will not activate at run time. For this reason, any [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] component that's intended for consumption by other components or apps must be implemented in a dynamic-link library (DLL).  
  
## See Also  
 [Threading and Marshaling](../cppcx/threading-and-marshaling-c-cx.md)