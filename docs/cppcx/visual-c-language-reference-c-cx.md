---
title: "Visual C++ Language Reference (C++/CX) | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"  
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: 3f6abf92-4e5e-4ed8-8e11-f9252380d30a
caps.latest.revision: 27
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Visual C++ Language Reference (C++/CX)
C++/CX is a set of extensions to the C++ language that enable the creation of Windows apps and [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] components in an idiom that is as close as possible to modern C++. Use C++/CX to write Windows apps and components in native code that easily interact with Visual C#, Visual Basic, and JavaScript, and other languages that support the [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)]. In those rare cases that require direct access to the raw COM interfaces, or non-exceptional code, you can use the [Windows Runtime C++ Template Library (WRL)](../windows/windows-runtime-cpp-template-library-wrl.md).  
  
 The new model represents the next generation of native C++ programming on Windows. By using it, you can create:  
  
-   C++ Windows apps that use XAML to define the user interface and use the native stack. For more information, see [Create a "hello world" app in C++ (Windows 10)](http://msdn.microsoft.com/library/windows/apps/dn996906.aspx).  
  
-   C++ [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] components that can be consumed by JavaScript-based Windows apps. For more information, see [Creating Windows Runtime Components in C++](/MicrosoftDocs/windows-uwp/blob/docs/windows-apps-src/winrt-components/creating-windows-runtime-components-in-cpp.md).  
  
-   Windows DirectX games and graphics-intensive apps. For more information, see [Create a simple Universal Windows Platform (UWP) Game with DirectX](http://msdn.microsoft.com/library/windows/apps/xaml/mt210793.aspx).  
  
## Related articles  
  
|||  
|-|-|  
|[Quick Reference](../cppcx/quick-reference-c-cx.md)|Table of keywords and operators for C++/CX.|  
|[Type System](../cppcx/type-system-c-cx.md)|Describes basic C++/CX types and programming constructs, and how to utilize C++/CX to consume and create [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] types.|  
|[Building apps and libraries](../cppcx/building-apps-and-libraries-c-cx.md)|Discusses how to use the IDE to build apps and link to static libraries aned DLLs.|  
|[Interoperating with Other Languages](../cppcx/interoperating-with-other-languages-c-cx.md)|Discusses how components that are written by using C++/CX can be used with components that are written in JavaScript, any managed language, or the [!INCLUDE[cppwrl](../cppcx/includes/cppwrl-md.md)].|  
|[Threading and Marshaling](../cppcx/threading-and-marshaling-c-cx.md)|Discusses how to specify the threading and marshaling behavior of components that you create.|  
|[Namespaces Reference](../cppcx/namespaces-reference-c-cx.md)|Reference documentation for the default namespace, the Platform namespace, Platform::Collections, and related namespaces.|  
|[CRT functions not supported in Universal Windows Platform apps](../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md)|Lists the CRT functions that are not available for use in Windows Runtime apps.|  
|[How to guides for Windows 10 apps](http://msdn.microsoft.com/library/windows/apps/xaml/mt244352.aspx)|Provides high-level guidance about Windows 10 apps and links to more information.|  
  
1.  [C++/CX Part 0 of \[n\]: An Introduction](http://blogs.msdn.com/b/vcblog/archive/2012/08/29/cxxcxpart00anintroduction.aspx)  
  
2.  [C++/CX Part 0 of \[n\]: An Introduction](http://blogs.msdn.com/b/vcblog/archive/2012/08/29/cxxcxpart00anintroduction.aspx)  
  
3.  [C++/CX Part 2 of \[n\]: Types That Wear Hats](http://blogs.msdn.com/b/vcblog/archive/2012/09/17/cxxcxpart02typesthatwearhats.aspx)  
  
4.  [C++/CX Part 3 of \[n\]: Under Construction](http://blogs.msdn.com/b/vcblog/archive/2012/10/05/cxxcxpart03underconstruction.aspx)  
  
5.  [C++/CX Part 4 of \[n\]: Static Member Functions](http://blogs.msdn.com/b/vcblog/archive/2012/10/19/cxxcxpart04staticmemberfunctions.aspx)