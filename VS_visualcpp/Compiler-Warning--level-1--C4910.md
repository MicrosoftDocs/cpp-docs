---
title: "Compiler Warning (level 1) C4910"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-csharp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 67963560-fbca-4ca7-93db-06beaf7055f0
caps.latest.revision: 3
manager: douge
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# Compiler Warning (level 1) C4910
'<identifier\>' : '__declspec(dllexport)' and 'extern' are incompatible on an explicit instantiation  
  
 The explicit template instantiation named *<identifier\>* is modified by both the `__declspec(dllexport)` and `extern` keywords. However, these keywords are mutually exclusive. The `__declspec(dllexport)` keyword means instantiate the template class, while the `extern` keyword means do not automatically instantiate the template class.  
  
## See Also  
 [Explicit Instantiation](../VS_visualcpp/Explicit-Instantiation.md)   
 [dllexport, dllimport](../VS_visualcpp/dllexport--dllimport.md)   
 [General Rules and Limitations](../VS_visualcpp/General-Rules-and-Limitations.md)