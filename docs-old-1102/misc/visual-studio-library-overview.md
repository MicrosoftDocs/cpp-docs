---
title: "Visual Studio Library Overview"
ms.custom: ""
ms.date: "10/25/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "Visual Studio Library, overview"
ms.assetid: 48910975-7202-462f-a656-de67a4f8b14d
caps.latest.revision: 9
manager: "douge"
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
# Visual Studio Library Overview
Visual Studio Library is a set of template-based C++ classes for simplifying the creation of VSPackages in native C++. Visual Studio Library includes complete source code, as a set of C++ header files. The header files are installed in *Visual Studio SDK installation path*\VisualStudioIntegration \Common\Source\CPP\VSL\Include\\.  
  
> [!NOTE]
>  Visual Studio Library relies on the Active Template Library (ATL) for its support of COM objects. For more information, see [Introduction to ATL](../atl/introduction-to-atl.md).  
  
 Visual Studio Library supports unit testing, both for its own code and for your code. Some unit tests are included, as follows:  
  
-   Visual Studio Library unit tests are installed in *Visual Studio SDK installation path*\VisualStudioIntegration\Common\Source\CPP\VSL\UnitTest\\.  
  
-   The base classes for unit tests for your code are in *Visual Studio SDK installation path*\VisualStudioIntegration\Common\Source\CPP\VSL\Include\VSLUnitTest.h.  
  
 Mock implementations of commonly-used COM and Visual Studio interfaces are in the header files, VSLMockSystemInterfaces.h and VSLMockVisualStudioInterfaces.h, which are installed in *Visual Studio SDK installation path*\VisualStudioIntegration\Common\Source\CPP\VSL\Include\\.  
  
## See Also  
 [Developing VSPackages By Using the Visual Studio Library](../misc/developing-vspackages-by-using-the-visual-studio-library.md)