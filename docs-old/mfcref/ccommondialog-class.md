---
title: "CCommonDialog Class"
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
caps.latest.revision: 17
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
  
-   [CFileDialog](../mfcref/cfiledialog-class.md)  
  
-   [CFontDialog](../mfcref/cfontdialog-class.md)  
  
-   [CColorDialog](../mfcref/ccolordialog-class.md)  
  
-   [CPageSetupDialog](../mfcref/cpagesetupdialog-class.md)  
  
-   [CPrintDialog](../mfcref/cprintdialog-class.md)  
  
-   [CPrintDialogEx](../mfcref/cprintdialogex-class.md)  
  
-   [CFindReplaceDialog](../mfcref/cfindreplacedialog-class.md)  
  
-   [COleDialog](../mfcref/coledialog-class.md)  
  
## Inheritance Hierarchy  
 [CObject](../mfcref/cobject-class.md)  
  
 [CCmdTarget](../mfcref/ccmdtarget-class.md)  
  
 [CWnd](../mfcref/cwnd-class.md)  
  
 [CDialog](../mfcref/cdialog-class.md)  
  
 `CCommonDialog`  
  
## Requirements  
 **Header:** afxdlgs.h  
  
##  <a name="ccommondialog__ccommondialog"></a>  CCommonDialog::CCommonDialog  
 Constructs a `CCommonDialog` object.  
  
```  
explicit CCommonDialog( CWnd* pParentWnd );  
```  
  
### Parameters  
 `pParentWnd`  
 Points to the parent or owner window object (of type [CWnd](../mfcref/cwnd-class.md)) to which the dialog object belongs. If it is **NULL**, the dialog object's parent window is set to the main application window.  
  
### Remarks  
 See [CDialog::CDialog](../mfcref/cdialog-class.md#cdialog__cdialog) for complete information.  
  
## See Also  
 [CDialog Class](../mfcref/cdialog-class.md)   
 [Hierarchy Chart](../mfc/hierarchy-chart.md)   
 [CFileDialog Class](../mfcref/cfiledialog-class.md)   
 [CFontDialog Class](../mfcref/cfontdialog-class.md)   
 [CColorDialog Class](../mfcref/ccolordialog-class.md)   
 [CPageSetupDialog Class](../mfcref/cpagesetupdialog-class.md)   
 [CPrintDialog Class](../mfcref/cprintdialog-class.md)   
 [CFindReplaceDialog Class](../mfcref/cfindreplacedialog-class.md)   
 [COleDialog Class](../mfcref/coledialog-class.md)