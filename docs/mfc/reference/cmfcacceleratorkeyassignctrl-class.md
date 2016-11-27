---
title: "CMFCAcceleratorKeyAssignCtrl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMFCAcceleratorKeyAssignCtrl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCAcceleratorKeyAssignCtrl class"
ms.assetid: 89fb8e62-596e-4e71-8c9a-32740347aaab
caps.latest.revision: 33
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
# CMFCAcceleratorKeyAssignCtrl Class
The `CMFCAcceleratorKeyAssignCtrl` class extends the [CEdit Class](../../mfc/reference/cedit-class.md) to support extra system buttons such as ALT, CONTROL, and SHIFT.  
  
## Syntax  
  
```  
class CMFCAcceleratorKeyAssignCtrl : public CEdit  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCAcceleratorKeyAssignCtrl::CMFCAcceleratorKeyAssignCtrl](#cmfcacceleratorkeyassignctrl__cmfcacceleratorkeyassignctrl)|Constructs a `CMFCAcceleratorKeyAssignCtrl` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCAcceleratorKeyAssignCtrl::GetAccel](#cmfcacceleratorkeyassignctrl__getaccel)|Retrieves the `ACCEL` structure for a shortcut key pressed in the `CMFCAcceleratorKeyAssignCtrl` object.|  
|[CMFCAcceleratorKeyAssignCtrl::IsFocused](#cmfcacceleratorkeyassignctrl__isfocused)||  
|[CMFCAcceleratorKeyAssignCtrl::IsKeyDefined](#cmfcacceleratorkeyassignctrl__iskeydefined)|Determines whether a shortcut key has been defined.|  
|[CMFCAcceleratorKeyAssignCtrl::PreTranslateMessage](#cmfcacceleratorkeyassignctrl__pretranslatemessage)|Used by class [CWinApp](../../mfc/reference/cwinapp-class.md) to translate window messages before they are dispatched to the [TranslateMessage](http://msdn.microsoft.com/library/windows/desktop/ms644955) and [DispatchMessage](http://msdn.microsoft.com/library/windows/desktop/ms644934) Windows functions. (Overrides [CWnd::PreTranslateMessage](../../mfc/reference/cwnd-class.md#cwnd__pretranslatemessage).)|  
|[CMFCAcceleratorKeyAssignCtrl::ResetKey](#cmfcacceleratorkeyassignctrl__resetkey)|Resets the shortcut key.|  
  
## Remarks  
 This class extends the functionality of the `CEdit` class by supporting shortcut keys, also known as accelerator keys. The `CMFCAcceleratorKeyAssignCtrl` class functions as a [CEdit Class](../../mfc/reference/cedit-class.md) and it can also recognize system buttons.  
  
 This class maps physical shortcut key combinations to string values. For example, assume the key combination ALT + B is mapped to the string "Alt + B". When the user presses this key combination in a `CMFCAcceleratorKeyAssignCtrl` object, "Alt + B" is displayed to the user. For more information about the mapping between shortcut keys and a string format, see [CMFCAcceleratorKey Class](../../mfc/reference/cmfcacceleratorkey-class.md).  
  
## Example  
 The following example demonstrates how to construct a `CMFCAcceleratorKeyAssignCtrl` object and use its `ResetKey` method to reset the shortcut key.  
  
 [!code-cpp[NVC_MFC_RibbonApp#31](../../mfc/reference/codesnippet/cpp/cmfcacceleratorkeyassignctrl-class_1.cpp)]  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CEdit](../../mfc/reference/cedit-class.md)  
  
 [CMFCAcceleratorKeyAssignCtrl](../../mfc/reference/cmfcacceleratorkeyassignctrl-class.md)  
  
## Requirements  
 **Header:** afxacceleratorkeyassignctrl.h  
  
##  <a name="cmfcacceleratorkeyassignctrl__cmfcacceleratorkeyassignctrl"></a>  CMFCAcceleratorKeyAssignCtrl::CMFCAcceleratorKeyAssignCtrl  
 Constructs a [CMFCAcceleratorKeyAssignCtrl](../../mfc/reference/cmfcacceleratorkeyassignctrl-class.md) object.  
  
```  
CMFCAcceleratorKeyAssignCtrl();
```  
  
##  <a name="cmfcacceleratorkeyassignctrl__getaccel"></a>  CMFCAcceleratorKeyAssignCtrl::GetAccel  
 Retrieves the `ACCEL` structure for a shortcut key pressed in the [CMFCAcceleratorKeyAssignCtrl](../../mfc/reference/cmfcacceleratorkeyassignctrl-class.md) object.  
  
```  
ACCEL const* GetAccel() const;

 
```  
  
### Return Value  
 An `ACCEL` structure that describes the shortcut key.  
  
### Remarks  
 Use this function to retrieve the `ACCEL` structure for a shortcut key that the user entered into your `CMFCAcceleratorKeyAssignCtrl` object.  
  
##  <a name="cmfcacceleratorkeyassignctrl__isfocused"></a>  CMFCAcceleratorKeyAssignCtrl::IsFocused  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL IsFocused() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcacceleratorkeyassignctrl__iskeydefined"></a>  CMFCAcceleratorKeyAssignCtrl::IsKeyDefined  
 Determines whether a shortcut key has been defined in the [CMFCAcceleratorKeyAssignCtrl](../../mfc/reference/cmfcacceleratorkeyassignctrl-class.md) object.  
  
```  
BOOL IsKeyDefined() const;

 
```  
  
### Return Value  
 Nonzero if the user has already pressed a valid combination of keys that define a shortcut key; otherwise 0.  
  
### Remarks  
 Use this function to determine whether the user entered a valid shortcut key in your `CMFCAcceleratorKeyAssignCtrl` object. If a shortcut key exists, you can use [CMFCAcceleratorKeyAssignCtrl::GetAccel](#cmfcacceleratorkeyassignctrl__getaccel) method to obtain the `ACCEL` structure associated with this shortcut key.  
  
##  <a name="cmfcacceleratorkeyassignctrl__pretranslatemessage"></a>  CMFCAcceleratorKeyAssignCtrl::PreTranslateMessage  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL PreTranslateMessage(MSG* pMsg);
```  
  
### Parameters  
 [in] `pMsg`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcacceleratorkeyassignctrl__resetkey"></a>  CMFCAcceleratorKeyAssignCtrl::ResetKey  
 Resets the shortcut key.  
  
```  
void ResetKey();
```  
  
### Remarks  
 The function clears the edit control text. This includes any shortcut keys that the user pressed.  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)   
 [CMFCAcceleratorKey Class](../../mfc/reference/cmfcacceleratorkey-class.md)
