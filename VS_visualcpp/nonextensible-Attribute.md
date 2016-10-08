---
title: "nonextensible Attribute"
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
ms.assetid: 02a4a18b-ffd3-4d53-8fd1-feb1c05ad5ac
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
# nonextensible Attribute
If a dual interface will not be extended at run time (that is, you won't provide methods or properties via **IDispatch::Invoke** that are not available via the vtable), you should apply the **nonextensible** attribute to your interface definition. This attribute provides information to client languages (such as Visual Basic) that can be used to enable full code verification at compile time. If this attribute is not supplied, bugs may remain hidden in the client code until run time.  
  
 For more information on the **nonextensible** attribute and an example, see [nonextensible](../VS_visualcpp/nonextensible.md).  
  
## See Also  
 [Dual Interfaces and ATL](../VS_visualcpp/Dual-Interfaces-and-ATL.md)