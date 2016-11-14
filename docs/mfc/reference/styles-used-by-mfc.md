---
title: "Styles Used by MFC | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
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
caps.latest.revision: 10
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
# Styles Used by MFC
Use the following styles when you create the corresponding MFC object. In most cases, these styles are set in the `dwStyle` parameter of the class **Create** function.  
  
### MFC Styles  
  
|Style|Description|  
|-----------|-----------------|  
|[Button styles](../../mfc/reference/button-styles.md)|Applies to [CButton Class](../../mfc/reference/cbutton-class.md) objects, such as radio buttons, check boxes and pushbuttons. Specify a combination of styles in the `dwStyle` parameter of [CButton::Create](../../mfc/reference/cbutton-class.md#cbutton__create).|  
|[Combo-box styles](../../mfc/reference/combo-box-styles.md)|Applies to [CComboBox Class](../../mfc/reference/ccombobox-class.md) objects. Specify a combination of styles in the `dwStyle` parameter of [CComboBox::Create](../../mfc/reference/ccombobox-class.md#ccombobox__create).|  
|[Edit styles](../../mfc/reference/edit-styles.md)|Applies to [CEdit Class](../../mfc/reference/cedit-class.md) objects. Specify a combination of styles in the `dwStyle` parameter of [CEdit::Create](../../mfc/reference/cedit-class.md#cedit__create).|  
|[Frame-window styles](../../mfc/reference/frame-window-styles-mfc.md)|Applies to [CFrameWnd Class](../../mfc/reference/cframewnd-class.md) objects. Specify a combination of styles in the `dwStyle` parameter of [CFrameWnd::Create](../../mfc/reference/cframewnd-class.md#cframewnd__create).|  
|[List-box styles](../../mfc/reference/list-box-styles.md)|Applies to [CListBox Class](../../mfc/reference/clistbox-class.md) objects. Specify a combination of styles in the `dwStyle` parameter of [CListBox::Create](../../mfc/reference/clistbox-class.md#clistbox__create).|  
|[Message-box styles](../../mfc/reference/message-box-styles.md)|Applies to [AfxMessageBox](../../mfc/reference/cstring-formatting-and-message-box-display.md#afxmessagebox) items. Specify a combination of styles in the `nType` parameter of `AfxMessageBox`.|  
|[Scroll-bar styles](../../mfc/reference/scroll-bar-styles.md)|Applies to [CScrollBar Class](../../mfc/reference/cscrollbar-class.md) objects. Specify a combination of styles in the `dwStyle` parameter of [CScrollBar::Create](../../mfc/reference/cscrollbar-class.md#cscrollbar__create).|  
|[Static styles](../../mfc/reference/static-styles.md)|Applies to [CStatic Class](../../mfc/reference/cstatic-class.md) objects. Specify a combination of styles in the `dwStyle` parameter of [CStatic::Create](../../mfc/reference/cstatic-class.md#cstatic__create).|  
|[Window styles](../../mfc/reference/window-styles.md)|Applies to [CWnd Class](../../mfc/reference/cwnd-class.md) objects. Specify a combination of styles in the `dwStyle` parameter of [CWnd::Create](../../mfc/reference/cwnd-class.md#cwnd__create) or [CWnd::CreateEx](../../mfc/reference/cwnd-class.md#cwnd__createex).|  
|[Extended window styles](../../mfc/reference/extended-window-styles.md)|Applies to [CWnd Class](../../mfc/reference/cwnd-class.md) objects. Specify a combination of styles in the `dwExStyle` parameter of [CWnd::CreateEx](../../mfc/reference/cwnd-class.md#cwnd__createex).|  
  
## See Also  
 [Class Overview](../../mfc/class-library-overview.md)

