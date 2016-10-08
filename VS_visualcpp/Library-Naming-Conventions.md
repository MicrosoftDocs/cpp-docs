---
title: "Library Naming Conventions"
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
ms.assetid: 39fe7d93-5a14-4c6a-b16c-bf318fa01278
caps.latest.revision: 7
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
# Library Naming Conventions
Object-code libraries for MFC use the following naming conventions. The library names have the form  
  
 *u*AFX`c`W`d`.LIB  
  
 where the letters shown in italic lowercase are placeholders for specifiers whose meanings are shown in the following table:  
  
### Library Naming Conventions  
  
|Specifier|Values and meanings|  
|---------------|-------------------------|  
|*u*|ANSI (N) or Unicode (U)|  
|`c`|Type of program to create: C=all|  
|`d`|Debug or Release: D=Debug; omit specifier for Release|  
  
 The default is to build a debug Windows ANSI application for the Intel platform: NAFXCWD.Lib. All libraries listed in the following table are included prebuilt in the \atlmfc\lib directory on the Visual C++ CD-ROM.  
  
### Static-Link Library Naming Conventions  
  
|Library|Description|  
|-------------|-----------------|  
|NAFXCW.LIB|MFC Static-Link Library, Release version|  
|NAFXCWD.LIB|MFC Static-Link Library, Debug version|  
|UAFXCW.LIB|MFC Static-Link Library with Unicode support, Release version|  
|UAFXCWD.LIB|MFC Static-Link Library with Unicode support, Debug version|  
  
> [!NOTE]
>  If you need to build a library version, see the Readme.Txt file in the \atlmfc\src\mfc directory. This file describes using the supplied makefile with NMAKE.  
  
 For more information, see [Naming Conventions for MFC DLLs](../VS_visualcpp/Naming-Conventions-for-MFC-DLLs.md) and [Unicode Versions of the MFC Libraries](../VS_visualcpp/Unicode-in-MFC.md).  
  
## See Also  
 [MFC Library Versions](../VS_visualcpp/MFC-Library-Versions.md)