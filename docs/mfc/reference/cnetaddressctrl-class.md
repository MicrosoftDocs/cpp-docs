---
title: "CNetAddressCtrl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CNetAddressCtrl class"
ms.assetid: cb4c6aca-3f49-4b52-b76c-65f57096155b
caps.latest.revision: 32
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
# CNetAddressCtrl Class
The `CNetAddressCtrl` class represents the network address control, which you can use to input and validate the format of IPv4, IPv6, and named DNS addresses.  
  
## Syntax  
  
```  
class CNetAddressCtrl : public CEdit  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CNetAddressCtrl::CNetAddressCtrl](#cnetaddressctrl__cnetaddressctrl)|Constructs a `CNetAddressCtrl` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CNetAddressCtrl::Create](#cnetaddressctrl__create)|Creates a network address control with specified styles and attaches it to the current `CNetAddressCtrl` object.|  
|[CNetAddressCtrl::CreateEx](#cnetaddressctrl__createex)|Creates a network address control with specified extended styles and attaches it to the current `CNetAddressCtrl` object.|  
|[CNetAddressCtrl::DisplayErrorTip](#cnetaddressctrl__displayerrortip)|Displays an error balloon tip when the user enters an unsupported network address in the current network address control.|  
|[CNetAddressCtrl::GetAddress](#cnetaddressctrl__getaddress)|Retrieves a validated and parsed representation of the network address associated with the current network address control.|  
|[CNetAddressCtrl::GetAllowType](#cnetaddressctrl__getallowtype)|Retrieves the type of network address that the current network address control can support.|  
|[CNetAddressCtrl::SetAllowType](#cnetaddressctrl__setallowtype)|Sets the type of network address that the current network address control can support.|  
  
## Remarks  
 The network address control verifies that the format of the address the user enters is correct. The control does not actually connect to the network address. The [CNetAddressCtrl::SetAllowType](#cnetaddressctrl__setallowtype) method specifies one or more types of address that the [CNetAddressCtrl::GetAddress](#cnetaddressctrl__getaddress) method can parse and verify. An address can be in the form of an IPv4, IPv6, or named address for a server, network, host, or broadcast message destination. If the format of the address is incorrect, you can use the [CNetAddressCtrl::DisplayErrorTip](#cnetaddressctrl__displayerrortip) method to display an infotip message box that graphically points to the text box of the network address control and displays a predefined error message.  
  
 The `CNetAddressCtrl` class is derived from the [CEdit](../../mfc/reference/cedit-class.md) class. Consequently, the network address control provides access to all Windows edit control messages.  
  
 The following figure depicts a dialog that contains a network address control. The text box (1) for the network address control contains an invalid network address. The infotip message (2) is displayed if the network address is invalid.  
  
 ![Dialog with a network address control and infotip.](../../mfc/reference/media/cnetaddctrl.png "cnetaddctrl")  
  
## Example  
 The following code example is a portion of a dialog that validates a network address. The event handlers for three radio buttons specify that the network address can be one of three address types. The user enters an address in the text box of the network control, then presses a button to validate the address. If the address is valid, a success message is displayed; otherwise, the predefined infotip error message is displayed.  
  
 [!code-cpp[NVC_MFC_CNetAddressCtrl_s1#1](../../mfc/reference/codesnippet/cpp/cnetaddressctrl-class_1.cpp)]  
  
## Example  
 The following code example from the dialog header file defines the [NC_ADDRESS](http://msdn.microsoft.com/library/windows/desktop/bb773345) and [NET_ADDRESS_INFO](http://msdn.microsoft.com/library/windows/desktop/bb773346) variables that are required by the [CNetAddressCtrl::GetAddress](#cnetaddressctrl__getaddress) method.  
  
 [!code-cpp[NVC_MFC_CNetAddressCtrl_s1#2](../../mfc/reference/codesnippet/cpp/cnetaddressctrl-class_2.h)]  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CEdit](../../mfc/reference/cedit-class.md)  
  
 `CNetAddressCtrl`  
  
## Requirements  
 **Header:** afxcmn.h  
  
 This class is supported in [!INCLUDE[windowsver](../../build/reference/includes/windowsver_md.md)] and later.  
  
 Additional requirements for this class are described in [Build Requirements for Windows Vista Common Controls](../../mfc/build-requirements-for-windows-vista-common-controls.md).  
  
##  <a name="cnetaddressctrl__cnetaddressctrl"></a>  CNetAddressCtrl::CNetAddressCtrl  
 Constructs a `CNetAddressCtrl` object.  
  
```  
CNetAddressCtrl();
```  
  
### Remarks  
 Use the [CNetAddressCtrl::Create](#cnetaddressctrl__create) or [CNetAddressCtrl::CreateEx](#cnetaddressctrl__createex) method to create a network control and attach it to the `CNetAddressCtrl` object.  
  
##  <a name="cnetaddressctrl__create"></a>  CNetAddressCtrl::Create  
 Creates a network address control with specified styles and attaches it to the current `CNetAddressCtrl` object.  
  
```  
virtual BOOL Create(
    DWORD dwStyle,   
    const RECT& rect,   
    CWnd* pParentWnd,   
    UINT nID);
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|[in] `dwStyle`|A bitwise combination of styles to be applied to the control. For more information, see [Edit Styles](../../mfc/reference/edit-styles.md).|  
|[in] `rect`|A reference to a [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) structure that contains the position and size of the control.|  
|[in] `pParentWnd`|A non-null pointer to a [CWnd](../../mfc/reference/cwnd-class.md) object that is the parent window of the control.|  
|[in] `nID`|The ID of the control.|  
  
### Return Value  
 `true` if this method is successful; otherwise, `false`.  
  
##  <a name="cnetaddressctrl__createex"></a>  CNetAddressCtrl::CreateEx  
 Creates a network address control with specified extended styles and attaches it to the current `CNetAddressCtrl` object.  
  
```  
virtual BOOL CreateEx(
    DWORD dwExStyle,   
    DWORD dwStyle,   
    const RECT& rect,   
    CWnd* pParentWnd,   
    UINT nID);
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|[in] `dwExStyle`|A bitwise combination (OR) of extended styles to be applied to the control. For more information, see the `dwExStyle` parameter of the [CreateWindowEx](http://msdn.microsoft.com/library/windows/desktop/ms632680) function.|  
|[in] `dwStyle`|A bitwise combination (OR) of styles to be applied to the control. For more information, see [Edit Styles](../../mfc/reference/edit-styles.md).|  
|[in] `rect`|A reference to a [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) structure that contains the position and size of the control.|  
|[in] `pParentWnd`|A non-null pointer to a [CWnd](../../mfc/reference/cwnd-class.md) object that is the parent window of the control.|  
|[in] `nID`|The ID of the control.|  
  
### Return Value  
 `true` if this method is successful; otherwise, `false`.  
  
##  <a name="cnetaddressctrl__displayerrortip"></a>  CNetAddressCtrl::DisplayErrorTip  
 Displays an error message in the balloon tip that is associated with the current network address control.  
  
```  
HRESULT DisplayErrorTip();
```  
  
### Return Value  
 The value `S_OK` if this method is successful; otherwise, an error code.  
  
### Remarks  
 Use the [CNetAddressCtrl::SetAllowType](#cnetaddressctrl__setallowtype) method to specify the types of addresses that the current network address control can support. Use the [CNetAddressCtrl::GetAddress](#cnetaddressctrl__getaddress) method to validate and parse the network address that the user enters. Use the [CNetAddressCtrl::DisplayErrorTip](#cnetaddressctrl__displayerrortip) method to display an error message infotip if the [CNetAddressCtrl::GetAddress](#cnetaddressctrl__getaddress) method is unsuccessful.  
  
 This message invokes the [NetAddr_DisplayErrorTip](http://msdn.microsoft.com/library/windows/desktop/bb774314) macro, which is described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)]. That macro sends the `NCM_DISPLAYERRORTIP` message.  
  
##  <a name="cnetaddressctrl__getaddress"></a>  CNetAddressCtrl::GetAddress  
 Retrieves a validated and parsed representation of the network address that is associated with the current network address control.  
  
```  
HRESULT GetAddress(PNC_ADDRESS pAddress) const;

 
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|[in, out] `pAddress`|Pointer to an [NC_ADDRESS](http://msdn.microsoft.com/library/windows/desktop/bb773345) structure.  Set the `pAddrInfo` member of this structure to the address of a [NET_ADDRESS_INFO](http://msdn.microsoft.com/library/windows/desktop/bb773346) structure before you call the GetAddress method.|  
  
### Return Value  
 The value `S_OK` if this method is successful; otherwise, a COM error code. For more information about the possible error codes, see the Return Value section of the [NetAddr_GetAddress](http://msdn.microsoft.com/library/windows/desktop/bb774316) macro.  
  
### Remarks  
 If this method is successful, the [NET_ADDRESS_INFO](http://msdn.microsoft.com/library/windows/desktop/bb773346) structure contains additional information about the network address.  
  
 Use the [CNetAddressCtrl::SetAllowType](#cnetaddressctrl__setallowtype) method to specify the types of addresses the current network address control can support. Use the [CNetAddressCtrl::GetAddress](#cnetaddressctrl__getaddress) method to validate and parse the network address that the user enters. Use the [CNetAddressCtrl::DisplayErrorTip](#cnetaddressctrl__displayerrortip) method to display an error message infotip if the [CNetAddressCtrl::GetAddress](#cnetaddressctrl__getaddress) method is unsuccessful.  
  
 This method invokes the [NetAddr_GetAddress](http://msdn.microsoft.com/library/windows/desktop/bb774316) macro, which is described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)]. That macro sends the `NCM_GETADDRESS` message.  
  
##  <a name="cnetaddressctrl__getallowtype"></a>  CNetAddressCtrl::GetAllowType  
 Retrieves the type of network address that the current network address control can support.  
  
```  
DWORD GetAllowType() const;

 
```  
  
### Return Value  
 A bitwise combination (OR) of flags that specifies the types of addresses the network address control can support. For more information, see [NET_STRING](http://msdn.microsoft.com/library/windows/desktop/bb762586).  
  
### Remarks  
 This message invokes the [NetAddr_GetAllowType](http://msdn.microsoft.com/library/windows/desktop/bb774318) macro, which is described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)]. That macro sends the `NCM_GETALLOWTYPE` message.  
  
##  <a name="cnetaddressctrl__setallowtype"></a>  CNetAddressCtrl::SetAllowType  
 Sets the type of network address that the current network address control can support.  
  
```  
HRESULT SetAllowType(DWORD dwAddrMask);
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|[in] `dwAddrMask`|A bitwise combination (OR) of flags that specifies the types of addresses the network address control can support. For more information, see [NET_STRING](http://msdn.microsoft.com/library/windows/desktop/bb762586).|  
  
### Return Value  
 `S_OK` if this method is successful; otherwise, a COM error code.  
  
### Remarks  
 Use the [CNetAddressCtrl::SetAllowType](#cnetaddressctrl__setallowtype) method to specify the types of addresses that the current network address control can support. Use the [CNetAddressCtrl::GetAddress](#cnetaddressctrl__getaddress) method to validate and parse the network address that the user enters. Use the [CNetAddressCtrl::DisplayErrorTip](#cnetaddressctrl__displayerrortip) method to display an error message infotip if the [CNetAddressCtrl::GetAddress](#cnetaddressctrl__getaddress) method is unsuccessful.  
  
 This message invokes the [NetAddr_SetAllowType](http://msdn.microsoft.com/library/windows/desktop/bb774320) macro, which is described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)]. That macro sends the `NCM_SETALLOWTYPE` message.  
  
## See Also  
 [CNetAddressCtrl Class](../../mfc/reference/cnetaddressctrl-class.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [CEdit Class](../../mfc/reference/cedit-class.md)
