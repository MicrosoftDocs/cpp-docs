---
title: "cancellation_token Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "pplcancellation_token/concurrency::cancellation_token"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "cancellation_token class"
ms.assetid: 2787df2b-e9d3-440e-bfd0-841a46a9835f
caps.latest.revision: 10
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
# cancellation_token Class
The `cancellation_token` class represents the ability to determine whether some operation has been requested to cancel. A given token can be associated with a `task_group`, `structured_task_group`, or `task` to provide implicit cancellation. It can also be polled for cancellation or have a callback registered for if and when the associated `cancellation_token_source` is canceled.  
  
## Syntax  
  
```
class cancellation_token;
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[cancellation_token::cancellation_token Constructor](#ctor)||  
|[cancellation_token::~cancellation_token Destructor](#dtor)||  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[cancellation_token::deregister_callback Method](#deregister_callback)|Removes a callback previously registered via the `register` method based on the `cancellation_token_registration` object returned at the time of registration.|  
|[cancellation_token::is_cancelable Method](#is_cancelable)|Returns an indication of whether this token can be canceled or not.|  
|[cancellation_token::is_canceled Method](#is_canceled)|Returns `true` if the token has been canceled.|  
|[cancellation_token::none Method](#none)|Returns a cancellation token which can never be subject to cancellation.|  
|[cancellation_token::register_callback Method](#register_callback)|Registers a callback function with the token. If and when the token is canceled, the callback will be made. Note that if the token is already canceled at the point where this method is called, the callback will be made immediately and synchronously.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[cancellation_token::operator!= Operator](#operator_neq)||  
|[cancellation_token::operator= Operator](#operator_eq)||  
|[cancellation_token::operator== Operator](#operator_eq_eq)||  
  
## Inheritance Hierarchy  
 `cancellation_token`  
  
## Requirements  
 **Header:** pplcancellation_token.h  
  
 **Namespace:** concurrency  
  
##  <a name="dtor"></a>  cancellation_token::~cancellation_token Destructor  
  
```
~cancellation_token();
```  
  
##  <a name="ctor"></a>  cancellation_token::cancellation_token Constructor  
  
```
cancellation_token(const cancellation_token& _Src);

cancellation_token(cancellation_token&& _Src);
```  
  
### Parameters  
 `_Src`  
  
##  <a name="deregister_callback"></a>  cancellation_token::deregister_callback Method  
 Removes a callback previously registered via the `register` method based on the `cancellation_token_registration` object returned at the time of registration.  
  
```
void deregister_callback(const cancellation_token_registration& _Registration) const;
```  
  
### Parameters  
 `_Registration`  
 The `cancellation_token_registration` object corresponding to the callback to be deregistered. This token must have been previously returned from a call to the `register` method.  
  
##  <a name="is_cancelable"></a>  cancellation_token::is_cancelable Method  
 Returns an indication of whether this token can be canceled or not.  
  
```
bool is_cancelable() const;
```  
  
### Return Value  
 An indication of whether this token can be canceled or not.  
  
##  <a name="is_canceled"></a>  cancellation_token::is_canceled Method  
 Returns `true` if the token has been canceled.  
  
```
bool is_canceled() const;
```  
  
### Return Value  
 The value `true` if the token has been canceled; otherwise, the value `false`.  
  
##  <a name="none"></a>  cancellation_token::none Method  
 Returns a cancellation token which can never be subject to cancellation.  
  
```
static cancellation_token none();
```  
  
### Return Value  
 A cancellation token that cannot be canceled.  
  
##  <a name="operator_neq"></a>  cancellation_token::operator!= Operator  
  
```
bool operator!= (const cancellation_token& _Src) const;
```  
  
### Parameters  
 `_Src`  
  
### Return Value  
  
##  <a name="operator_eq"></a>  cancellation_token::operator= Operator  
  
```
cancellation_token& operator= (const cancellation_token& _Src);

cancellation_token& operator= (cancellation_token&& _Src);
```  
  
### Parameters  
 `_Src`  
  
### Return Value  
  
##  <a name="operator_eq_eq"></a>  cancellation_token::operator== Operator  
  
```
bool operator== (const cancellation_token& _Src) const;
```  
  
### Parameters  
 `_Src`  
  
### Return Value  
  
##  <a name="register_callback"></a>  cancellation_token::register_callback Method  
 Registers a callback function with the token. If and when the token is canceled, the callback will be made. Note that if the token is already canceled at the point where this method is called, the callback will be made immediately and synchronously.  
  
```
template<typename _Function>
::Concurrency::cancellation_token_registration register_callback(const _Function& _Func) const;
```  
  
### Parameters  
 `_Function`  
 The type of the function object that will be called back when this `cancellation_token` is canceled.  
  
 `_Func`  
 The function object that will be called back when this `cancellation_token` is canceled.  
  
### Return Value  
 A `cancellation_token_registration` object which can be utilized in the `deregister` method to deregister a previously registered callback and prevent it from being made. The method will throw an [invalid_operation](invalid-operation-class.md) exception if it is called on a `cancellation_token` object that was created using the [cancellation_token::none](#none) method.  
  
## See Also  
 [concurrency Namespace](concurrency-namespace.md)
