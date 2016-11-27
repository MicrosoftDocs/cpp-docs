---
title: "CClientDC Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CClientDC"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CClientDC class"
  - "device contexts, client area"
  - "client-area device context"
  - "CDC class, device contexts for client areas"
ms.assetid: 8a871d6b-06f8-496e-9fa3-9a5780848369
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
# CClientDC Class
Takes care of calling the Windows functions [GetDC](http://msdn.microsoft.com/library/windows/desktop/dd144871) at construction time and [ReleaseDC](http://msdn.microsoft.com/library/windows/desktop/dd162920) at destruction time.  
  
## Syntax  
  
```  
class CClientDC : public CDC  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CClientDC::CClientDC](#cclientdc__cclientdc)|Constructs a `CClientDC` object connected to the `CWnd`.|  
  
### Protected Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CClientDC::m_hWnd](#cclientdc__m_hwnd)|The `HWND` of the window for which this `CClientDC` is valid.|  
  
## Remarks  
 This means that the device context associated with a `CClientDC` object is the client area of a window.  
  
 For more information on `CClientDC`, see [Device Contexts](../../mfc/device-contexts.md).  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CDC](../../mfc/reference/cdc-class.md)  
  
 `CClientDC`  
  
## Requirements  
 **Header:** afxwin.h  
  
##  <a name="cclientdc__cclientdc"></a>  CClientDC::CClientDC  
 Constructs a `CClientDC` object that accesses the client area of the [CWnd](../../mfc/reference/cwnd-class.md) pointed to by `pWnd`.  
  
```  
explicit CClientDC(CWnd* pWnd);
```  
  
### Parameters  
 `pWnd`  
 The window whose client area the device context object will access.  
  
### Remarks  
 The constructor calls the Windows function [GetDC](http://msdn.microsoft.com/library/windows/desktop/dd144871).  
  
 An exception (of type `CResourceException`) is thrown if the Windows `GetDC` call fails. A device context may not be available if Windows has already allocated all of its available device contexts. Your application competes for the five common display contexts available at any given time under Windows.  
  
### Example  
 [!code-cpp[NVC_MFCDocView#42](../../mfc/codesnippet/cpp/cclientdc-class_1.cpp)]  
  
##  <a name="cclientdc__m_hwnd"></a>  CClientDC::m_hWnd  
 The `HWND` of the `CWnd` pointer used to construct the `CClientDC` object.  
  
```  
HWND m_hWnd;  
```  
  
### Remarks  
 `m_hWnd` is a protected variable.  
  
### Example  
  See the example for [CClientDC::CClientDC](#cclientdc__cclientdc).  
  
## See Also  
 [MFC Sample MDI](../../visual-cpp-samples.md)   
 [CDC Class](../../mfc/reference/cdc-class.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [CDC Class](../../mfc/reference/cdc-class.md)
