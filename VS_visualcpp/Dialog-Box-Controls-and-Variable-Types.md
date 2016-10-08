---
title: "Dialog Box Controls and Variable Types"
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
ms.assetid: f9cd9cea-45a6-4349-8358-e5efbcdcff76
caps.latest.revision: 6
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
# Dialog Box Controls and Variable Types
You can use the [Add Member Variable Wizard](../VS_visualcpp/Add-Member-Variable-Wizard.md) to add a member variable to a dialog box control created using MFC. The type of control for which you add the member variable determines the options that appear in the dialog box.  
  
 The following table describes all dialog box control types supported in MFC and the [Dialog Editor](../VS_visualcpp/Dialog-Editor.md), and their available types and values.  
  
|Control|Control type|Control variable type|Value variable type|Min/max values (value type only)|  
|-------------|------------------|---------------------------|-------------------------|-----------------------------------------|  
|Animation control|SysAnimate32|[CAnimateCtrl](../VS_visualcpp/CAnimateCtrl-Class.md)|None; control only|N/A|  
|Button|BUTTON|[CButton](../VS_visualcpp/CButton-Class.md)|None; control only|N/A|  
|Check box|CHECK|[CButton](../VS_visualcpp/CButton-Class.md)|**BOOL**|Min value/Max value|  
|Combo box|COMBOBOX|[CComboBox](../VS_visualcpp/CComboBox-Class.md)|[CString](../VS_visualcpp/CStringT-Class.md)|Max characters|  
|Date time picker control|SysDateTimePick32|[CDateTimeCtrl](../VS_visualcpp/CDateTimeCtrl-Class.md)|[CTime](../VS_visualcpp/CTime-Class.md)|Min value/max value|  
|Edit box|EDIT|[CEdit](../VS_visualcpp/CEdit-Class.md)|`CString`, int, UINT, long, DWORD, float, double, BYTE, short, BOOL, `COleDateTime`, or **COleCurrency**|Min value/max value; some support max characters|  
|Hotkey control|msctls_hotkey32|[CHotKeyCtrl](../VS_visualcpp/CHotKeyCtrl-Class.md)|None; control only|N/A|  
|List box|LISTBOX|[CListBox](../VS_visualcpp/CListBox-Class.md)|`CString`|Max characters|  
|List control|SysListView32|[CListCtrl](../VS_visualcpp/CListCtrl-Class.md)|None; control only|N/A|  
|Month Calendar control|SysMonthCal32|[CMonthCalCtrl](../VS_visualcpp/CMonthCalCtrl-Class.md)|`CTime`|Min value/max value|  
|Progress control|msctls_progress32|[CProgressCtrl](../VS_visualcpp/CProgressCtrl-Class.md)|None; control only|N/A|  
|Rich Edit 2 control|RichEdit20A|[CRichEditCtrl](../VS_visualcpp/CRichEditCtrl-Class.md)|`CString`|Max characters|  
|Rich Edit control|RICHEDIT|`CRichEditCtrl`|`CString`|Max characters|  
|Scroll bar (vertical or horizontal|SCROLLBAR|[CScrollBar](../VS_visualcpp/CScrollBar-Class.md)|`int`|Min value/max value|  
|Slider control|msctls_trackbar32|[CSliderCtrl](../VS_visualcpp/CSliderCtrl-Class.md)|`int`|Min value/max value|  
|Spin control|msctls_updown32|[CSpinButtonCtrl](../VS_visualcpp/CSpinButtonCtrl-Class.md)|None; control only|N/A|  
|Tab control|SysTabControl32|[CTabCtrl](../VS_visualcpp/CTabCtrl-Class.md)|None; control only|N/A|  
|Tree control|SysTreeView32|[CTreeCtrl](../VS_visualcpp/CTreeCtrl-Class.md)|None; control only|N/A|  
  
## See Also  
 [Adding a Member Variable](../VS_visualcpp/Adding-a-Member-Variable---Visual-C---.md)