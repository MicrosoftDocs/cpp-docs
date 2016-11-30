---
title: "Desktop Applications (Visual C++) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: a020b534-293c-44e2-aa48-516c43ddeb8f
caps.latest.revision: 17
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# Desktop Applications (Visual C++)
A *desktop application* in C++ is a native application that can access the full set of Windows APIs and either runs in a window or in the system console. Desktop applications in C++ can run on Windows XP through Windows 10 (although Windows XP is no longer officially supported and there are many Windows APIs that have been introduced since then).   A desktop application is distinct from a Universal Windows Platform (UWP) app, which can run on PCs running Windows 10, and also on XBox, Windows Phone, Surface Hub, and other devices. For more information about desktop vs. UWP applications, see [Choose your technology](https://msdn.microsoft.com/en-us/library/windows/desktop/dn614993\(v=vs.85\).aspx).  
  
 **Terminology**  
  
-   A *Win32* application is a Windows desktop application in C++ can make use of native [Windows C APIs and/or COM APIs](https://msdn.microsoft.com/en-us/library/windows/desktop/ff818516\(v=vs.85\).aspx) CRT and Standard Library  APIs, and 3rd party libraries. A Win32 application that runs in a window requires the developer to work explicitly with Windows messages inside a Windows procedure function. Despite the name, a Win32 application can be compiled as a 32-bit (x86) or 64-bit  (x64) binary. In the Visual Studio IDE, the terms x86 and Win32 are synonymous.  
  
-   The [Component Object Model (COM)](https://msdn.microsoft.com/en-us/library/windows/desktop/ms694363\(v=vs.85\).aspx) is a specification that enables programs written in different languages to communicate with one another. Many Windows components are implemented as COM objects and follow standard COM rules for object creation, interface discovery and object destruction.  Using COM objects from C++ desktop applications is relatively straightforward, but writing your own COM object is more advanced. The [Active Template Library (ATL)](../atl/atl-com-desktop-components.md) provides macros and helper functions that simplify COM development.  
  
-   An MFC application is a Windows desktop application that use the [Microsoft Foundation Classes](../mfc/mfc-desktop-applications.md)to create the user interface. An MFC application can also use COM components as well as CRT and Standard Library APIs. MFC provides a thin C++ object-oriented wrapper over the window message loop and Windows APIs. MFC is the default choice for applications—especially enterprise-type applications—that have lots of user interface controls or custom user controls. MFC provides convenient helper classes for window management, serialization, text manipulation, printing, and modern user interface elements such as the ribbon. To be effective with MFC you should be familiar with Win32.  
  
-   A C++/CLI application or component uses extensions to C++ syntax (as allowed by the C++ Specification) to enable interaction between .NET and native C++code.  A C++/CLI application can have parts that run natively and parts that run on the .NET Framework with access to the .NET Base Class Library. C++/CLI is the preferred option when you have native C++ code that needs to work with code written in C# or Visual Basic. It is primarily intended for use in .NET DLLs rather than in user interface code. For more information, see [.NET Programming with C++/CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md).  
  
 Any desktop application in C++ can use C Runtime (CRT) and Standard Library classes and functions, COM objects, and the public Windows functions, which collectively are known as the Windows API. For an introduction to Windows desktop applications in C++, see [Learn to Program for Windows in C++](http://go.microsoft.com/fwlink/p/?LinkId=262281).  
  
## In this section  
  
|Title|Description|  
|-----------|-----------------|  
|[Console Applications](../windows/console-applications-in-visual-cpp.md)|Contains information about console apps. A Win32 (or Win64) console application has no window of its own and no message loop. It runs in the console window, and input and output are handled through the command line.|  
|[Windows Desktop Applications](../windows/windows-desktop-applications-cpp.md)|How to create desktop applications that run in windows as opposed to the console.|  
|[Resources for Creating a Game Using DirectX (C++)](../windows/resources-for-creating-a-game-using-directx.md)|Links to content for creating games in C++.|  
|[Walkthrough: Creating and Using a Static Library](../windows/walkthrough-creating-and-using-a-static-library-cpp.md)|How to create a .lib binary file.|  
|[How to: Use the Windows 10 SDK in a Windows Desktop Application](../windows/how-to-use-the-windows-10-sdk-in-a-windows-desktop-application.md)|Contains steps for setting up your project to build using the Windows 10 SDK.|  
  
## Related Articles  
  
|Title|Description|  
|-----------|-----------------|  
|[Windows Development](http://go.microsoft.com/fwlink/p/?LinkId=262282)|Contains information about the Windows API and COM. (Some Windows APIs and third-party DLLs are implemented as COM objects.)|  
|[Hilo: Developing C++ Applications for Windows 7](http://go.microsoft.com/fwlink/p/?LinkId=262284)|Describes how to create a rich-client Windows desktop application that uses Windows Animation and Direct2D to create a carousel-based user interface.  This tutorial has not been updated since Windows 7 but it still provides a throough introduction to Win32 programming.|  
|[Visual C++](../visual-cpp-in-visual-studio.md)|Describes key features of Visual C++ in Visual Studio and links to the rest of the Visual C++ documentation.|  
  
## See Also  
 [Visual C++](../visual-cpp-in-visual-studio.md)