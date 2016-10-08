---
title: "CClientDC Class"
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
ms.assetid: 8a871d6b-06f8-496e-9fa3-9a5780848369
caps.latest.revision: 19
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
# CClientDC Class
Takes care of calling the Windows functions             [GetDC](http://msdn.microsoft.com/library/windows/desktop/dd144871) at construction time and             [ReleaseDC](http://msdn.microsoft.com/library/windows/desktop/dd162920) at destruction time.  
  
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
  
 For more information on `CClientDC`, see [Device Contexts](../VS_visualcpp/Device-Contexts.md).  
  
## Inheritance Hierarchy  
 [CObject](../VS_visualcpp/CObject-Class.md)  
  
 [CDC](../VS_visualcpp/CDC-Class.md)  
  
 `CClientDC`  
  
## Requirements  
 **Header:** afxwin.h  
  
##  <a name="cclientdc__cclientdc"></a>  CClientDC::CClientDC  
 Constructs a `CClientDC` object that accesses the client area of the [CWnd](../VS_visualcpp/CWnd-Class.md) pointed to by `pWnd`.  
  
```  
explicit CClientDC( CWnd* pWnd );  
```  
  
### Parameters  
 `pWnd`  
 The window whose client area the device context object will access.  
  
### Remarks  
 The constructor calls the Windows function                         [GetDC](http://msdn.microsoft.com/library/windows/desktop/dd144871).  
  
 An exception (of type `CResourceException`) is thrown if the Windows `GetDC` call fails. A device context may not be available if Windows has already allocated all of its available device contexts. Your application competes for the five common display contexts available at any given time under Windows.  
  
### Example  
 [!CODE [NVC_MFCDocView#42](../CodeSnippet/VS_Snippets_Cpp/NVC_MFCDocView#42)]  
  
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
 [MFC Sample MDI](../VS_visualcpp/Visual-C---Samples.md)   
 [CDC Class](../VS_visualcpp/CDC-Class.md)   
 [Hierarchy Chart](../VS_visualcpp/Hierarchy-Chart.md)   
 [CDC Class](../VS_visualcpp/CDC-Class.md)