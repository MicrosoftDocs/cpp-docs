---
title: "Header Items in a Header Control"
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
ms.assetid: ac79ef1f-a671-4ab2-93e9-b1aa016a48bf
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
# Header Items in a Header Control
You have considerable control over the appearance and behavior of the header items that make up a header control ([CHeaderCtrl](../VS_visualcpp/CHeaderCtrl-Class.md)). Each header item can have a string, a bitmapped image, an image from an associated image list, or an application-defined 32-bit value associated with it. The string, bitmap, or image is displayed in the header item.  
  
 You can customize the appearance and contents of new items when they are created by making a call [CHeaderCtrl::InsertItem](../Topic/CHeaderCtrl::InsertItem.md) or by modifying an existing item, with a call to [CHeaderCtrl::GetItem](../Topic/CHeaderCtrl::GetItem.md) and [CHeaderCtrl::SetItem](../Topic/CHeaderCtrl::SetItem.md).  
  
## What do you want to know more about?  
  
-   [Customizing the header item's appearance](../VS_visualcpp/Customizing-the-Header-Item-s-Appearance.md)  
  
-   [Ordering items in the header control](../VS_visualcpp/Ordering-Items-in-the-Header-Control.md)  
  
-   [Providing drag-and-drop support for the header items](../VS_visualcpp/Providing-Drag-and-Drop-Support-for-Header-Items.md)  
  
-   [Using image lists with header controls](../VS_visualcpp/Using-Image-Lists-with-Header-Controls.md)  
  
## See Also  
 [Using CHeaderCtrl](../VS_visualcpp/Using-CHeaderCtrl.md)