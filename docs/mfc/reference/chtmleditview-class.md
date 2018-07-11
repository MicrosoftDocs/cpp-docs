---
title: "CHtmlEditView Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "reference"
f1_keywords: ["CHtmlEditView", "AFXHTML/CHtmlEditView", "AFXHTML/CHtmlEditView::CHtmlEditView", "AFXHTML/CHtmlEditView::Create", "AFXHTML/CHtmlEditView::GetDHtmlDocument", "AFXHTML/CHtmlEditView::GetStartDocument"]
dev_langs: ["C++"]
helpviewer_keywords: ["CHtmlEditView [MFC], CHtmlEditView", "CHtmlEditView [MFC], Create", "CHtmlEditView [MFC], GetDHtmlDocument", "CHtmlEditView [MFC], GetStartDocument"]
ms.assetid: 166c8ba8-3fb5-4dd7-a9ea-5bca662d00f6
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
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
|[CHtmlEditView::CHtmlEditView](#chtmleditview)|Constructs a `CHtmlEditView` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CHtmlEditView::Create](#create)|Creates a new window object.|  
|[CHtmlEditView::GetDHtmlDocument](#getdhtmldocument)|Returns the `IHTMLDocument2` interface on the current document.|  
|[CHtmlEditView::GetStartDocument](#getstartdocument)|Retrieves the name of the default document for this view.|  
  
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
  
##  <a name="chtmleditview"></a>  CHtmlEditView::CHtmlEditView  
 Constructs a `CHtmlEditView` object.  
  
```  
CHtmlEditView();
```  
  
##  <a name="create"></a>  CHtmlEditView::Create  
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
 *lpszClassName*  
 Points to a null-terminated character string that names the Windows class. The class name can be any name registered with the [AfxRegisterWndClass](application-information-and-management.md#afxregisterwndclass) global function or the `RegisterClass` Windows function. If NULL, uses the predefined default [CFrameWnd](../../mfc/reference/cframewnd-class.md) attributes.  
  
 *lpszWindowName*  
 Points to a null-terminated character string that represents the window name.  
  
 *dwStyle*  
 Specifies the window style attributes. By default, the WS_VISIBLE and WS_CHILD Windows styles are set.  
  
 *rect*  
 A reference to a [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) structure specifying the size and position of the window. The *rectDefault* value allows Windows to specify the size and position of the new window.  
  
 *pParentWnd*  
 A pointer to the parent window of the control.  
  
 *nID*  
 The ID number of the view. By default, set to AFX_IDW_PANE_FIRST.  
  
 *pContext*  
 A pointer to a [CCreateContext](../../mfc/reference/ccreatecontext-structure.md). NULL by default.  
  
### Remarks  
 This method will also call the contained WebBrowser's `Navigate` method to load a default document (see [CHtmlEditView::GetStartDocument](#getstartdocument)).  
  
##  <a name="getdhtmldocument"></a>  CHtmlEditView::GetDHtmlDocument  
 Returns the `IHTMLDocument2` interface on the current document.  
  
```  
BOOL GetDHtmlDocument(IHTMLDocument2** ppDocument) const;  
```  
  
### Parameters  
 *ppDocument*  
 The [IHTMLDocument2](https://msdn.microsoft.com/library/aa752574.aspx) interface.  
  
##  <a name="getstartdocument"></a>  CHtmlEditView::GetStartDocument  
 Retrieves the name of the default document for this view.  
  
```  
virtual LPCTSTR GetStartDocument();
```  
  
## See Also  
 [HTMLEdit Sample](../../visual-cpp-samples.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)


