---
title: "CFolderPickerDialog Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "afxdlgs/CFolderPickerDialog"
  - "CFolderPickerDialog"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CFolderPickerDialog class"
ms.assetid: 8db01684-dd1d-4e9c-989e-07a2318a8156
caps.latest.revision: 22
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
# CFolderPickerDialog Class
CFolderPickerDialog class implements CFileDialog in the folder picker mode.  
  
## Syntax  
  
```  
class CFolderPickerDialog : public CFileDialog;  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CFolderPickerDialog::~CFolderPickerDialog](#cfolderpickerdialog__~cfolderpickerdialog)|Destructor.|  
|[CFolderPickerDialog::CFolderPickerDialog](#cfolderpickerdialog__cfolderpickerdialog)|Constructor.|  
  
## Remarks  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CDialog](../../mfc/reference/cdialog-class.md)  
  
 [CCommonDialog](../../mfc/reference/ccommondialog-class.md)  
  
 [CFileDialog](../../mfc/reference/cfiledialog-class.md)  
  
 `CFolderPickerDialog`  
  
## Requirements  
 **Header:** afxdlgs.h  
  
##  <a name="cfolderpickerdialog__cfolderpickerdialog"></a>  CFolderPickerDialog::CFolderPickerDialog  
 Constructor.  
  
```  
explicit CFolderPickerDialog(
    LPCTSTR lpszFolder = NULL,  
    DWORD dwFlags = 0,  
    CWnd* pParentWnd = NULL,  
    DWORD dwSize = 0);
```  
  
### Parameters  
 `lpszFolder`  
 Initial folder.  
  
 `dwFlags`  
 A combination of one or more flags that allow you to customize the dialog box.  
  
 `pParentWnd`  
 A pointer to the dialog box object's parent or owner window.  
  
 `dwSize`  
 The size of the OPENFILENAME structure.  
  
### Remarks  
  
##  <a name="cfolderpickerdialog___dtorcfolderpickerdialog"></a>  CFolderPickerDialog::~CFolderPickerDialog  
 Destructor.  
  
```  
virtual ~CFolderPickerDialog();
```  
  
### Remarks  
  
## See Also  
 [Classes](../../mfc/reference/mfc-classes.md)
