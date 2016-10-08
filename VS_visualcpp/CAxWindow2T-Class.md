---
title: "CAxWindow2T Class"
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
ms.assetid: b87bc943-7991-4537-b902-2138d7f4d837
caps.latest.revision: 16
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
# CAxWindow2T Class
This class provides methods for manipulating a window that hosts an ActiveX control, and also has support for hosting licensed ActiveX controls.  
  
> [!IMPORTANT]
>  This class and its members cannot be used in applications that execute in the Windows Runtime.  
  
## Syntax  
  
```  
  
template <   
   class  TBase  
   = CWindow >  
   class CAxWindow2T :   
   public CAxWindowT<  TBase >  
  
```  
  
#### Parameters  
 *TBase*  
 The class from which `CAxWindowT` derives.  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CAxWindow2T::CAxWindow2T](../Topic/CAxWindow2T::CAxWindow2T.md)|Constructs a `CAxWindow2T` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CAxWindow2T::Create](../Topic/CAxWindow2T::Create.md)|Creates a host window.|  
|[CAxWindow2T::CreateControlLic](../Topic/CAxWindow2T::CreateControlLic.md)|Creates a licensed ActiveX control, initializes it, and hosts it in the specified window.|  
|[CAxWindow2T::CreateControlLicEx](../Topic/CAxWindow2T::CreateControlLicEx.md)|Creates a licensed ActiveX control, initializes it, hosts it in the specified window, and retrieves an interface pointer (or pointers) from the control.|  
|[CAxWindow2T::GetWndClassName](../Topic/CAxWindow2T::GetWndClassName.md)|Static method that retrieves the name of the window class.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[CAxWindow2T::operator =](../Topic/CAxWindow2T::operator%20=.md)|Assigns an `HWND` to an existing `CAxWindow2T` object.|  
  
## Remarks  
 `CAxWindow2T` provides methods for manipulating a window that hosts an ActiveX control. `CAxWindow2T` also has support for hosting licensed ActiveX controls. The hosting is provided by "                **AtlAxWinLic80**", which is wrapped by `CAxWindow2T`.  
  
 Class `CAxWindow2` is implemented as a specialization of the `CAxWindow2T` class. This specialization is declared as:  
  
 `typedef CAxWindow2T <CWindow> CAxWindow2;`  
  
> [!NOTE]
>  `CAxWindowT` members are documented under [CAxWindow](../VS_visualcpp/CAxWindow-Class.md).  
  
 See [Hosting ActiveX Controls Using ATL AXHost](../VS_visualcpp/Hosting-ActiveX-Controls-Using-ATL-AXHost.md) for a sample that uses the members of this class.  
  
## Inheritance Hierarchy  
 `TBase`  
  
 `CAxWindowT`  
  
 `CAxWindow2T`  
  
## Requirements  
 **Header:** atlwin.h  
  
##  <a name="caxwindow2t__caxwindow2t"></a>  CAxWindow2T::CAxWindow2T  
 Constructs a `CAxWindow2T` object.  
  
```  
  
CAxWindow2T( HWND  hWnd  
    = NULL ) : CAxWindowT<  TBase   
   >(  hWnd   
   )  
  
```  
  
### Parameters  
 `hWnd`  
 A handle of an existing window.  
  
##  <a name="caxwindow2t__create"></a>  CAxWindow2T::Create  
 Creates a host window.  
  
```  
  
HWND Create(  
      HWND  hWndParent  
   ,   
      _U_RECT  rect  
    = NULL,   
      LPCTSTR  szWindowName  
    = NULL,   
      DWORD  dwStyle  
    = 0,   
      DWORD  dwExStyle  
    = 0,  
      _U_MENUorID  MenuOrID  
    = 0U,   
      LPVOID  lpCreateParam  
    = NULL  
   );  
  
```  
  
### Remarks  
 `CAxWindow2T::Create` calls [CWindow::Create](../Topic/CWindow::Create.md) with the `LPCTSTR``lpstrWndClass` parameter set to the window class that provides control hosting (                        **AtlAxWinLic80**).  
  
 See `CWindow::Create` for a description of the parameters and return value.  
  
 **Note** If 0 is used as the value for the `MenuOrID` parameter, it must be specified as 0U (the default value) to avoid a compiler error.  
  
### Example  
 See [Hosting ActiveX Controls Using ATL AXHost](../VS_visualcpp/Hosting-ActiveX-Controls-Using-ATL-AXHost.md) for a sample that uses `CAxWindow2T::Create`.  
  
##  <a name="caxwindow2t__createcontrollic"></a>  CAxWindow2T::CreateControlLic  
 Creates a licensed ActiveX control, initializes it, and hosts it in the specified window.  
  
```  
  
HRESULT CreateControlLic(  
      DWORD  dwResID  
   ,   
      IStream*  pStream  
    = NULL,   
      IUnknown**  ppUnkContainer  
    = NULL,   
      BSTR  bstrLicKey  
    = NULL  
   );  
   HRESULT CreateControlLic(  
      LPCOLESTR  lpszName  
   ,   
      IStream*  pStream  
    = NULL,   
      IUnknown**  ppUnkContainer  
    = NULL,   
      BSTR  bstrLicKey  
    = NULL  
   );  
  
```  
  
### Parameters  
 `bstrLicKey`  
 The license key for the control; NULL if creating a nonlicensed control.  
  
### Remarks  
 See [CAxWindow::CreateControl](../Topic/CAxWindow::CreateControl.md) for a description of the remaining parameters and return value.  
  
### Example  
 See [Hosting ActiveX Controls Using ATL AXHost](../VS_visualcpp/Hosting-ActiveX-Controls-Using-ATL-AXHost.md) for a sample that uses `CAxWindow2T::CreateControlLic`.  
  
##  <a name="caxwindow2t__createcontrollicex"></a>  CAxWindow2T::CreateControlLicEx  
 Creates a licensed ActiveX control, initializes it, hosts it in the specified window, and retrieves an interface pointer (or pointers) from the control.  
  
```  
  
HRESULT CreateControlLicEx(  
      LPCOLESTR  lpszName  
   ,   
      IStream*  pStream  
    = NULL,  
      IUnknown**  ppUnkContainer  
    = NULL,   
      IUnknown**  ppUnkControl  
    = NULL,  
      REFIID  iidSink  
    = IID_NULL,   
      IUnknown*  punkSink  
    = NULL,   
      BSTR  bstrLicKey  
    = NULL  
   );  
   HRESULT CreateControlLicEx(  
      DWORD  dwResID,  
      IStream*  pStream  
    = NULL,  
      IUnknown**  ppUnkContainer  
    = NULL,  
      IUnknown**  ppUnkControl  
    = NULL,  
      REFIID  iidSink  
    = IID_NULL,   
      IUnknown*  punkSink  
    = NULL,   
      BSTR  bstrLickey  
    = NULL  
   );  
  
```  
  
### Parameters  
 `bstrLicKey`  
 The license key for the control; NULL if creating a nonlicensed control.  
  
### Remarks  
 See [CAxWindow::CreateControlEx](../Topic/CAxWindow::CreateControlEx.md) for a description of the remaining parameters and return value.  
  
### Example  
 See [Hosting ActiveX Controls Using ATL AXHost](../VS_visualcpp/Hosting-ActiveX-Controls-Using-ATL-AXHost.md) for a sample that uses `CAxWindow2T::CreateControlLicEx`.  
  
##  <a name="caxwindow2t__getwndclassname"></a>  CAxWindow2T::GetWndClassName  
 Retrieves the name of the window class.  
  
```  
  
static LPCTSTR GetWndClassName( );  
  
```  
  
### Return Value  
 A pointer to a string containing the name of the window class (                        **AtlAxWinLic80**) that can host licensed and nonlicensed ActiveX controls.  
  
##  <a name="caxwindow2t__operator__eq"></a>  CAxWindow2T::operator =  
 Assigns an `HWND` to an existing `CAxWindow2T` object.  
  
```  
  
CAxWindow2T<  TBase  
    >& operator= (  
   HWND  hWnd   
   );  
  
```  
  
### Parameters  
 `hWnd`  
 A handle of an existing window.  
  
## See Also  
 [Class Overview](../VS_visualcpp/ATL-Class-Overview.md)   
 [Control Containment FAQ](../VS_visualcpp/ATL-Control-Containment-FAQ.md)