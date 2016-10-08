---
title: "CWindowDC Class"
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
ms.assetid: 876a3641-4cde-471c-b0d1-fe58b32af79c
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
|[CWindowDC::CWindowDC](#cwindowdc__cwindowdc)|Constructs a `CWindowDC` object.|  
  
### Protected Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CWindowDC::m_hWnd](#cwindowdc__m_hwnd)|The `HWND` to which this `CWindowDC` is attached.|  
  
## Remarks  
 Calls the Windows function                 [GetWindowDC](http://msdn.microsoft.com/library/windows/desktop/dd144947\(v=vs.85\).aspx)at construction time and                 [ReleaseDC](http://msdn.microsoft.com/library/windows/desktop/dd162920\(v=vs.85\).aspx) at destruction time. This means that a `CWindowDC` object accesses the entire screen area of a [CWnd](../VS_visualcpp/CWnd-Class.md) (both client and nonclient areas).  
  
 For more information on using `CWindowDC`, see [Device Contexts](../VS_visualcpp/Device-Contexts.md).  
  
## Inheritance Hierarchy  
 [CObject](../VS_visualcpp/CObject-Class.md)  
  
 [CDC](../VS_visualcpp/CDC-Class.md)  
  
 `CWindowDC`  
  
## Requirements  
 Header: afxwin.h  
  
##  <a name="cwindowdc__cwindowdc"></a>  CWindowDC::CWindowDC  
 Constructs a `CWindowDC` object that accesses the entire screen area (both client and nonclient) of the `CWnd` object pointed to by `pWnd`.  
  
```  
explicit CWindowDC( CWnd* pWnd );  
```  
  
### Parameters  
 `pWnd`  
 The window whose client area the device-context object will access.  
  
### Remarks  
 The constructor calls the Windows function                         [GetWindowDC](http://msdn.microsoft.com/library/windows/desktop/dd144947).  
  
 An exception (of type `CResourceException`) is thrown if the Windows `GetWindowDC` call fails. A device context may not be available if Windows has already allocated all of its available device contexts. Your application competes for the five common display contexts available at any given time under Windows.  
  
### Example  
 [!CODE [NVC_MFCDocView#188](../CodeSnippet/VS_Snippets_Cpp/NVC_MFCDocView#188)]  
  
##  <a name="cwindowdc__m_hwnd"></a>  CWindowDC::m_hWnd  
 The `HWND` of the `CWnd` pointer is used to construct the `CWindowDC` object.  
  
```  
HWND m_hWnd;  
```  
  
### Remarks  
 `m_hWnd` is a protected variable of type `HWND`.  
  
### Example  
  See the example for [CWindowDC::CWindowDC](#cwindowdc__cwindowdc).  
  
## See Also  
 [CDC Class](../VS_visualcpp/CDC-Class.md)   
 [Hierarchy Chart](../VS_visualcpp/Hierarchy-Chart.md)   
 [CDC Class](../VS_visualcpp/CDC-Class.md)