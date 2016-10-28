---
title: "COleDialog Class"
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
  - "COleDialog"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "OLE dialog boxes, base class"
  - "dialog boxes, OLE"
  - "COleDialog class"
ms.assetid: b1ed0aca-3914-4b00-af34-4a4fb491aec7
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
# COleDialog Class
Provides functionality common to dialog boxes for OLE.  
  
## Syntax  
  
```  
class COleDialog : public CCommonDialog  
```  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[COleDialog::GetLastError](#coledialog__getlasterror)|Gets the error code returned by the dialog box.|  
  
## Remarks  
 The Microsoft Foundation Class Library provides several classes derived from `COleDialog`:  
  
-   [COleInsertDialog](../mfcref/coleinsertdialog-class.md)  
  
-   [COleConvertDialog](../mfcref/coleconvertdialog-class.md)  
  
-   [COleChangeIconDialog](../mfcref/colechangeicondialog-class.md)  
  
-   [COleLinksDialog](../mfcref/colelinksdialog-class.md)  
  
-   [COleBusyDialog](../mfcref/colebusydialog-class.md)  
  
-   [COleUpdateDialog](../mfcref/coleupdatedialog-class.md)  
  
-   [COlePasteSpecialDialog](../mfcref/colepastespecialdialog-class.md)  
  
-   [COlePropertiesDialog](../mfcref/colepropertiesdialog-class.md)  
  
-   [COleChangeSourceDialog](../mfcref/colechangesourcedialog-class.md)  
  
 For more information about OLE-specific dialog boxes, see the article [Dialog Boxes in OLE](../mfc/dialog-boxes-in-ole.md).  
  
## Inheritance Hierarchy  
 [CObject](../mfcref/cobject-class.md)  
  
 [CCmdTarget](../mfcref/ccmdtarget-class.md)  
  
 [CWnd](../mfcref/cwnd-class.md)  
  
 [CDialog](../mfcref/cdialog-class.md)  
  
 [CCommonDialog](../mfcref/ccommondialog-class.md)  
  
 `COleDialog`  
  
## Requirements  
 **Header:** afxodlgs.h  
  
##  <a name="coledialog__getlasterror"></a>  COleDialog::GetLastError  
 Call the `GetLastError` member function to get additional error information when `DoModal` returns **IDABORT**.  
  
```  
UINT GetLastError() const;  
```  
  
### Return Value  
 The error codes returned by `GetLastError` depend on the specific dialog box displayed.  
  
### Remarks  
 See the `DoModal` member function in the derived classes for information about specific error messages.  
  
## See Also  
 [CCommonDialog Class](../mfcref/ccommondialog-class.md)   
 [Hierarchy Chart](../mfc/hierarchy-chart.md)