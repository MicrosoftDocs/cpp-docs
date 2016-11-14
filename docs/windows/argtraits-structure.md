---
title: "ArgTraits Structure | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "event/Microsoft::WRL::Details::ArgTraits"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ArgTraits structure"
ms.assetid: 58ae4115-c1bc-48c8-b01b-e60554841c30
caps.latest.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# ArgTraits Structure
Supports the WRL infrastructure and is not intended to be used directly from your code.  
  
## Syntax  
  
```  
template<  
   typename TMemberFunction  
>  
struct ArgTraits;  
template<  
   typename TDelegateInterface  
>  
struct ArgTraits<HRESULT (STDMETHODCALLTYPE TDelegateInterface::*)(void)>;  
template<  
   typename TDelegateInterface,  
   typename TArg1  
>  
struct ArgTraits<HRESULT (STDMETHODCALLTYPE TDelegateInterface::*)(TArg1)>;  
template<  
   typename TDelegateInterface,  
   typename TArg1,  
   typename TArg2  
>  
struct ArgTraits<HRESULT (STDMETHODCALLTYPE TDelegateInterface::*)(TArg1, TArg2)>;  
template<  
   typename TDelegateInterface,  
   typename TArg1,  
   typename TArg2,  
   typename TArg3  
>  
struct ArgTraits<HRESULT (STDMETHODCALLTYPE TDelegateInterface::*)(TArg1, TArg2, TArg3)>;  
template<  
   typename TDelegateInterface,  
   typename TArg1,  
   typename TArg2,  
   typename TArg3,  
   typename TArg4  
>  
struct ArgTraits<HRESULT (STDMETHODCALLTYPE TDelegateInterface::*)(TArg1, TArg2, TArg3, TArg4)>;  
template<  
   typename TDelegateInterface,  
   typename TArg1,  
   typename TArg2,  
   typename TArg3,  
   typename TArg4,  
   typename TArg5  
>  
struct ArgTraits<HRESULT (STDMETHODCALLTYPE TDelegateInterface::*)(TArg1, TArg2, TArg3, TArg4, TArg5)>;  
template<  
   typename TDelegateInterface,  
   typename TArg1,  
   typename TArg2,  
   typename TArg3,  
   typename TArg4,  
   typename TArg5,  
   typename TArg6  
>  
struct ArgTraits<HRESULT (STDMETHODCALLTYPE TDelegateInterface::*)(TArg1, TArg2, TArg3, TArg4, TArg5, TArg6)>;  
template<  
   typename TDelegateInterface,  
   typename TArg1,  
   typename TArg2,  
   typename TArg3,  
   typename TArg4,  
   typename TArg5,  
   typename TArg6,  
   typename TArg7  
>  
struct ArgTraits<HRESULT (STDMETHODCALLTYPE TDelegateInterface::*)(TArg1, TArg2, TArg3, TArg4, TArg5, TArg6, TArg7)>;  
template<  
   typename TDelegateInterface,  
   typename TArg1,  
   typename TArg2,  
   typename TArg3,  
   typename TArg4,  
   typename TArg5,  
   typename TArg6,  
   typename TArg7,  
   typename TArg8  
>  
struct ArgTraits<HRESULT (STDMETHODCALLTYPE TDelegateInterface::*)(TArg1, TArg2, TArg3, TArg4, TArg5, TArg6, TArg7, TArg8)>;  
template<  
   typename TDelegateInterface,  
   typename TArg1,  
   typename TArg2,  
   typename TArg3,  
   typename TArg4,  
   typename TArg5,  
   typename TArg6,  
   typename TArg7,  
   typename TArg8,  
   typename TArg9  
>  
struct ArgTraits<HRESULT (STDMETHODCALLTYPE TDelegateInterface::*)(TArg1, TArg2, TArg3, TArg4, TArg5, TArg6, TArg7, TArg8, TArg9)>;  
```  
  
#### Parameters  
 `TMemberFunction`  
 Typename parameter for an ArgTraits structure that cannot match any Invoke method signature.  
  
 `TDelegateInterface`  
 A delegate interface.  
  
 `TArg1`  
 The type of the first argument of the Invoke method.  
  
 `TArg2`  
 The type of the second argument of the Invoke method.  
  
 `TArg3`  
 The type of the third argument of the Invoke method.  
  
 `TArg4`  
 The type of the fourth argument of the Invoke method.  
  
 `TArg5`  
 The type of the fifth argument of the Invoke method.  
  
 `TArg6`  
 The type of the sixth argument of the Invoke method.  
  
 `TArg7`  
 The type of the seventh argument of the Invoke method.  
  
 `TArg8`  
 The type of the eigth argument of the Invoke method.  
  
 `TArg9`  
 The type of the ninth argument of the Invoke method.  
  
## Remarks  
 The `ArgTraits` structure declares a specified delegate interface and an anonymous member function that has a specified number of parameters.  
  
## Members  
  
### Public Typedefs  
  
|Name|Description|  
|----------|-----------------|  
|`Arg1Type`|The typedef for TArg1.|  
|`Arg2Type`|The typedef for TArg2.|  
|`Arg3Type`|The typedef for TArg3.|  
|`Arg4Type`|The typedef for TArg4.|  
|`Arg5Type`|The typedef for TArg5.|  
|`Arg6Type`|The typedef for TArg6.|  
|`Arg7Type`|The typedef for TArg7.|  
|`Arg8Type`|The typedef for TArg8.|  
|`Arg9Type`|The typedef for TArg9.|  
  
### Public Constants  
  
|Name|Description|  
|----------|-----------------|  
|[ArgTraits::args Constant](../windows/argtraits-args-constant.md)|Keeps count of the number of parameters on the Invoke method of a delegate interface.|  
  
## Inheritance Hierarchy  
 `ArgTraits`  
  
## Requirements  
 **Header:** event.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## See Also  
 [Microsoft::WRL::Details Namespace](../windows/microsoft-wrl-details-namespace.md)