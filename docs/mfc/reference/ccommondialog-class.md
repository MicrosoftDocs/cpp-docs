---
title: "CCommonDialog Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CCommonDialog"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "dialog boxes [C++], Windows common dialogs"
  - "common dialog boxes [C++], common dialog classes"
  - "common dialog classes [C++]"
  - "MFC dialog boxes, Windows common dialogs"
  - "Windows common dialogs [C++]"
  - "CCommonDialog class"
  - "dialog classes [C++], common"
ms.assetid: 1f68d65f-a0fd-4778-be22-ebbe51a95f95
caps.latest.revision: 20
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
# CCommonDialog Class
The base class for classes that encapsulate functionality of the Windows common dialogs.  
  
## Syntax  
  
```  
class CCommonDialog : public CDialog  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CCommonDialog::CCommonDialog](#ccommondialog__ccommondialog)|Constructs a `CCommonDialog` object.|  
  
## Remarks  
 The following classes encapsulate the functionality of the Windows common dialogs:  
  
- [CFileDialog](../../mfc/reference/cfiledialog-class.md)  
  
- [CFontDialog](../../mfc/reference/cfontdialog-class.md)  
  
- [CColorDialog](../../mfc/reference/ccolordialog-class.md)  
  
- [CPageSetupDialog](../../mfc/reference/cpagesetupdialog-class.md)  
  
- [CPrintDialog](../../mfc/reference/cprintdialog-class.md)  
  
- [CPrintDialogEx](../../mfc/reference/cprintdialogex-class.md)  
  
- [CFindReplaceDialog](../../mfc/reference/cfindreplacedialog-class.md)  
  
- [COleDialog](../../mfc/reference/coledialog-class.md)  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CDialog](../../mfc/reference/cdialog-class.md)  
  
 `CCommonDialog`  
  
## Requirements  
 **Header:** afxdlgs.h  
  
##  <a name="ccommondialog__ccommondialog"></a>  CCommonDialog::CCommonDialog  
 Constructs a `CCommonDialog` object.  
  
```  
explicit CCommonDialog(CWnd* pParentWnd);
```  
  
### Parameters  
 `pParentWnd`  
 Points to the parent or owner window object (of type [CWnd](../../mfc/reference/cwnd-class.md)) to which the dialog object belongs. If it is **NULL**, the dialog object's parent window is set to the main application window.  
  
### Remarks  
 See [CDialog::CDialog](../../mfc/reference/cdialog-class.md#cdialog__cdialog) for complete information.  
  
## See Also  
 [CDialog Class](../../mfc/reference/cdialog-class.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [CFileDialog Class](../../mfc/reference/cfiledialog-class.md)   
 [CFontDialog Class](../../mfc/reference/cfontdialog-class.md)   
 [CColorDialog Class](../../mfc/reference/ccolordialog-class.md)   
 [CPageSetupDialog Class](../../mfc/reference/cpagesetupdialog-class.md)   
 [CPrintDialog Class](../../mfc/reference/cprintdialog-class.md)   
 [CFindReplaceDialog Class](../../mfc/reference/cfindreplacedialog-class.md)   
 [COleDialog Class](../../mfc/reference/coledialog-class.md)
