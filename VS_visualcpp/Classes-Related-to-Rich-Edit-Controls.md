---
title: "Classes Related to Rich Edit Controls"
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
ms.assetid: 4b31c2cc-6ea1-4146-b7c5-b0b5b419f14d
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
# Classes Related to Rich Edit Controls
The [CRichEditView](../VS_visualcpp/CRichEditView-Class.md), [CRichEditDoc](../VS_visualcpp/CRichEditDoc-Class.md), and [CRichEditCntrItem](../VS_visualcpp/CRichEditCntrItem-Class.md) classes provide the functionality of the rich edit control ([CRichEditCtrl](../VS_visualcpp/CRichEditCtrl-Class.md)) within the context of MFC's document/view architecture. `CRichEditView` maintains the text and formatting characteristic of text. `CRichEditDoc` maintains the list of OLE client items that are in the view. `CRichEditCntrItem` provides container-side access to the OLE client item. To modify the contents of a `CRichEditView`, use [CRichEditView::GetRichEditCtrl](../Topic/CRichEditView::GetRichEditCtrl.md) to access the underlying rich edit control.  
  
## See Also  
 [Using CRichEditCtrl](../VS_visualcpp/Using-CRichEditCtrl.md)   
 [Controls](../VS_visualcpp/Controls--MFC-.md)