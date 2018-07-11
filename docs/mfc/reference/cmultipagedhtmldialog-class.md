---
title: "CMultiPageDHtmlDialog Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "reference"
f1_keywords: ["CMultiPageDHtmlDialog", "AFXDHTML/CMultiPageDHtmlDialog", "AFXDHTML/CMultiPageDHtmlDialog::CMultiPageDHtmlDialog"]
dev_langs: ["C++"]
helpviewer_keywords: ["CMultiPageDHtmlDialog [MFC], CMultiPageDHtmlDialog"]
ms.assetid: 971accc1-824d-4df4-b4c1-b1a20e0f7e4f
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# CMultiPageDHtmlDialog Class
A multipage dialog displays multiple HTML pages sequentially and handles the events from each page.  
  
## Syntax  
  
```  
class CMultiPageDHtmlDialog : public CDHtmlDialog  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CMultiPageDHtmlDialog::CMultiPageDHtmlDialog](#cmultipagedhtmldialog)|Constructs a multipage (wizard-style) DHTML dialog object.|  
|[CMultiPageDHtmlDialog::~CMultiPageDHtmlDialog](#cmultipagedhtmldialog__~cmultipagedhtmldialog)|Destroys a multipage DHTML dialog object.|  
  
## Remarks  
 The mechanism for doing this is a [DHTML and URL event map](dhtml-event-maps.md), which contains embedded event maps for each page.  
  
## Example  
 This multipage dialog assumes three HTML resources that define simple wizard-like functionality. The first page has a **Next** button, the second a **Prev** and **Next** button, and the third a **Prev** button. When one of the buttons is pressed, a handler function calls [CDHtmlDialog::LoadFromResource](../../mfc/reference/cdhtmldialog-class.md#loadfromresource) to load the appropriate new page.  
  
 The pertinent parts of the class declaration (in CMyMultiPageDlg.h):  
  
 [!code-cpp[NVC_MFCDocView#181](../../mfc/codesnippet/cpp/cmultipagedhtmldialog-class_1.h)]  
  
 The pertinent parts of the class implementation (in CMyMultipageDlg.cpp):  
  
 [!code-cpp[NVC_MFCDocView#182](../../mfc/codesnippet/cpp/cmultipagedhtmldialog-class_2.cpp)]  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CDHtmlSinkHandlerBase2`  
  
 `CDHtmlSinkHandlerBase1`  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 `CDHtmlSinkHandler`  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 `CDHtmlEventSink`  
  
 [CDialog](../../mfc/reference/cdialog-class.md)  
  
 [CDHtmlDialog](../../mfc/reference/cdhtmldialog-class.md)  
  
 `CMultiPageDHtmlDialog`  
  
## Requirements  
 **Header:** afxdhtml.h  
  
##  <a name="cmultipagedhtmldialog"></a>  CMultiPageDHtmlDialog::CMultiPageDHtmlDialog  
 Constructs a multipage (wizard-style) DHTML dialog object.  
  
```  
CMultiPageDHtmlDialog(
    LPCTSTR lpszTemplateName,  
    LPCTSTR szHtmlResID = NULL,  
    CWnd* pParentWnd = NULL);

 
CMultiPageDHtmlDialog(
    UINT nIDTemplate,  
    UINT nHtmlResID = 0,  
    CWnd* pParentWnd = NULL);  
  
CMultiPageDHtmlDialog();
```  
  
### Parameters  
 *lpszTemplateName*  
 The null-terminated string that is the name of a dialog-box template resource.  
  
 *szHtmlResID*  
 The null-terminated string that is the name of an HTML resource.  
  
 *pParentWnd*  
 A pointer to the parent or owner window object (of type [CWnd](../../mfc/reference/cwnd-class.md)) to which the dialog object belongs. If it is NULL, the dialog object's parent window is set to the main application window.  
  
 *nIDTemplate*  
 Contains the ID number of a dialog-box template resource.  
  
 *nHtmlResID*  
 Contains the ID number of an HTML resource.  
  
##  <a name="_dtorcmultipagedhtmldialog"></a>  CMultiPageDHtmlDialog::~CMultiPageDHtmlDialog  
 Destroys a multipage DHTML dialog object.  
  
```  
virtual ~CMultiPageDHtmlDialog();
```  
  
## See Also  
 [CDHtmlDialog Class](../../mfc/reference/cdhtmldialog-class.md)
