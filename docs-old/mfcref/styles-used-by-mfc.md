---
title: "Styles Used by MFC"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "vc.mfc.styles"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "edit styles [MFC]"
  - "window styles, in MFC"
  - "styles"
  - "frame windows, styles"
  - "message-box styles"
  - "styles, MFC"
  - "buttons, MFC toolbars"
  - "list boxes, styles"
  - "static styles"
  - "scroll-bar styles [MFC]"
  - "combo boxes, styles"
  - "extended window styles"
ms.assetid: d3b9af37-31b5-4c97-a8ad-189fd724b04c
caps.latest.revision: 8
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
# Styles Used by MFC
Use the following styles when you create the corresponding MFC object. In most cases, these styles are set in the `dwStyle` parameter of the class **Create** function.  
  
### MFC Styles  
  
|Style|Description|  
|-----------|-----------------|  
|[Button styles](../mfcref/button-styles.md)|Applies to [CButton Class](../mfcref/cbutton-class.md) objects, such as radio buttons, check boxes and pushbuttons. Specify a combination of styles in the `dwStyle` parameter of [CButton::Create](../Topic/CButton::Create.md).|  
|[Combo-box styles](../mfcref/combo-box-styles.md)|Applies to [CComboBox Class](../mfcref/ccombobox-class.md) objects. Specify a combination of styles in the `dwStyle` parameter of [CComboBox::Create](../Topic/CComboBox::Create.md).|  
|[Edit styles](../mfcref/edit-styles.md)|Applies to [CEdit Class](../mfcref/cedit-class.md) objects. Specify a combination of styles in the `dwStyle` parameter of [CEdit::Create](../Topic/CEdit::Create.md).|  
|[Frame-window styles](../mfcref/frame-window-styles--mfc-.md)|Applies to [CFrameWnd Class](../mfcref/cframewnd-class.md) objects. Specify a combination of styles in the `dwStyle` parameter of [CFrameWnd::Create](../Topic/CFrameWnd::Create.md).|  
|[List-box styles](../mfcref/list-box-styles.md)|Applies to [CListBox Class](../mfcref/clistbox-class.md) objects. Specify a combination of styles in the `dwStyle` parameter of [CListBox::Create](../Topic/CListBox::Create.md).|  
|[Message-box styles](../mfcref/message-box-styles.md)|Applies to [AfxMessageBox](../Topic/AfxMessageBox.md) items. Specify a combination of styles in the `nType` parameter of `AfxMessageBox`.|  
|[Scroll-bar styles](../mfcref/scroll-bar-styles.md)|Applies to [CScrollBar Class](../mfcref/cscrollbar-class.md) objects. Specify a combination of styles in the `dwStyle` parameter of [CScrollBar::Create](../Topic/CScrollBar::Create.md).|  
|[Static styles](../mfcref/static-styles.md)|Applies to [CStatic Class](../mfcref/cstatic-class.md) objects. Specify a combination of styles in the `dwStyle` parameter of [CStatic::Create](../Topic/CStatic::Create.md).|  
|[Window styles](../mfcref/window-styles.md)|Applies to [CWnd Class](../mfcref/cwnd-class.md) objects. Specify a combination of styles in the `dwStyle` parameter of [CWnd::Create](../Topic/CWnd::Create.md) or [CWnd::CreateEx](../Topic/CWnd::CreateEx.md).|  
|[Extended window styles](../mfcref/extended-window-styles.md)|Applies to [CWnd Class](../mfcref/cwnd-class.md) objects. Specify a combination of styles in the `dwExStyle` parameter of [CWnd::CreateEx](../Topic/CWnd::CreateEx.md).|  
  
## See Also  
 [Class Overview](../mfc/class-library-overview.md)