---
title: "Ordering Items in the Header Control"
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
ms.assetid: 5aaef872-75b5-49c5-8fed-6f9a81fca812
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
# Ordering Items in the Header Control
Once you've [added items to a header control](../VS_visualcpp/Adding-Items-to-the-Header-Control.md), you can manipulate or get information about their order with the following functions:  
  
-   [CHeaderCtrl::GetOrderArray](../Topic/CHeaderCtrl::GetOrderArray.md) and [CHeaderCtrl::SetOrderArray](../Topic/CHeaderCtrl::SetOrderArray.md)  
  
     Retrieves and sets the left-to-right order of header items.  
  
-   [CHeaderCtrl::OrderToIndex](../Topic/CHeaderCtrl::OrderToIndex.md).  
  
     Retrieves the index value for a specific header item.  
  
 In addition to the previous member functions, the `HDS_DRAGDROP` style allows the user to drag and drop header items within the header control. For more information, see [Providing Drag-and-Drop Support for Header Items](../VS_visualcpp/Providing-Drag-and-Drop-Support-for-Header-Items.md).  
  
## See Also  
 [Using CHeaderCtrl](../VS_visualcpp/Using-CHeaderCtrl.md)