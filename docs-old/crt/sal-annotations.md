---
title: "SAL Annotations"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "__z annotation"
  - "ref annotation"
  - "_opt annotation"
  - "__checkreturn annotatioin"
  - "__deref_opt annotation"
  - "deref_opt annotation"
  - "__deref annotation"
  - "__in annotation"
  - "annotations [C++]"
  - "z annotation"
  - "_inout annotation"
  - "__ref annotation"
  - "full annotation"
  - "_in annotation"
  - "_ref annotation"
  - "__out annotation"
  - "_ecount annotation"
  - "SAL annotations"
  - "__opt annotation"
  - "inout annotation"
  - "in annotation"
  - "_CA_SHOULD_CHECK_RETURN"
  - "__bcount annotation"
  - "_full annotation"
  - "_bcount annotation"
  - "deref annotation"
  - "part annotation"
  - "_out annotation"
  - "__nz annotation"
  - "__part annotation"
  - "opt annotation"
  - "__full annotation"
  - "_nz annotation"
  - "_z annotation"
  - "out annotation"
  - "__ecount annotation"
  - "__inout annotation"
  - "SAL annotations, _CA_SHOULD_CHECK_RETURN"
  - "_deref_opt annotation"
  - "_deref annotation"
  - "nz annotation"
  - "_part annotation"
  - "ecount annotation"
  - "bcount annotation"
ms.assetid: 81893638-010c-41a0-9cb3-666fe360f3e0
caps.latest.revision: 17
ms.author: "corob"
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
# SAL Annotations
If you examine the library header files, you may notice some unusual annotations, for example, `_In_z` and `_Out_z_cap_(_Size)`. These are examples of the Microsoft source-code annotation language (SAL), which provides a set of annotations to describe how a function uses its parameters, for example, the assumptions it makes about them and the guarantees it makes on finishing. The header file \<sal.h> defines the annotations.  
  
 For more information about using SAL annotations in Visual Studio, see [Using SAL Annotations to Reduce C/C++ Code Defects](../Topic/Using%20SAL%20Annotations%20to%20Reduce%20C-C++%20Code%20Defects.md).  
  
## See Also  
 [CRT Library Features](../crt/crt-library-features.md)