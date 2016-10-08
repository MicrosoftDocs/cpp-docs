---
title: "Document-Template Classes"
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
ms.assetid: 901749e9-8048-44a0-b5e2-361554650a73
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
# Document-Template Classes
Document-template objects coordinate the creation of document, view, and frame window objects when a new document or view is created.  
  
 [CDocTemplate](../VS_visualcpp/CDocTemplate-Class.md)  
 The base class for document templates. You will never use this class directly; instead, you use one of the other document-template classes derived from this class.  
  
 [CMultiDocTemplate](../VS_visualcpp/CMultiDocTemplate-Class.md)  
 A template for documents in the multiple document interface (MDI). MDI applications can have multiple documents open at a time.  
  
 [CSingleDocTemplate](../VS_visualcpp/CSingleDocTemplate-Class.md)  
 A template for documents in the single document interface (SDI). SDI applications have only one document open at a time.  
  
## Related Class  
 [CCreateContext](../VS_visualcpp/CCreateContext-Structure.md)  
 A structure passed by a document template to window-creation functions to coordinate the creation of document, view, and frame-window objects.  
  
## See Also  
 [Class Overview](../VS_visualcpp/Class-Library-Overview.md)