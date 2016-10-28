---
title: "CMFCDesktopAlertWndButton Class"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "reference"
f1_keywords: 
  - "CMFCDesktopAlertWndButton"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCDesktopAlertWndButton class"
ms.assetid: df39a0c8-0c39-4ab0-8c64-78c5b2c4ecaf
caps.latest.revision: 19
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
# CMFCDesktopAlertWndButton Class
Allows buttons to be added to a desktop alert dialog box.  
  
## Syntax  
  
```  
class CMFCDesktopAlertWndButton : public CMFCButton  
```  
  
## Members  
  
### Public Constructors  
  
|||  
|-|-|  
|Name|Description|  
|`CMFCDesktopAlertWndButton::CMFCDesktopAlertWndButton`|Default constructor.|  
|`CMFCDesktopAlertWndButton::~CMFCDesktopAlertWndButton`|Destructor.|  
  
### Public Methods  
  
|||  
|-|-|  
|Name|Description|  
|[CMFCDesktopAlertWndButton::IsCaptionButton](#cmfcdesktopalertwndbutton__iscaptionbutton)|Determines whether the button is displayed in the caption area of the alert dialog box.|  
|[CMFCDesktopAlertWndButton::IsCloseButton](#cmfcdesktopalertwndbutton__isclosebutton)|Determines whether the button closes the alert dialog box.|  
  
### Data Members  
  
|||  
|-|-|  
|Name|Description|  
|`CMFCDesktopAlertWndButton::m_bIsCaptionButton`|A Boolean value that specifies whether the button is displayed in the caption area of the alert dialog box.|  
|`CMFCDesktopAlertWndButton::m_bIsCloseButton`|A Boolean value that specifies whether the button closes the alert dialog box.|  
  
### Remarks  
 By default, the constructor sets the `m_bIsCaptionButton` and `m_bIsCloseButton` data members to `FALSE`. The parent `CMFCDesktopAlertDialog` object sets `m_bIsCaptionButton` to `TRUE` if the button is positioned in the caption area of the alert dialog box. The `CMFCDesktopAlertDialog` class creates a `CMFCDesktopAlertWndButton` object that serves as the button that closes the alert dialog box and sets `m_bIsCloseButton` to `TRUE`.  
  
 Add `CMFCDesktopAlertWndButton` objects to a `CMFCDesktopAlertDialog` object as you would add any button. For more information about `CMFCDesktopAlertDialog`, see [CMFCDesktopAlertDialog Class](../mfcref/cmfcdesktopalertdialog-class.md).  
  
## Example  
 The following example demonstrates how to use the `SetImage` method in the `CMFCDesktopAlertWndButton` class. This code snippet is part of the [Desktop Alert Demo sample](../top/visual-c---samples.md).  
  
 [!code[NVC_MFC_DesktopAlertDemo#4](../mfcref/codesnippet/CPP/cmfcdesktopalertwndbutton-class_1.h)]  
[!code[NVC_MFC_DesktopAlertDemo#5](../mfcref/codesnippet/CPP/cmfcdesktopalertwndbutton-class_2.cpp)]  
  
## Inheritance Hierarchy  
 [CObject](../mfcref/cobject-class.md)  
  
 [CCmdTarget](../mfcref/ccmdtarget-class.md)  
  
 [CWnd](../mfcref/cwnd-class.md)  
  
 [CButton](../mfcref/cbutton-class.md)  
  
 [CMFCButton](../mfcref/cmfcbutton-class.md)  
  
 [CMFCDesktopAlertWndButton](../mfcref/cmfcdesktopalertwndbutton-class.md)  
  
## Requirements  
 **Header:** afxdesktopalertwnd.h  
  
##  <a name="cmfcdesktopalertwndbutton__iscaptionbutton"></a>  CMFCDesktopAlertWndButton::IsCaptionButton  
 Determines whether the button is displayed in the caption area of the alert dialog box.  
  
```  
BOOL IsCaptionButton() const;  
```  
  
### Return Value  
 Nonzero if the button is displayed in the caption area of the alert dialog box; otherwise, 0.  
  
##  <a name="cmfcdesktopalertwndbutton__isclosebutton"></a>  CMFCDesktopAlertWndButton::IsCloseButton  
 Determines whether the button closes the alert dialog box.  
  
```  
BOOL IsCloseButton() const;  
```  
  
### Return Value  
 Nonzero if the button closes the alert dialog box; otherwise, 0.  
  
## See Also  
 [Hierarchy Chart](../mfc/hierarchy-chart.md)   
 [Classes](../mfcref/mfc-classes.md)   
 [CMFCDesktopAlertDialog Class](../mfcref/cmfcdesktopalertdialog-class.md)