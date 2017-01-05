---
title: "Universal Windows Apps (C++) | Microsoft Docs"
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
ms.assetid: 357121cc-d390-4bae-b34a-39614861a9f4
caps.latest.revision: 14
author: "mikeblome"
ms.author: "mblome"
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
# Universal Windows Apps (C++)
Univeral Windows Platform (UWP) apps embody a set of design principles that emphasize simple user interfaces that are centered around content that automatically adjusts for different screen sizes on different devices. You create the UI in XAML markup, and the code-behind in native C++. You can also create components (DLLs) that can be consumed by UWP apps that are written in other languages. The API surface for UWP apps is the [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)], which is a well-factored library that provides a wide variety of operating system services.  

> [!TIP]  
> For Windows 10, you can use the Desktop App Converter to package your existing desktop application for deployment through the Windows Store. For more information, see [Using Visual C++ Runtime in Centennial project](https://blogs.msdn.microsoft.com/vcblog/2016/07/07/using-visual-c-runtime-in-centennial-project) and [Bring your desktop app to the Universal Windows Platform (UWP) with the Desktop Bridge](https://msdn.microsoft.com/en-us/windows/uwp/porting/desktop-to-uwp-root).
   
> [!NOTE]
>  Much of the documentation for UWP app development in C++ is on the [Windows Developer Center](http://go.microsoft.com/fwlink/p/?LinkId=255563) website. Some of the links in this article go to that website.  
  
## UWP apps that Use C++/CX  
  
|||  
|-|-|  
|[Visual C++ language reference (C++/CX)](http://go.microsoft.com/fwlink/p/?LinkId=255561)|Describes the set of extensions that simplify C++ consumption of [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] APIs and enable error handling that's based on exceptions.|  
|[Building apps and libraries (C++/CX)](http://go.microsoft.com/fwlink/p/?LinkId=264858)|Describes how to create DLLs and static libraries that can be accessed from a C++/CX app or component.|  
|[Tutorial: Create your first Windows Store app using C++](http://go.microsoft.com/fwlink/p/?LinkId=255556)|A walkthrough that introduces the basic concepts of [!INCLUDE[win8_appname_long](../build/includes/win8_appname_long_md.md)] app development in C++. (Not yet updated for UWP development on Windows 10.)|  
|[Roadmap for Windows Store apps using C++](http://go.microsoft.com/fwlink/p/?LinkId=255553)|Provides links to articles about [!INCLUDE[win8_appname_long](../build/includes/win8_appname_long_md.md)] app and game development in C++.|  
|[Creating Windows Runtime Components in C++](http://go.microsoft.com/fwlink/p/?LinkId=255559)|Describes how to create DLLs that other [!INCLUDE[win8_appname_long](../build/includes/win8_appname_long_md.md)] apps and components can consume.|  
|[Developing games](http://go.microsoft.com/fwlink/p/?LinkId=255554)|Describes how to use DirectX and C++ to create games.|  
  
## [!INCLUDE[win8_appname_long](../build/includes/win8_appname_long_md.md)] Apps that Use the [!INCLUDE[cppwrl](../windows/includes/cppwrl_md.md)] ([!INCLUDE[cppwrl_short](../windows/includes/cppwrl_short_md.md)])  
 The [!INCLUDE[cppwrl_short](../windows/includes/cppwrl_short_md.md)] provides the low-level COM interfaces by which ISO C++ code can access the [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] in an exception-free environment. In most cases, we recommend that you use C++/CX instead of the [!INCLUDE[cppwrl_short](../windows/includes/cppwrl_short_md.md)] for [!INCLUDE[win8_appname_long](../build/includes/win8_appname_long_md.md)] app development. For information about the [!INCLUDE[cppwrl_short](../windows/includes/cppwrl_short_md.md)], see [Windows Runtime C++ Template Library (WRL)](../windows/windows-runtime-cpp-template-library-wrl.md).  
  
## See Also  
 [Visual C++](../visual-cpp-in-visual-studio.md)

