---
title: "Fatal Error C1107"
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
ms.topic: error-reference
ms.assetid: 541a4d9f-10bc-4dd8-b68e-15e548f3dc0a
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
# Fatal Error C1107
could not find assembly 'file': please specify the assembly search path using /AI or by setting the LIBPATH environment variable  
  
 A metadata file was passed to a [#using](../VS_visualcpp/#using-Directive--C---.md) directive that the compiler was unable to locate.  
  
 LIBPATH, which is described in the topic for `#using`, and the [/AI](../VS_visualcpp/-AI--Specify-Metadata-Directories-.md) compiler option allow you to specify directories in which the compiler will look for referenced metadata files.