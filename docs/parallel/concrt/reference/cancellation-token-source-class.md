---
title: "cancellation_token_source Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "pplcancellation_token/concurrency::cancellation_token_source"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "cancellation_token_source class"
ms.assetid: 3548b1a0-12b0-4334-95db-4bf57141c066
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
# cancellation_token_source Class
The `cancellation_token_source` class represents the ability to cancel some cancelable operation.  
  
## Syntax  
  
```
class cancellation_token_source;
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[cancellation_token_source::cancellation_token_source Constructor](#ctor)|Overloaded. Constructs a new `cancellation_token_source`. The source can be used to flag cancellation of some cancelable operation.|  
|[cancellation_token_source::~cancellation_token_source Destructor](#dtor)||  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[cancellation_token_source::cancel Method](#cancel)|Cancels the token. Any `task_group`, `structured_task_group`, or `task` which utilizes the token will be canceled upon this call and throw an exception at the next interruption point.|  
|[cancellation_token_source::create_linked_source Method](#create_linked_source)|Overloaded. Creates a `cancellation_token_source` which is canceled when the provided token is canceled.|  
|[cancellation_token_source::get_token Method](#get_token)|Returns a cancellation token associated with this source. The returned token can be polled for cancellation or provide a callback if and when cancellation occurs.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[cancellation_token_source::operator!= Operator](#operator_neq)||  
|[cancellation_token_source::operator= Operator](#operator_eq)||  
|[cancellation_token_source::operator== Operator](#operator_eq_eq)||  
  
## Inheritance Hierarchy  
 `cancellation_token_source`  
  
## Requirements  
 **Header:** pplcancellation_token.h  
  
 **Namespace:** concurrency  
  
##  <a name="dtor"></a>  cancellation_token_source::~cancellation_token_source Destructor  
  
```
~cancellation_token_source();
```  
  
##  <a name="cancel"></a>  cancellation_token_source::cancel Method  
 Cancels the token. Any `task_group`, `structured_task_group`, or `task` which utilizes the token will be canceled upon this call and throw an exception at the next interruption point.  
  
```
void cancel() const;
```  
  
##  <a name="ctor"></a>  cancellation_token_source::cancellation_token_source Constructor  
 Constructs a new `cancellation_token_source`. The source can be used to flag cancellation of some cancelable operation.  
  
```
cancellation_token_source();

cancellation_token_source(const cancellation_token_source& _Src);

cancellation_token_source(cancellation_token_source&& _Src);
```  
  
### Parameters  
 `_Src`  
  
##  <a name="create_linked_source"></a>  cancellation_token_source::create_linked_source Method  
 Creates a `cancellation_token_source` which is canceled when the provided token is canceled.  
  
```
static cancellation_token_source create_linked_source(
    cancellation_token& _Src);

template<typename _Iter>
static cancellation_token_source create_linked_source(_Iter _Begin, _Iter _End);
```  
  
### Parameters  
 `_Iter`  
 `_Src`  
 A token whose cancellation will cause cancellation of the returned token source. Note that the returned token source can also be canceled independently of the source contained in this parameter.  
  
 `_Begin`  
 The STL iterator corresponding to the beginning of the range of tokens to listen for cancellation of.  
  
 `_End`  
 The STL iterator corresponding to the ending of the range of tokens to listen for cancellation of.  
  
### Return Value  
 A `cancellation_token_source` which is canceled when the token provided by the `_Src` parameter is canceled.  
  
##  <a name="get_token"></a>  cancellation_token_source::get_token Method  
 Returns a cancellation token associated with this source. The returned token can be polled for cancellation or provide a callback if and when cancellation occurs.  
  
```
cancellation_token get_token() const;
```  
  
### Return Value  
 A cancellation token associated with this source.  
  
##  <a name="operator_neq"></a>  cancellation_token_source::operator!= Operator  
  
```
bool operator!= (const cancellation_token_source& _Src) const;
```  
  
### Parameters  
 `_Src`  
  
### Return Value  
  
##  <a name="operator_eq"></a>  cancellation_token_source::operator= Operator  
  
```
cancellation_token_source& operator= (const cancellation_token_source& _Src);

cancellation_token_source& operator= (cancellation_token_source&& _Src);
```  
  
### Parameters  
 `_Src`  
  
### Return Value  
  
##  <a name="operator_eq_eq"></a>  cancellation_token_source::operator== Operator  
  
```
bool operator== (const cancellation_token_source& _Src) const;
```  
  
### Parameters  
 `_Src`  
  
### Return Value  
  
## See Also  
 [concurrency Namespace](concurrency-namespace.md)
