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
  
  
## UWP apps that Use C++/CX  
  
|||  
|-|-|  
|[Visual C++ language reference (C++/CX)](../cppcx/visual-c-language-reference-c-cx.md)|Describes the set of extensions that simplify C++ consumption of [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] APIs and enable error handling that's based on exceptions.|  
|[Building apps and libraries (C++/CX)](../cppcx/building-apps-and-libraries-c-cx.md)|Describes how to create DLLs and static libraries that can be accessed from a C++/CX app or component.|  
|[Tutorial: Create your first Windows Store app using C++](https://docs.microsoft.com/en-us/windows/uwp/get-started/create-a-basic-windows-10-app-in-cpp)|A walkthrough that introduces the basic concepts of Universal Windows Platform app development in C++. (Not yet updated for UWP development on Windows 10.)|  
|[Creating Windows Runtime Components in C++](https://docs.microsoft.com/en-us/windows/uwp/winrt-components/creating-windows-runtime-components-in-cpp)|Describes how to create DLLs that other Universal Windows Platform apps and components can consume.|  
|[Developing games](https://docs.microsoft.com/en-us/windows/uwp/gaming/)|Describes how to use DirectX and C++ to create games.|  
  
## Universal Windows Platform Apps that Use the [!INCLUDE[cppwrl](../windows/includes/cppwrl_md.md)] ([!INCLUDE[cppwrl_short](../windows/includes/cppwrl_short_md.md)])  
 The [!INCLUDE[cppwrl_short](../windows/includes/cppwrl_short_md.md)] provides the low-level COM interfaces by which ISO C++ code can access the [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] in an exception-free environment. In most cases, we recommend that you use C++/CX instead of the [!INCLUDE[cppwrl_short](../windows/includes/cppwrl_short_md.md)] for Universal Windows Platform app development. For information about the [!INCLUDE[cppwrl_short](../windows/includes/cppwrl_short_md.md)], see [Windows Runtime C++ Template Library (WRL)](../windows/windows-runtime-cpp-template-library-wrl.md).  
  
## See Also  
 [Visual C++](../visual-cpp-in-visual-studio.md)

