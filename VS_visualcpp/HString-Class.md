---
title: "HString Class"
ms.custom: na
ms.date: 10/07/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: reference
ms.assetid: 6709dd2e-8d72-4675-8ec7-1baa7d71854d
caps.latest.revision: 3
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
# HString Class
Provides support for manipulating HSTRING handles.  
  
## Syntax  
  
```cpp  
class HString;  
```  
  
## Remarks  
 The Windows Runtime provides access to strings through HSTRING handles. The HString class provides convenience functions and operators to simplify using HSTRING handles.  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[HString::HString Constructor](../VS_visualcpp/HString--HString-Constructor.md)|Initializes a new instance of the HString class.|  
|[HString::~HString Destructor](../VS_visualcpp/HString--~HString-Destructor.md)|Destroys the current instance of the HString class.|  
  
### Members  
  
|Name|Description|  
|----------|-----------------|  
|[HString::Set Method](../VS_visualcpp/HString--Set-Method.md)|Sets the value of the current HString object to the specified wide-character string or HString parameter.|  
|[HString::Attach Method](../VS_visualcpp/HString--Attach-Method.md)|Associates the specified HString object with the current HString object.|  
|[HString::CopyTo Method](../VS_visualcpp/HString--CopyTo-Method.md)|Copies the current HString object to an HSTRING object.|  
|[HString::Detach Method](../VS_visualcpp/HString--Detach-Method.md)|Disassociates the specified HString object from its underlying value.|  
|[HString::GetAddressOf Method](../VS_visualcpp/HString--GetAddressOf-Method.md)|Retrieves a pointer to the underlying HSTRING handle.|  
|[HString::Get Method](../VS_visualcpp/HString--Get-Method.md)|Retrieves the value of the underlying HSTRING handle.|  
|[HString::Release Method](../VS_visualcpp/HString--Release-Method.md)|Deletes the underlying string value and intializes the current HString object to an empty value.|  
|[HString::MakeReference Method](../VS_visualcpp/HString--MakeReference-Method.md)|Creates an HStringReference object from a specified string parameter.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[HString::Operator= Operator](../VS_visualcpp/HString--Operator=-Operator.md)|Moves the value of another HString object to the current HString object.|  
|[HString::Operator== Operator](../VS_visualcpp/HString--Operator==-Operator.md)|Indicates whether the two parameters are equal.|  
|[HString::Operator!= Operator](../VS_visualcpp/HString--Operator!=-Operator.md)|Indicates whether the two parameters are not equal.|  
  
## Inheritance Hierarchy  
 `HString`  
  
## Requirements  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## See Also  
 [Microsoft::WRL::Wrappers Namespace](../VS_visualcpp/Microsoft--WRL--Wrappers-Namespace.md)