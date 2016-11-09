---
title: "CMFCPreviewCtrlImpl Class"
ms.custom: ""
ms.date: "10/28/2016"
ms.prod: "visual-studio-dev14"
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
|[CMFCPreviewCtrlImpl::~CMFCPreviewCtrlImpl](#cmfcpreviewctrlimpl__~cmfcpreviewctrlimpl)|Destructs a preview control object.|  
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
  
## Remarks  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CMFCPreviewCtrlImpl](../../mfc/reference/cmfcpreviewctrlimpl-class.md)
