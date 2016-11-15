---
title: "Dialog Box Controls and Variable Types | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "dialog box controls, member variables"
  - "dialog box controls, variable types"
  - "variables, dialog box control member variables"
ms.assetid: f9cd9cea-45a6-4349-8358-e5efbcdcff76
caps.latest.revision: 6
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
# Dialog Box Controls and Variable Types
You can use the [Add Member Variable Wizard](../ide/add-member-variable-wizard.md) to add a member variable to a dialog box control created using MFC. The type of control for which you add the member variable determines the options that appear in the dialog box.  
  
 The following table describes all dialog box control types supported in MFC and the [Dialog Editor](../mfc/dialog-editor.md), and their available types and values.  
  
|Control|Control type|Control variable type|Value variable type|Min/max values (value type only)|  
|-------------|------------------|---------------------------|-------------------------|-----------------------------------------|  
|Animation control|SysAnimate32|[CAnimateCtrl](../mfc/reference/canimatectrl-class.md)|None; control only|N/A|  
|Button|BUTTON|[CButton](../mfc/reference/cbutton-class.md)|None; control only|N/A|  
|Check box|CHECK|[CButton](../mfc/reference/cbutton-class.md)|**BOOL**|Min value/Max value|  
|Combo box|COMBOBOX|[CComboBox](../mfc/reference/ccombobox-class.md)|[CString](../atl-mfc-shared/reference/cstringt-class.md)|Max characters|  
|Date time picker control|SysDateTimePick32|[CDateTimeCtrl](../mfc/reference/cdatetimectrl-class.md)|[CTime](../atl-mfc-shared/reference/ctime-class.md)|Min value/max value|  
|Edit box|EDIT|[CEdit](../mfc/reference/cedit-class.md)|`CString`, int, UINT, long, DWORD, float, double, BYTE, short, BOOL, `COleDateTime`, or **COleCurrency**|Min value/max value; some support max characters|  
|Hotkey control|msctls_hotkey32|[CHotKeyCtrl](../mfc/reference/chotkeyctrl-class.md)|None; control only|N/A|  
|List box|LISTBOX|[CListBox](../mfc/reference/clistbox-class.md)|`CString`|Max characters|  
|List control|SysListView32|[CListCtrl](../mfc/reference/clistctrl-class.md)|None; control only|N/A|  
|Month Calendar control|SysMonthCal32|[CMonthCalCtrl](../mfc/reference/cmonthcalctrl-class.md)|`CTime`|Min value/max value|  
|Progress control|msctls_progress32|[CProgressCtrl](../mfc/reference/cprogressctrl-class.md)|None; control only|N/A|  
|Rich Edit 2 control|RichEdit20A|[CRichEditCtrl](../mfc/reference/cricheditctrl-class.md)|`CString`|Max characters|  
|Rich Edit control|RICHEDIT|`CRichEditCtrl`|`CString`|Max characters|  
|Scroll bar (vertical or horizontal|SCROLLBAR|[CScrollBar](../mfc/reference/cscrollbar-class.md)|`int`|Min value/max value|  
|Slider control|msctls_trackbar32|[CSliderCtrl](../mfc/reference/csliderctrl-class.md)|`int`|Min value/max value|  
|Spin control|msctls_updown32|[CSpinButtonCtrl](../mfc/reference/cspinbuttonctrl-class.md)|None; control only|N/A|  
|Tab control|SysTabControl32|[CTabCtrl](../mfc/reference/ctabctrl-class.md)|None; control only|N/A|  
|Tree control|SysTreeView32|[CTreeCtrl](../mfc/reference/ctreectrl-class.md)|None; control only|N/A|  
  
## See Also  
 [Adding a Member Variable](../ide/adding-a-member-variable-visual-cpp.md)