---
title: "CHtmlEditView Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CHtmlEditView"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CHtmlEditView class"
ms.assetid: 166c8ba8-3fb5-4dd7-a9ea-5bca662d00f6
caps.latest.revision: 24
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
# CHtmlEditView Class
Provides the functionality of the WebBrowser editing platform within the context of MFC's document/view architecture.  
  
## Syntax  
  
```  
class CHtmlEditView : public CHtmlView, public CHtmlEditCtrlBase<CHtmlEditView>  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CHtmlEditView::CHtmlEditView](#chtmleditview__chtmleditview)|Constructs a `CHtmlEditView` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CHtmlEditView::Create](#chtmleditview__create)|Creates a new window object.|  
|[CHtmlEditView::GetDHtmlDocument](#chtmleditview__getdhtmldocument)|Returns the **IHTMLDocument2** interface on the current document.|  
|[CHtmlEditView::GetStartDocument](#chtmleditview__getstartdocument)|Retrieves the name of the default document for this view.|  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CView](../../mfc/reference/cview-class.md)  
  
 [CScrollView](../../mfc/reference/cscrollview-class.md)  
  
 [CFormView](../../mfc/reference/cformview-class.md)  
  
 [CHtmlEditCtrlBase](../../mfc/reference/chtmleditctrlbase-class.md)  
  
 [CHtmlView](../../mfc/reference/chtmlview-class.md)  
  
 `CHtmlEditView`  
  
## Requirements  
 **Header:** afxhtml.h  
  
##  <a name="chtmleditview__chtmleditview"></a>  CHtmlEditView::CHtmlEditView  
 Constructs a `CHtmlEditView` object.  
  
```  
CHtmlEditView();
```  
  
##  <a name="chtmleditview__create"></a>  CHtmlEditView::Create  
 Creates a new window object.  
  
```  
virtual BOOL Create(
    LPCTSTR lpszClassName,  
    LPCTSTR lpszWindowName,  
    DWORD dwStyle,  
    const RECT& rect,  
    CWnd* pParentWnd,  
    UINT nID,  
    CCreateContext* pContext = NULL);
```  
  
### Parameters  
 `lpszClassName`  
 Points to a null-terminated character string that names the Windows class. The class name can be any name registered with the [AfxRegisterWndClass](application-information-and-management.md#afxregisterwndclass) global function or the **RegisterClass** Windows function. If **NULL**, uses the predefined default [CFrameWnd](../../mfc/reference/cframewnd-class.md) attributes.  
  
 `lpszWindowName`  
 Points to a null-terminated character string that represents the window name.  
  
 `dwStyle`  
 Specifies the window style attributes. By default, the **WS_VISIBLE** and **WS_CHILD** Windows styles are set.  
  
 `rect`  
 A reference to a [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) structure specifying the size and position of the window. The `rectDefault` value allows Windows to specify the size and position of the new window.  
  
 `pParentWnd`  
 A pointer to the parent window of the control.  
  
 `nID`  
 The ID number of the view. By default, set to **AFX_IDW_PANE_FIRST**.  
  
 `pContext`  
 A pointer to a [CCreateContext](../../mfc/reference/ccreatecontext-structure.md). **NULL** by default.  
  
### Remarks  
 This method will also call the contained WebBrowser's **Navigate** method to load a default document (see [CHtmlEditView::GetStartDocument](#chtmleditview__getstartdocument)).  
  
##  <a name="chtmleditview__getdhtmldocument"></a>  CHtmlEditView::GetDHtmlDocument  
 Returns the **IHTMLDocument2** interface on the current document.  
  
```  
BOOL GetDHtmlDocument(IHTMLDocument2** ppDocument) const;

 
```  
  
### Parameters  
 `ppDocument`  
 The [IHTMLDocument2](https://msdn.microsoft.com/library/aa752574.aspx) interface.  
  
##  <a name="chtmleditview__getstartdocument"></a>  CHtmlEditView::GetStartDocument  
 Retrieves the name of the default document for this view.  
  
```  
virtual LPCTSTR GetStartDocument();
```  
  
## See Also  
 [HTMLEdit Sample](../../visual-cpp-samples.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)


