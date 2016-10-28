---
title: "Dialog Box Controls and Variable Types"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "dialog box controls, member variables"
  - "dialog box controls, variable types"
  - "variables, dialog box control member variables"
ms.assetid: f9cd9cea-45a6-4349-8358-e5efbcdcff76
caps.latest.revision: 6
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
|Animation control|SysAnimate32|[CAnimateCtrl](../mfcref/canimatectrl-class.md)|None; control only|N/A|  
|Button|BUTTON|[CButton](../mfcref/cbutton-class.md)|None; control only|N/A|  
|Check box|CHECK|[CButton](../mfcref/cbutton-class.md)|**BOOL**|Min value/Max value|  
|Combo box|COMBOBOX|[CComboBox](../mfcref/ccombobox-class.md)|[CString](../atl/cstringt-class.md)|Max characters|  
|Date time picker control|SysDateTimePick32|[CDateTimeCtrl](../mfcref/cdatetimectrl-class.md)|[CTime](../atl/ctime-class.md)|Min value/max value|  
|Edit box|EDIT|[CEdit](../mfcref/cedit-class.md)|`CString`, int, UINT, long, DWORD, float, double, BYTE, short, BOOL, `COleDateTime`, or **COleCurrency**|Min value/max value; some support max characters|  
|Hotkey control|msctls_hotkey32|[CHotKeyCtrl](../mfcref/chotkeyctrl-class.md)|None; control only|N/A|  
|List box|LISTBOX|[CListBox](../mfcref/clistbox-class.md)|`CString`|Max characters|  
|List control|SysListView32|[CListCtrl](../mfcref/clistctrl-class.md)|None; control only|N/A|  
|Month Calendar control|SysMonthCal32|[CMonthCalCtrl](../mfcref/cmonthcalctrl-class.md)|`CTime`|Min value/max value|  
|Progress control|msctls_progress32|[CProgressCtrl](../mfcref/cprogressctrl-class.md)|None; control only|N/A|  
|Rich Edit 2 control|RichEdit20A|[CRichEditCtrl](../mfcref/cricheditctrl-class.md)|`CString`|Max characters|  
|Rich Edit control|RICHEDIT|`CRichEditCtrl`|`CString`|Max characters|  
|Scroll bar (vertical or horizontal|SCROLLBAR|[CScrollBar](../mfcref/cscrollbar-class.md)|`int`|Min value/max value|  
|Slider control|msctls_trackbar32|[CSliderCtrl](../mfcref/csliderctrl-class.md)|`int`|Min value/max value|  
|Spin control|msctls_updown32|[CSpinButtonCtrl](../mfcref/cspinbuttonctrl-class.md)|None; control only|N/A|  
|Tab control|SysTabControl32|[CTabCtrl](../mfcref/ctabctrl-class.md)|None; control only|N/A|  
|Tree control|SysTreeView32|[CTreeCtrl](../mfcref/ctreectrl-class.md)|None; control only|N/A|  
  
## See Also  
 [Adding a Member Variable](../ide/adding-a-member-variable---visual-c---.md)