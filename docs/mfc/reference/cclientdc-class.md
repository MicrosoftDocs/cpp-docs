---
title: "CClientDC Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "reference"
f1_keywords: ["CClientDC", "AFXWIN/CClientDC", "AFXWIN/CClientDC::CClientDC", "AFXWIN/CClientDC::m_hWnd"]
dev_langs: ["C++"]
helpviewer_keywords: ["CClientDC [MFC], CClientDC", "CClientDC [MFC], m_hWnd"]
ms.assetid: 8a871d6b-06f8-496e-9fa3-9a5780848369
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# CClientDC Class
Takes care of calling the Windows functions [GetDC](https://msdn.microsoft.com/library/windows/desktop/dd144871) at construction time and [ReleaseDC](https://msdn.microsoft.com/library/windows/desktop/dd162920) at destruction time.  
  
## Syntax  
  
```  
class CClientDC : public CDC  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CClientDC::CClientDC](#cclientdc)|Constructs a `CClientDC` object connected to the `CWnd`.|  
  
### Protected Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CClientDC::m_hWnd](#m_hwnd)|The HWND of the window for which this `CClientDC` is valid.|  
  
## Remarks  
 This means that the device context associated with a `CClientDC` object is the client area of a window.  
  
 For more information on `CClientDC`, see [Device Contexts](../../mfc/device-contexts.md).  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CDC](../../mfc/reference/cdc-class.md)  
  
 `CClientDC`  
  
## Requirements  
 **Header:** afxwin.h  
  
##  <a name="cclientdc"></a>  CClientDC::CClientDC  
 Constructs a `CClientDC` object that accesses the client area of the [CWnd](../../mfc/reference/cwnd-class.md) pointed to by *pWnd*.  
  
```  
explicit CClientDC(CWnd* pWnd);
```  
  
### Parameters  
 *pWnd*  
 The window whose client area the device context object will access.  
  
### Remarks  
 The constructor calls the Windows function [GetDC](https://msdn.microsoft.com/library/windows/desktop/dd144871).  
  
 An exception (of type `CResourceException`) is thrown if the Windows `GetDC` call fails. A device context may not be available if Windows has already allocated all of its available device contexts. Your application competes for the five common display contexts available at any given time under Windows.  
  
### Example  
 [!code-cpp[NVC_MFCDocView#42](../../mfc/codesnippet/cpp/cclientdc-class_1.cpp)]  
  
##  <a name="m_hwnd"></a>  CClientDC::m_hWnd  
 The `HWND` of the `CWnd` pointer used to construct the `CClientDC` object.  
  
```  
HWND m_hWnd;  
```  
  
### Remarks  
 *m_hWnd* is a protected variable.  
  
### Example  
  See the example for [CClientDC::CClientDC](#cclientdc).  
  
## See Also  
 [MFC Sample MDI](../../visual-cpp-samples.md)   
 [CDC Class](../../mfc/reference/cdc-class.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [CDC Class](../../mfc/reference/cdc-class.md)
