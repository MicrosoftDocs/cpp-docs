---
title: "Universal Windows Apps (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: 357121cc-d390-4bae-b34a-39614861a9f4
caps.latest.revision: 17
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Universal Windows Apps (C++)
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Universal Windows Apps (C++)](https://docs.microsoft.com/cpp/windows/universal-windows-apps-cpp).  
  
  
Univeral Windows Platform (UWP) apps embody a set of design principles that emphasize simple user interfaces that are centered around content that automatically adjusts for different screen sizes on different devices. You create the UI in XAML markup, and the code-behind in native C++. You can also create components (DLLs) that can be consumed by UWP apps that are written in other languages. The API surface for UWP apps is the [!INCLUDE[wrt](../includes/wrt-md.md)], which is a well-factored library that provides a wide variety of operating system services.  
  
> [!NOTE]
>  Much of the documentation for UWP app development in C++ is on the [Windows Developer Center](http://go.microsoft.com/fwlink/p/?LinkId=255563) website. Some of the links in this article go to that website.  
  
## UWP apps that Use C++/CX  
  
|||  
|-|-|  
|[Visual C++ language reference (C++/CX)](http://go.microsoft.com/fwlink/p/?LinkId=255561)|Describes the set of extensions that simplify C++ consumption of [!INCLUDE[wrt](../includes/wrt-md.md)] APIs and enable error handling that's based on exceptions.|  
|[Building apps and libraries (C++/CX)](http://go.microsoft.com/fwlink/p/?LinkId=264858)|Describes how to create DLLs and static libraries that can be accessed from a C++/CX app or component.|  
|[Tutorial: Create your first Windows Store app using C++](http://go.microsoft.com/fwlink/p/?LinkId=255556)|A walkthrough that introduces the basic concepts of [!INCLUDE[win8_appname_long](../includes/win8-appname-long-md.md)] app development in C++. (Not yet updated for UWP development on Windows 10.)|  
|[Roadmap for Windows Store apps using C++](http://go.microsoft.com/fwlink/p/?LinkId=255553)|Provides links to articles about [!INCLUDE[win8_appname_long](../includes/win8-appname-long-md.md)] app and game development in C++.|  
|[Creating Windows Runtime Components in C++](http://go.microsoft.com/fwlink/p/?LinkId=255559)|Describes how to create DLLs that other [!INCLUDE[win8_appname_long](../includes/win8-appname-long-md.md)] apps and components can consume.|  
|[Developing games](http://go.microsoft.com/fwlink/p/?LinkId=255554)|Describes how to use DirectX and C++ to create games.|  
  
## [!INCLUDE[win8_appname_long](../includes/win8-appname-long-md.md)] Apps that Use the [!INCLUDE[cppwrl](../includes/cppwrl-md.md)] ([!INCLUDE[cppwrl_short](../includes/cppwrl-short-md.md)])  
 The [!INCLUDE[cppwrl_short](../includes/cppwrl-short-md.md)] provides the low-level COM interfaces by which ISO C++ code can access the [!INCLUDE[wrt](../includes/wrt-md.md)] in an exception-free environment. In most cases, we recommend that you use C++/CX instead of the [!INCLUDE[cppwrl_short](../includes/cppwrl-short-md.md)] for [!INCLUDE[win8_appname_long](../includes/win8-appname-long-md.md)] app development. For information about the [!INCLUDE[cppwrl_short](../includes/cppwrl-short-md.md)], see [Windows Runtime C++ Template Library (WRL)](../windows/windows-runtime-cpp-template-library-wrl.md).  
  
## See Also  
 [Visual C++](../top/visual-cpp-in-visual-studio-2015.md)

