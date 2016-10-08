---
title: "InvokeHelper Structure"
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
ms.assetid: 555ad2bc-4dd6-4e65-a2e2-1242c395f0e5
caps.latest.revision: 5
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# InvokeHelper Structure
Supports the WRL infrastructure and is not intended to be used directly from your code.  
  
## Syntax  
  
```  
template<  
   typename TDelegateInterface,  
   typename TCallback,  
   unsigned int argCount  
>  
struct InvokeHelper;  
template<  
   typename TDelegateInterface,  
   typename TCallback  
>  
struct InvokeHelper<TDelegateInterface, TCallback, 0> : public Microsoft::WRL::RuntimeClass<RuntimeClassFlags<Delegate>, TDelegateInterface>;  
template<  
   typename TDelegateInterface,  
   typename TCallback  
>  
struct InvokeHelper<TDelegateInterface, TCallback, 1> : public Microsoft::WRL::RuntimeClass<RuntimeClassFlags<Delegate>, TDelegateInterface>;  
template<  
   typename TDelegateInterface,  
   typename TCallback  
>  
struct InvokeHelper<TDelegateInterface, TCallback, 2> : public Microsoft::WRL::RuntimeClass<RuntimeClassFlags<Delegate>, TDelegateInterface>;  
template<  
   typename TDelegateInterface,  
   typename TCallback  
>  
struct InvokeHelper<TDelegateInterface, TCallback, 3> : public Microsoft::WRL::RuntimeClass<RuntimeClassFlags<Delegate>, TDelegateInterface>;  
template<  
   typename TDelegateInterface,  
   typename TCallback  
>  
struct InvokeHelper<TDelegateInterface, TCallback, 4> : Microsoft::WRL::RuntimeClass<RuntimeClassFlags<Delegate>, TDelegateInterface>;  
template<  
   typename TDelegateInterface,  
   typename TCallback  
>  
struct InvokeHelper<TDelegateInterface, TCallback, 5> : Microsoft::WRL::RuntimeClass<RuntimeClassFlags<Delegate>, TDelegateInterface>;  
template<  
   typename TDelegateInterface,  
   typename TCallback  
>  
struct InvokeHelper<TDelegateInterface, TCallback, 6> : Microsoft::WRL::RuntimeClass<RuntimeClassFlags<Delegate>, TDelegateInterface>;  
template<  
   typename TDelegateInterface,  
   typename TCallback  
>  
struct InvokeHelper<TDelegateInterface, TCallback, 7> : Microsoft::WRL::RuntimeClass<RuntimeClassFlags<Delegate>, TDelegateInterface>;  
template<  
   typename TDelegateInterface,  
   typename TCallback  
>  
struct InvokeHelper<TDelegateInterface, TCallback, 8> : Microsoft::WRL::RuntimeClass<RuntimeClassFlags<Delegate>, TDelegateInterface>;  
template<  
   typename TDelegateInterface,  
   typename TCallback  
>  
struct InvokeHelper<TDelegateInterface, TCallback, 9> : Microsoft::WRL::RuntimeClass<RuntimeClassFlags<Delegate>, TDelegateInterface>;  
```  
  
#### Parameters  
 `TDelegateInterface`  
 `TCallback`  
 The type of the event handler function.  
  
 `argCount`  
 The number of arguments in an InvokeHelper specialization.  
  
## Remarks  
 Provides an implementation of the Invoke() method based on the specified number and type of arguments.  
  
## Members  
  
### Public Typedefs  
  
|Name|Description|  
|----------|-----------------|  
|`Traits`|A synonym for the class that defines the type of each event handler argument.|  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[InvokeHelper::InvokeHelper Constructor](../VS_visualcpp/InvokeHelper--InvokeHelper-Constructor.md)|Initializes a new instance of the InvokeHelper class.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[InvokeHelper::Invoke Method](../VS_visualcpp/InvokeHelper--Invoke-Method.md)|Calls the event handler whose signature contains the specified number of arguments.|  
  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[InvokeHelper::callback_ Data Member](../VS_visualcpp/InvokeHelper--callback_-Data-Member.md)|Represents the event handler to call when an event occurs.|  
  
## Inheritance Hierarchy  
 `InvokeHelper`  
  
## Requirements  
 **Header:** event.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## See Also  
 [Microsoft::WRL::Details Namespace](../VS_visualcpp/Microsoft--WRL--Details-Namespace.md)