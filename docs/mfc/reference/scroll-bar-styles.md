---
title: "Scroll-Bar Styles | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "SBS_VERT"
  - "SBS_SIZEBOXBOTTOMRIGHTALIGN"
  - "SBS_LEFTALIGN"
  - "SBS_RIGHTALIGN"
  - "SBS_TOPALIGN"
  - "SBS_SIZEBOXTOPLEFTALIGN"
  - "SBS_BOTTOMALIGN"
  - "SBS_SIZEBOX"
  - "SBS_HORZ"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "SBS_HORZ constant"
  - "SBS_TOPALIGN constant"
  - "SBS_SIZEBOX constant"
  - "SBS_BOTTOMALIGN constant"
  - "SBS_VERT constant"
  - "SBS_LEFTALIGN constant"
  - "SBS_SIZEBOXBOTTOMRIGHTALIGN constant"
  - "scroll bars, styles"
  - "SBS_SIZEBOXTOPLEFTALIGN constant"
  - "SBS_RIGHTALIGN constant"
ms.assetid: 8bcde35b-387d-49ae-bdd6-7cda9f5dae26
caps.latest.revision: 12
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
# Scroll-Bar Styles
-   **SBS_BOTTOMALIGN** Used with the **SBS_HORZ** style. The bottom edge of the scroll bar is aligned with the bottom edge of the rectangle specified in the **Create** member function. The scroll bar has the default height for system scroll bars.  
  
-   **SBS_HORZ** Designates a horizontal scroll bar. If neither the **SBS_BOTTOMALIGN** nor **SBS_TOPALIGN** style is specified, the scroll bar has the height, width, and position given in the **Create** member function.  
  
-   **SBS_LEFTALIGN** Used with the **SBS_VERT** style. The left edge of the scroll bar is aligned with the left edge of the rectangle specified in the **Create** member function. The scroll bar has the default width for system scroll bars.  
  
-   **SBS_RIGHTALIGN** Used with the **SBS_VERT** style. The right edge of the scroll bar is aligned with the right edge of the rectangle specified in the **Create** member function. The scroll bar has the default width for system scroll bars.  
  
-   **SBS_SIZEBOX** Designates a size box. If neither the **SBS_SIZEBOXBOTTOMRIGHTALIGN** nor **SBS_SIZEBOXTOPLEFTALIGN** style is specified, the size box has the height, width, and position given in the **Create** member function.  
  
-   **SBS_SIZEBOXBOTTOMRIGHTALIGN** Used with the **SBS_SIZEBOX** style. The lower-right corner of the size box is aligned with the lower-right corner of the rectangle specified in the **Create** member function. The size box has the default size for system size boxes.  
  
-   **SBS_SIZEBOXTOPLEFTALIGN** Used with the **SBS_SIZEBOX** style. The upper-left corner of the size box is aligned with the upper-left corner of the rectangle specified in the **Create** member function. The size box has the default size for system size boxes.  
  
-   **SBS_SIZEGRIP** Same as **SBS_SIZEBOX**, but with a raised edge.  
  
-   **SBS_TOPALIGN** Used with the **SBS_HORZ** style. The top edge of the scroll bar is aligned with the top edge of the rectangle specified in the **Create** member function. The scroll bar has the default height for system scroll bars.  
  
-   **SBS_VERT** Designates a vertical scroll bar. If neither the **SBS_RIGHTALIGN** nor **SBS_LEFTALIGN** style is specified, the scroll bar has the height, width, and position given in the **Create** member function.  
  
## See Also  
 [Styles Used by MFC](../../mfc/reference/styles-used-by-mfc.md)   
 [CScrollBar::Create](../../mfc/reference/cscrollbar-class.md#cscrollbar__create)   
 [Scroll Bar Control Styles](http://msdn.microsoft.com/library/windows/desktop/bb787533)

