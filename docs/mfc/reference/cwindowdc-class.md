---
title: "CWindowDC Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: ["CWindowDC", "AFXWIN/CWindowDC", "AFXWIN/CWindowDC::CWindowDC", "AFXWIN/CWindowDC::m_hWnd"]
dev_langs: ["C++"]
helpviewer_keywords: ["CWindowDC [MFC], CWindowDC", "CWindowDC [MFC], m_hWnd"]
ms.assetid: 876a3641-4cde-471c-b0d1-fe58b32af79c
caps.latest.revision: 22
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# CWindowDC Class
Derived from `CDC`.  
  
## Syntax  
  
```  
class CWindowDC : public CDC  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CWindowDC::CWindowDC](#cwindowdc)|Constructs a `CWindowDC` object.|  
  
### Protected Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CWindowDC::m_hWnd](#m_hwnd)|The `HWND` to which this `CWindowDC` is attached.|  
  
## Remarks  
 Calls the Windows function [GetWindowDC](http://msdn.microsoft.com/library/windows/desktop/dd144947\(v=vs.85\).aspx)at construction time and [ReleaseDC](http://msdn.microsoft.com/library/windows/desktop/dd162920\(v=vs.85\).aspx) at destruction time. This means that a `CWindowDC` object accesses the entire screen area of a [CWnd](../../mfc/reference/cwnd-class.md) (both client and nonclient areas).  
  
 For more information on using `CWindowDC`, see [Device Contexts](../../mfc/device-contexts.md).  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CDC](../../mfc/reference/cdc-class.md)  
  
 `CWindowDC`  
  
## Requirements  
 Header: afxwin.h  
  
##  <a name="cwindowdc"></a>  CWindowDC::CWindowDC  
 Constructs a `CWindowDC` object that accesses the entire screen area (both client and nonclient) of the `CWnd` object pointed to by `pWnd`.  
  
```  
explicit CWindowDC(CWnd* pWnd);
```  
  
### Parameters  
 `pWnd`  
 The window whose client area the device-context object will access.  
  
### Remarks  
 The constructor calls the Windows function [GetWindowDC](http://msdn.microsoft.com/library/windows/desktop/dd144947).  
  
 An exception (of type `CResourceException`) is thrown if the Windows `GetWindowDC` call fails. A device context may not be available if Windows has already allocated all of its available device contexts. Your application competes for the five common display contexts available at any given time under Windows.  
  
### Example  
 [!code-cpp[NVC_MFCDocView#188](../../mfc/codesnippet/cpp/cwindowdc-class_1.cpp)]  
  
##  <a name="m_hwnd"></a>  CWindowDC::m_hWnd  
 The `HWND` of the `CWnd` pointer is used to construct the `CWindowDC` object.  
  
```  
HWND m_hWnd;  
```  
  
### Remarks  
 `m_hWnd` is a protected variable of type `HWND`.  
  
### Example  
  See the example for [CWindowDC::CWindowDC](#cwindowdc).  
  
## See Also  
 [CDC Class](../../mfc/reference/cdc-class.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [CDC Class](../../mfc/reference/cdc-class.md)
