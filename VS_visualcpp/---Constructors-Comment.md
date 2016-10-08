---
title: "-- Constructors Comment"
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
H1: // Constructors Comment
ms.assetid: f400774e-ba85-49ed-85b7-70ef2f7dcb2b
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
# -- Constructors Comment
The `// Constructors` section of an MFC class declaration declares constructors (in the C++ sense) as well as any initialization functions required to really use the object. For example, `CWnd::Create` is in the constructors section because before you use the `CWnd` object, it must be "fully constructed" by first calling the C++ constructor and then calling the **Create** function. Typically, these members are public.  
  
 For example, class `CStdioFile` has three constructors, one of which is shown in the listing under [An Example of the Comments](../VS_visualcpp/An-Example-of-the-Comments.md).  
  
## See Also  
 [Using the MFC Source Files](../VS_visualcpp/Using-the-MFC-Source-Files.md)   
 [// Implementation Comment](../VS_visualcpp/---Implementation-Comment.md)   
 [// Attributes Comment](../VS_visualcpp/---Attributes-Comment.md)   
 [// Operations Comment](../VS_visualcpp/---Operations-Comment.md)   
 [// Overridables Comment](../VS_visualcpp/---Overridables-Comment.md)