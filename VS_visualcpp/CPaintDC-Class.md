---
title: "CPaintDC Class"
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
ms.assetid: 7e245baa-bf9b-403e-a637-7218adf28fab
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
# CPaintDC Class
A device-context class derived from [CDC](../VS_visualcpp/CDC-Class.md).  
  
## Syntax  
  
```  
class CPaintDC : public CDC  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CPaintDC::CPaintDC](#cpaintdc__cpaintdc)|Constructs a `CPaintDC` connected to the specified [CWnd](../VS_visualcpp/CWnd-Class.md).|  
  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CPaintDC::m_ps](#cpaintdc__m_ps)|Contains the [PAINTSTRUCT](../VS_visualcpp/PAINTSTRUCT-Structure.md) used to paint the client area.|  
  
### Protected Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CPaintDC::m_hWnd](#cpaintdc__m_hwnd)|The `HWND` to which this `CPaintDC` object is attached.|  
  
## Remarks  
 It performs a [CWnd::BeginPaint](../VS_visualcpp/CWnd-Class.md#cwnd__beginpaint) at construction time and [CWnd::EndPaint](../VS_visualcpp/CWnd-Class.md#cwnd__endpaint) at destruction time.  
  
 A `CPaintDC` object can only be used when responding to a                 [WM_PAINT](http://msdn.microsoft.com/library/windows/desktop/dd145213) message, usually in your `OnPaint` message-handler member function.  
  
 For more information on using `CPaintDC`, see [Device Contexts](../VS_visualcpp/Device-Contexts.md).  
  
## Inheritance Hierarchy  
 [CObject](../VS_visualcpp/CObject-Class.md)  
  
 [CDC](../VS_visualcpp/CDC-Class.md)  
  
 `CPaintDC`  
  
## Requirements  
 **Header:** afxwin.h  
  
##  <a name="cpaintdc__cpaintdc"></a>  CPaintDC::CPaintDC  
 Constructs a `CPaintDC` object, prepares the application window for painting, and stores the [PAINTSTRUCT](../VS_visualcpp/PAINTSTRUCT-Structure.md) structure in the [m_ps](#cpaintdc__m_ps) member variable.  
  
```  
explicit CPaintDC( CWnd* pWnd );  
```  
  
### Parameters  
 `pWnd`  
 Points to the `CWnd` object to which the `CPaintDC` object belongs.  
  
### Remarks  
 An exception (of type `CResourceException`) is thrown if the Windows                         [GetDC](http://msdn.microsoft.com/library/windows/desktop/dd144871) call fails. A device context may not be available if Windows has already allocated all of its available device contexts. Your application competes for the five common display contexts available at any given time under Windows.  
  
### Example  
 [!CODE [NVC_MFCDocView#97](../CodeSnippet/VS_Snippets_Cpp/NVC_MFCDocView#97)]  
  
##  <a name="cpaintdc__m_hwnd"></a>  CPaintDC::m_hWnd  
 The `HWND` to which this `CPaintDC` object is attached.  
  
```  
HWND m_hWnd;  
```  
  
### Remarks  
 `m_hWnd` is a protected variable of type `HWND`.  
  
### Example  
 [!CODE [NVC_MFCDocView#98](../CodeSnippet/VS_Snippets_Cpp/NVC_MFCDocView#98)]  
  
##  <a name="cpaintdc__m_ps"></a>  CPaintDC::m_ps  
 `m_ps` is a public member variable of type [PAINTSTRUCT](../VS_visualcpp/PAINTSTRUCT-Structure.md).  
  
```  
PAINTSTRUCT m_ps;  
```  
  
### Remarks  
 It is the `PAINTSTRUCT` that is passed to and filled out by [CWnd::BeginPaint](../VS_visualcpp/CWnd-Class.md#cwnd__beginpaint).  
  
 The `PAINTSTRUCT` contains information that the application uses to paint the client area of the window associated with a `CPaintDC` object.  
  
 Note that you can access the device-context handle through the `PAINTSTRUCT`. However, you can access the handle more directly through the `m_hDC` member variable that `CPaintDC` inherits from `CDC`.  
  
### Example  
  See the example for [CPaintDC::m_hWnd](#cpaintdc__m_hwnd).  
  
## See Also  
 [MFC Sample MDI](../VS_visualcpp/Visual-C---Samples.md)   
 [CDC Class](../VS_visualcpp/CDC-Class.md)   
 [Hierarchy Chart](../VS_visualcpp/Hierarchy-Chart.md)