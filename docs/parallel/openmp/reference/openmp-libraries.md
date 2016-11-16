---
title: "OpenMP Libraries | Microsoft Docs"
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
ms.assetid: f89abf97-67e3-4327-bc30-43f85b9533a2
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# OpenMP Libraries
Discusses the .lib files that make up the OpenMP run-time libraries in Visual C++.  
  
 The following libraries contain the Visual C++ OpenMP run-time library functions.  
  
|OpenMP run-time library|Characteristics|  
|------------------------------|---------------------|  
|VCOMP.LIB|Multithreaded, dynamic link (import library for VCOMP.LIB).|  
|VCOMPD.LIB|Multithreaded, dynamic link (import library for VCOMPD.LID) (debug)|  
  
 If _DEBUG is defined in a compilation and if `#include omp.h` is in source code, VCOMPD.LIB will be the default lib. Otherwise, VCOMP.LIB will be used.  
  
 You can use [/NODEFAULTLIB (Ignore Libraries)](../../../build/reference/nodefaultlib-ignore-libraries.md) to remove the default lib and explicitly link with the lib of your choice.  
  
 The OpenMP DLLs are in the Visual C++ redistributable directory and need to be distributed with applications that use OpenMP.  
  
## See Also  
 [Library Reference](../../../parallel/openmp/reference/openmp-library-reference.md)