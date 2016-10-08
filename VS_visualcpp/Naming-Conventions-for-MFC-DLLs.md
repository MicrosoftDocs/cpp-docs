---
title: "Naming Conventions for MFC DLLs"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 0db9c3f3-87d3-40e8-8964-250f9d2a2209
caps.latest.revision: 10
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# Naming Conventions for MFC DLLs
The DLLs and libraries included in MFC follow a structured naming convention. This makes it easier to know which DLL or library you should be using for which purpose.  
  
 The import libraries needed to build applications or extension DLLs that use these DLLs have the same base name as the DLL but have a .lib file name extension.  
  
### Shared DLL Naming Convention  
  
|DLL|Description|  
|---------|-----------------|  
|MFCx0.DLL|MFC DLL, ANSI Release version|  
|MFCx0U.DLL|MFC DLL, Unicode Release version|  
|MFCx0D.DLL|MFC DLL, ANSI Debug version|  
|MFCx0UD.DLL|MFC DLL, Unicode Debug version|  
  
 If you are dynamically linking to the shared DLL version of MFC, whether it is from an application or from an extension DLL, you must include MFCx0.DLL with your product. If you require Unicode support in your application, include MFCx0U.DLL instead.  
  
 If you are statically linking your DLL to MFC, you must link it with one of the static MFC libraries. These versions are named according to the convention [N&#124;U]AFXCW[D].LIB. For more information, see the table "Static-Link Library Naming Conventions" in [Library Naming Conventions](../VS_visualcpp/Library-Naming-Conventions.md) (MFC).  
  
 For a list of Visual C++ DLLs that can be distributed with your applications, see Redist.txt in your Visual Studio installation.  
  
## What do you want to know more about?  
  
-   [The naming convention for libraries](../VS_visualcpp/Library-Naming-Conventions.md)  
  
## See Also  
 [DLLs in Visual C++](../VS_visualcpp/DLLs-in-Visual-C--.md)