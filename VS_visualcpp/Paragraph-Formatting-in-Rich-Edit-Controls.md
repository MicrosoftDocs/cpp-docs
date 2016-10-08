---
title: "Paragraph Formatting in Rich Edit Controls"
ms.custom: na
ms.date: 10/07/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 0df2e4c9-2074-4e41-b913-87cb8c1b4d43
caps.latest.revision: 8
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
# Paragraph Formatting in Rich Edit Controls
You can use member functions of the rich edit control ([CRichEditCtrl](../VS_visualcpp/CRichEditCtrl-Class.md)) to format paragraphs and to retrieve formatting information. Paragraph formatting attributes include alignment, tabs, indents, and numbering.  
  
 You can apply paragraph formatting by using the [SetParaFormat](../Topic/CRichEditCtrl::SetParaFormat.md) member function. To determine the current paragraph formatting for the selected text, use the [GetParaFormat](../Topic/CRichEditCtrl::GetParaFormat.md) member function. The [PARAFORMAT](http://msdn.microsoft.com/library/windows/desktop/bb787940) structure is used with these member functions to specify paragraph attributes. One of the important members of **PARAFORMAT** is **dwMask**. In `SetParaFormat`, **dwMask** specifies which paragraph attributes will be set by this function call. `GetParaFormat` reports the attributes of the first paragraph in the selection; **dwMask** specifies the attributes that are consistent throughout the selection.  
  
## See Also  
 [Using CRichEditCtrl](../VS_visualcpp/Using-CRichEditCtrl.md)   
 [Controls](../VS_visualcpp/Controls--MFC-.md)