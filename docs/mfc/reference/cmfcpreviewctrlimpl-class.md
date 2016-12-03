---
title: "CMFCPreviewCtrlImpl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMFCPreviewCtrlImpl"
  - "afxwin/CMFCPreviewCtrlImpl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCPreviewCtrlImpl class"
ms.assetid: 06257fa0-54c9-478d-9d68-c9698c3f93ed
caps.latest.revision: 28
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
# CMFCPreviewCtrlImpl Class
This class implements a window that is placed on a host window provided by the Shell for Rich Preview.  
  
## Syntax  
  
```  
class CMFCPreviewCtrlImpl : public CWnd;  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCPreviewCtrlImpl::~CMFCPreviewCtrlImpl](#cmfcpreviewctrlimpl__dtor)|Destructs a preview control object.|  
|[CMFCPreviewCtrlImpl::CMFCPreviewCtrlImpl](#cmfcpreviewctrlimpl__cmfcpreviewctrlimpl)|Constructs a preview control object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCPreviewCtrlImpl::Create](#cmfcpreviewctrlimpl__create)|Overloaded. Called by a Rich Preview handler to create the Windows window.|  
|[CMFCPreviewCtrlImpl::Destroy](#cmfcpreviewctrlimpl__destroy)|Called by a Rich Preview handler when it needs to destroy this control.|  
|[CMFCPreviewCtrlImpl::Focus](#cmfcpreviewctrlimpl__focus)|Sets input focus to this control.|  
|[CMFCPreviewCtrlImpl::GetDocument](#cmfcpreviewctrlimpl__getdocument)|Returns a document connected to this preview control.|  
|[CMFCPreviewCtrlImpl::Redraw](#cmfcpreviewctrlimpl__redraw)|Tells this control to redraw.|  
|[CMFCPreviewCtrlImpl::SetDocument](#cmfcpreviewctrlimpl__setdocument)|Called by the preview handler to create a relationship between the document implementation and the preview control.|  
|[CMFCPreviewCtrlImpl::SetHost](#cmfcpreviewctrlimpl__sethost)|Sets a new parent for this control.|  
|[CMFCPreviewCtrlImpl::SetPreviewVisuals](#cmfcpreviewctrlimpl__setpreviewvisuals)|Called by a Rich Preview handler when it needs to set visuals of rich preview content.|  
|[CMFCPreviewCtrlImpl::SetRect](#cmfcpreviewctrlimpl__setrect)|Sets a new bounding rectangle for this control.|  
  
### Protected Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCPreviewCtrlImpl::DoPaint](#cmfcpreviewctrlimpl__dopaint)|Called by the framework to render the preview.|  
  
### Protected Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCPreviewCtrlImpl::m_clrBackColor](#cmfcpreviewctrlimpl__m_clrbackcolor)|Background color of preview window.|  
|[CMFCPreviewCtrlImpl::m_clrTextColor](#cmfcpreviewctrlimpl__m_clrtextcolor)|Text color of preview window.|  
|[CMFCPreviewCtrlImpl::m_font](#cmfcpreviewctrlimpl__m_font)|Font used to display text in the preview window.|  
|[CMFCPreviewCtrlImpl::m_pDocument](#cmfcpreviewctrlimpl__m_pdocument)|A pointer to a document whose content is previewed in the control.|  
  
## Requirements  
 **Header:** afxwin.h    
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CMFCPreviewCtrlImpl](../../mfc/reference/cmfcpreviewctrlimpl-class.md)

## <a name="cmfcpreviewctrlimpl__cmfcpreviewctrlimpl"></a> CMFCPreviewCtrlImpl::CMFCPreviewCtrlImpl
Constructs a preview control object.

### Syntax
CMFCPreviewCtrlImpl();  

## <a name="cmfcpreviewctrlimpl__create"></a> CMFCPreviewCtrlImpl::Create
Overloaded. Called by a Rich Preview handler to create the Windows window.  
  
### Syntax  
  
```  
virtual BOOL Create(  
   HWND hWndParent,  
   const RECT* prc  
);  
virtual BOOL Create(  
   HWND hWndParent,  
   const RECT* prc,  
   CCreateContext* pContext  
);  
```  
  
### Parameters  
 `hWndParent`  
 A handle to the host window supplied by the Shell for Rich Preview.  
  
 `prc`  
 Specifies the initial size and position of the window.  
  
 `pContext`  
 A pointer to a creation context.  
  
### Return Value  
 `TRUE` if creation succeeded; otherwise `FALSE`.  
  
## <a name="cmfcpreviewctrlimpl__destroy"></a> CMFCPreviewCtrlImpl::Destroy
Called by a Rich Preview handler when it needs to destroy this control.  
  
### Syntax  
  
```  
virtual void Destroy();  
```  
  
## <a name="cmfcpreviewctrlimpl__dopaint"></a> CMFCPreviewCtrlImpl::DoPaint  
Called by the framework to render the preview.  
  
### Syntax  
  
```  
virtual void DoPaint(  
   CPaintDC* pDC  
);  
```  
  
### Parameters  
 `pDC`  
 A pointer to a device context for painting.  


## <a name="cmfcpreviewctrlimpl__focus"></a> CMFCPreviewCtrlImpl::Focus  
Sets input focus to this control.  
  
### Syntax  
  
```  
virtual void Focus();  
```  
## <a name="cmfcpreviewctrlimpl__getdocument"></a> CMFCPreviewCtrlImpl::GetDocument
Returns a document connected to this preview control.  
  
### Syntax  
  
```  
ATL::IDocument* GetDocument();  
```  
  
### Return Value  
 A pointer to a document, whose content is previewed in the control.

## <a name="cmfcpreviewctrlimpl__m_clrbackcolor"></a> CMFCPreviewCtrlImpl::m_clrBackColor  
Background color of the preview window.  
  
### Syntax  
  
```  
COLORREF m_clrBackColor;  
```  

## <a name="cmfcpreviewctrlimpl__m_clrtextcolor"></a> CMFCPreviewCtrlImpl::m_clrTextColor
Text color of the preview window.  
  
### Syntax  
  
```  
COLORREF m_clrTextColor;  
```  
## <a name="cmfcpreviewctrlimpl__m_font"></a> CMFCPreviewCtrlImpl::m_font  Font used to display text in the preview window.  
  
### Syntax  
  
```  
CFont m_font;  
```  
## <a name="cmfcpreviewctrlimpl__m_pdocument"></a> CMFCPreviewCtrlImpl::m_pDocument  
A pointer to a document whose content is previewed in the control.  
  
### Syntax  
  
```  
ATL::IDocument* m_pDocument;  
```  

## <a name="cmfcpreviewctrlimpl__redraw"></a> CMFCPreviewCtrlImpl::Redraw  
Tells this control to redraw.  
  
### Syntax  
  
```  
virtual void Redraw();  
```  
## <a name="cmfcpreviewctrlimpl__setdocument"></a> CMFCPreviewCtrlImpl::SetDocument 
Called by the preview handler to create a relationship between the document implementation and the preview control.  
  
### Syntax  
  
```  
void SetDocument(  
   IDocument* pDocument  
);  
```  
  
### Parameters  
 `pDocument`  
 A pointer to the document implementation.  

## <a name="cmfcpreviewctrlimpl__sethost"></a> CMFCPreviewCtrlImpl::SetHost  
Sets a new parent for this control.  
  
### Syntax  
  
```  
virtual void SetHost(  
   HWND hWndParent  
);  
```  
  
### Parameters  
 `hWndParent`  
 A handle to the new parent window.  

## <a name="cmfcpreviewctrlimpl__setpreviewvisuals"></a> CMFCPreviewCtrlImpl::SetPreviewVisuals  
Called by a Rich Preview handler when it needs to set visuals of rich preview content.  
  
### Syntax  
  
```  
virtual void SetPreviewVisuals(  
   COLORREF clrBack,  
   COLORREF clrText,  
   const LOGFONTW *plf  
);  
```  
  
### Parameters  
 `clrBack`  
 Background color of preview window.  
  
 `clrText`  
 Text color of preview window.  
  
 `plf`  
 Font used to display text in the preview window. 

##  <a name="cmfcpreviewctrlimpl__setrect"></a> CMFCPreviewCtrlImpl::SetRect  
Sets a new bounding rectangle for this control.  
  
### Syntax  
  
```  
virtual void SetRect(  
   const RECT* prc,  
   BOOL bRedraw  
);  
```  
  
### Parameters  
 `prc`  
 Specifies the new size and position of the preview control.  
  
 `bRedraw`  
 Specifies whether the control should be redrawn.  
  
### Remarks  
 Usually a new bounding rectangle is set when the host control is resized.  

## <a name="cmfcpreviewctrlimpl__dtor"></a> CMFCPreviewCtrlImpl::~CMFCPreviewCtrlImpl  
Destructs a preview control object.  
  
### Syntax  
  
```  
virtual ~CMFCPreviewCtrlImpl();  
```  
  
