---
title: "CIPAddressCtrl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CIPAddressCtrl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IP address control"
  - "Internet address edit box"
  - "CIPAddressCtrl class"
  - "Internet protocol address box"
  - "common controls, Internet Explorer 4.0"
  - "Internet Explorer 4.0 common controls"
ms.assetid: 9764d2f4-cb14-4ba8-b799-7f57a55a47c6
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
# CIPAddressCtrl Class
Provides the functionality of the Windows common IP Address control.  
  
## Syntax  
  
```  
class CIPAddressCtrl : public CWnd  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CIPAddressCtrl::CIPAddressCtrl](#cipaddressctrl__cipaddressctrl)|Constructs a `CIPAddressCtrl` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CIPAddressCtrl::ClearAddress](#cipaddressctrl__clearaddress)|Clears the contents of the IP Address Control.|  
|[CIPAddressCtrl::Create](#cipaddressctrl__create)|Creates an IP Address Control and attaches it to a `CIPAddressCtrl` object.|  
|[CIPAddressCtrl::CreateEx](#cipaddressctrl__createex)|Creates an IP Address control with the specified Windows extended styles and attaches it to a `CIPAddressCtrl` object.|  
|[CIPAddressCtrl::GetAddress](#cipaddressctrl__getaddress)|Retrieves the address values for all four fields in the IP Address Control.|  
|[CIPAddressCtrl::IsBlank](#cipaddressctrl__isblank)|Determines if all fields in the IP Address Control are empty.|  
|[CIPAddressCtrl::SetAddress](#cipaddressctrl__setaddress)|Sets the address values for all four fields in the IP Address Control.|  
|[CIPAddressCtrl::SetFieldFocus](#cipaddressctrl__setfieldfocus)|Sets the keyboard focus to the specified field in the IP Address Control.|  
|[CIPAddressCtrl::SetFieldRange](#cipaddressctrl__setfieldrange)|Sets the range in the specified field in the IP Address Control.|  
  
## Remarks  
 An IP Address control, a control similar to an edit control, allows you to enter and manipulate a numerical address in Internet Protocol (IP) format.  
  
 This control (and therefore the `CIPAddressCtrl` class) is available only to programs running under Microsoft Internet Explorer 4.0 and later. They will also be available under future versions of Windows and Windows NT.  
  
 For more general information about the IP Address Control, see [IP Address Controls](http://msdn.microsoft.com/library/windows/desktop/bb761372) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 `CIPAddressCtrl`  
  
## Requirements  
 **Header:** afxcmn.h  
  
##  <a name="cipaddressctrl__cipaddressctrl"></a>  CIPAddressCtrl::CIPAddressCtrl  
 Creates a `CIPAddressCtrl` object.  
  
```  
CIPAddressCtrl();
```  
  
##  <a name="cipaddressctrl__clearaddress"></a>  CIPAddressCtrl::ClearAddress  
 Clears the contents of the IP Address Control.  
  
```  
void ClearAddress();
```  
  
### Remarks  
 This member function implements the behavior of the Win32 message [IPM_CLEARADDRESS](http://msdn.microsoft.com/library/windows/desktop/bb761377), as described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cipaddressctrl__create"></a>  CIPAddressCtrl::Create  
 Creates an IP Address Control and attaches it to a `CIPAddressCtrl` object.  
  
```  
virtual BOOL Create(
    DWORD dwStyle,  
    const RECT& rect,  
    CWnd* pParentWnd,  
    UINT nID);
```  
  
### Parameters  
 `dwStyle`  
 The IP Address control's style. Apply a combination of window styles. You must include the **WS_CHILD** style because the control must be a child window. See [CreateWindow](http://msdn.microsoft.com/library/windows/desktop/ms632679) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)] for a list of windows styles.  
  
 `rect`  
 A reference to the IP Address Control's size and position. It can be either a [CRect](../../atl-mfc-shared/reference/crect-class.md) object or a [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) structure.  
  
 `pParentWnd`  
 A pointer to the IP Address Control's parent window. It must not be **NULL.**  
  
 `nID`  
 The IP Address Control's ID.  
  
### Return Value  
 Nonzero if initialization was successful; otherwise 0.  
  
### Remarks  
 You construct a `CIPAddressCtrl` object in two steps.  
  
1.  Call the constructor, which creates the `CIPAddressCtrl` object.  
  
2.  Call **Create**, which creates the IP Address Control.  
  
 If you want to use extended windows styles with your control, call [CreateEx](#cipaddressctrl__createex) instead of **Create**.  
  
##  <a name="cipaddressctrl__createex"></a>  CIPAddressCtrl::CreateEx  
 Call this function to create a control (a child window) and associate it with the `CIPAddressCtrl` object.  
  
```  
virtual BOOL CreateEx(
    DWORD dwExStyle,  
    DWORD dwStyle,  
    const RECT& rect,  
    CWnd* pParentWnd,  
    UINT nID);
```  
  
### Parameters  
 `dwExStyle`  
 Specifies the extended style of the control being created. For a list of extended Windows styles, see the `dwExStyle` parameter for [CreateWindowEx](http://msdn.microsoft.com/library/windows/desktop/ms632680) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `dwStyle`  
 The IP Address control's style. Apply a combination of window styles. You must include the **WS_CHILD** style because the control must be a child window. See [CreateWindow](http://msdn.microsoft.com/library/windows/desktop/ms632679) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)] for a list of windows styles.  
  
 `rect`  
 A reference to a [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) structure describing the size and position of the window to be created, in client coordinates of `pParentWnd`.  
  
 `pParentWnd`  
 A pointer to the window that is the control's parent.  
  
 `nID`  
 The control's child-window ID.  
  
### Return Value  
 Nonzero if successful; otherwise 0.  
  
### Remarks  
 Use `CreateEx` instead of [Create](#cipaddressctrl__create) to apply extended Windows styles, specified by the Windows extended style preface **WS_EX_**.  
  
##  <a name="cipaddressctrl__getaddress"></a>  CIPAddressCtrl::GetAddress  
 Retrieves the address values for all four fields in the IP Address Control.  
  
```  
int GetAddress(
    BYTE& nField0,  
    BYTE& nField1,  
    BYTE& nField2,  
    BYTE& nField3);

 
int GetAddress(
    DWORD& dwAddress);
```  
  
### Parameters  
 `nField0`  
 A reference to the field 0 value from a packed IP address.  
  
 `nField1`  
 A reference to the field 1 value from a packed IP address.  
  
 `nField2`  
 A reference to the field 2 value from a packed IP address.  
  
 `nField3`  
 A reference to the field 3 value from a packed IP address.  
  
 `dwAddress`  
 A reference to the address of a `DWORD` value that receives the IP address. See **Remarks** for a table that shows how `dwAddress` is filled.  
  
### Return Value  
 The number of non-blank fields in the IP Address Control.  
  
### Remarks  
 This member function implements the behavior of the Win32 message [IPM_GETADDRESS](http://msdn.microsoft.com/library/windows/desktop/bb761378), as described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)]. In the first prototype above, the numbers in fields 0 through 3 of the control, read left to right respectively, populate the four parameters. In the second prototype above, `dwAddress` is populated as follows.  
  
|Field|Bits containing the field value|  
|-----------|-------------------------------------|  
|0|24 through 31|  
|1|16 through 23|  
|2|8 through 15|  
|3|0 through 7|  
  
##  <a name="cipaddressctrl__isblank"></a>  CIPAddressCtrl::IsBlank  
 Determines if all fields in the IP Address Control are empty.  
  
```  
BOOL IsBlank() const;

 
```  
  
### Return Value  
 Nonzero if all of the IP Address Control fields are empty; otherwise 0.  
  
### Remarks  
 This member function implements the behavior of the Win32 message [IPM_ISBLANK](http://msdn.microsoft.com/library/windows/desktop/bb761379), as described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cipaddressctrl__setaddress"></a>  CIPAddressCtrl::SetAddress  
 Sets the address values for all four fields in the IP Address Control.  
  
```  
void SetAddress(
    BYTE nField0,  
    BYTE nField1,  
    BYTE nField2,  
    BYTE nField3);

 
void SetAddress(
    DWORD dwAddress);
```  
  
### Parameters  
 `nField0`  
 The field 0 value from a packed IP address.  
  
 `nField1`  
 The field 1 value from a packed IP address.  
  
 `nField2`  
 The field 2 value from a packed IP address.  
  
 `nField3`  
 The field 3 value from a packed IP address.  
  
 `dwAddress`  
 A `DWORD` value that contains the new IP address. See **Remarks** for a table that shows how the `DWORD` value is filled.  
  
### Remarks  
 This member function implements the behavior of the Win32 message [IPM_SETADDRESS](http://msdn.microsoft.com/library/windows/desktop/bb761380), as described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)]. In the first prototype above, the numbers in fields 0 through 3 of the control, read left to right respectively, populate the four parameters. In the second prototype above, `dwAddress` is populated as follows.  
  
|Field|Bits containing the field value|  
|-----------|-------------------------------------|  
|0|24 through 31|  
|1|16 through 23|  
|2|8 through 15|  
|3|0 through 7|  
  
##  <a name="cipaddressctrl__setfieldfocus"></a>  CIPAddressCtrl::SetFieldFocus  
 Sets the keyboard focus to the specified field in the IP Address Control.  
  
```  
void SetFieldFocus(WORD nField);
```  
  
### Parameters  
 `nField`  
 Zero-based field index to which the focus should be set. If this value is greater than the number of fields, focus is set to the first blank field. If all fields are non-blank, focus is set to the first field.  
  
### Remarks  
 This member function implements the behavior of the Win32 message [IPM_SETFOCUS](http://msdn.microsoft.com/library/windows/desktop/bb761381), as described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cipaddressctrl__setfieldrange"></a>  CIPAddressCtrl::SetFieldRange  
 Sets the range in the specified field in the IP Address Control.  
  
```  
void SetFieldRange(
    int nField,  
    BYTE nLower,  
    BYTE nUpper);
```  
  
### Parameters  
 `nField`  
 Zero-based field index to which the range will be applied.  
  
 `nLower`  
 A reference to an integer receiving the lower limit of the specified field in this IP Address Control.  
  
 `nUpper`  
 A reference to an integer receiving the upper limit of the specified field in this IP Address Control.  
  
### Remarks  
 This member function implements the behavior of the Win32 message [IPM_SETRANGE](http://msdn.microsoft.com/library/windows/desktop/bb761382), as described in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)]. Use the two parameters, `nLower` and `nUpper`, to indicate the lower and upper limits of the field, instead of the *wRange* parameter used with the Win32 message.  
  
## See Also  
 [CWnd Class](../../mfc/reference/cwnd-class.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)



