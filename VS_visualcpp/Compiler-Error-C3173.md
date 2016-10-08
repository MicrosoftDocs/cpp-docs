---
title: "Compiler Error C3173"
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
ms.assetid: edf79e10-e8cf-4f76-8d33-ab9d05e974e9
caps.latest.revision: 6
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
# Compiler Error C3173
version mismatch in idl merge  
  
 This error occurs when an object file contains embedded idl that was generated with a previous version of the compiler. The compiler encodes a version number to ensure that the same compiler used to generate the idl content that is embedded in the .obj files is also the same compiler used to merge the embedded idl.  
  
 Update your Visual C++ installation so that all tools are from the latest released version.