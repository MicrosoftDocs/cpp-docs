---
title: "CMultiPageDHtmlDialog Class"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: reference
ms.assetid: 971accc1-824d-4df4-b4c1-b1a20e0f7e4f
caps.latest.revision: 18
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
|[CMultiPageDHtmlDialog::CMultiPageDHtmlDialog](#cmultipagedhtmldialog__cmultipagedhtmldialog)|Constructs a multipage (wizard-style) DHTML dialog object.|  
|[CMultiPageDHtmlDialog::~CMultiPageDHtmlDialog](#cmultipagedhtmldialog__~cmultipagedhtmldialog)|Destroys a multipage DHTML dialog object.|  
  
## Remarks  
 The mechanism for doing this is a [DHTML and URL event map](assetId:///2a7332f0-79d7-46e4-b816-0a618c46777a), which contains [embedded event maps](../Topic/BEGIN_EMBED_DHTML_EVENT_MAP.md) for each page.  
  
## Example  
 This multipage dialog assumes three HTML resources that define simple wizard-like functionality. The first page has a `Next` button, the second a **Prev** and `Next` button, and the third a **Prev** button. When one of the buttons is pressed, a handler function calls [CDHtmlDialog::LoadFromResource](../VS_visualcpp/CDHtmlDialog-Class.md#cdhtmldialog__loadfromresource) to load the appropriate new page.  
  
 The pertinent parts of the class declaration (in CMyMultiPageDlg.h):  
  
 [!CODE [NVC_MFCDocView#181](../CodeSnippet/VS_Snippets_Cpp/NVC_MFCDocView#181)]  
  
 The pertinent parts of the class implementation (in CMyMultipageDlg.cpp):  
  
 [!CODE [NVC_MFCDocView#182](../CodeSnippet/VS_Snippets_Cpp/NVC_MFCDocView#182)]  
  
## Inheritance Hierarchy  
 [CObject](../VS_visualcpp/CObject-Class.md)  
  
 `CDHtmlSinkHandlerBase2`  
  
 `CDHtmlSinkHandlerBase1`  
  
 [CCmdTarget](../VS_visualcpp/CCmdTarget-Class.md)  
  
 `CDHtmlSinkHandler`  
  
 [CWnd](../VS_visualcpp/CWnd-Class.md)  
  
 `CDHtmlEventSink`  
  
 [CDialog](../VS_visualcpp/CDialog-Class.md)  
  
 [CDHtmlDialog](../VS_visualcpp/CDHtmlDialog-Class.md)  
  
 `CMultiPageDHtmlDialog`  
  
## Requirements  
 **Header:** afxdhtml.h  
  
##  <a name="cmultipagedhtmldialog__cmultipagedhtmldialog"></a>  CMultiPageDHtmlDialog::CMultiPageDHtmlDialog  
 Constructs a multipage (wizard-style) DHTML dialog object.  
  
```  
CMultiPageDHtmlDialog(  
    LPCTSTR lpszTemplateName,  
    LPCTSTR szHtmlResID = NULL,  
    CWnd * pParentWnd = NULL  );  
  
CMultiPageDHtmlDialog(  
    UINT nIDTemplate,  
    UINT nHtmlResID = 0,  
    CWnd * pParentWnd = NULL  );  
  
CMultiPageDHtmlDialog();  
```  
  
### Parameters  
 `lpszTemplateName`  
 The null-terminated string that is the name of a dialog-box template resource.  
  
 `szHtmlResID`  
 The null-terminated string that is the name of an HTML resource.  
  
 `pParentWnd`  
 A pointer to the parent or owner window object (of type [CWnd](../VS_visualcpp/CWnd-Class.md)) to which the dialog object belongs. If it is **NULL**, the dialog object's parent window is set to the main application window.  
  
 `nIDTemplate`  
 Contains the ID number of a dialog-box template resource.  
  
 `nHtmlResID`  
 Contains the ID number of an HTML resource.  
  
##  <a name="cmultipagedhtmldialog___dtorcmultipagedhtmldialog"></a>  CMultiPageDHtmlDialog::~CMultiPageDHtmlDialog  
 Destroys a multipage DHTML dialog object.  
  
```  
virtual ~CMultiPageDHtmlDialog();  
```  
  
## See Also  
 [CDHtmlDialog Class](../VS_visualcpp/CDHtmlDialog-Class.md)   
 [Multipage DHTML and URL Event Maps (NIB)](assetId:///2a7332f0-79d7-46e4-b816-0a618c46777a)