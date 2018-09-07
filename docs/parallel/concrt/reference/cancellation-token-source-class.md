---
title: "cancellation_token_source Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-concrt"]
ms.topic: "reference"
f1_keywords: ["cancellation_token_source", "PPLCANCELLATION_TOKEN/concurrency::cancellation_token_source", "PPLCANCELLATION_TOKEN/concurrency::cancellation_token_source::cancellation_token_source", "PPLCANCELLATION_TOKEN/concurrency::cancellation_token_source::cancel", "PPLCANCELLATION_TOKEN/concurrency::cancellation_token_source::create_linked_source", "PPLCANCELLATION_TOKEN/concurrency::cancellation_token_source::get_token"]
dev_langs: ["C++"]
helpviewer_keywords: ["cancellation_token_source class"]
ms.assetid: 3548b1a0-12b0-4334-95db-4bf57141c066
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
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
|[cancellation_token_source](#ctor)|Overloaded. Constructs a new `cancellation_token_source`. The source can be used to flag cancellation of some cancelable operation.|  
|[~cancellation_token_source Destructor](#dtor)||  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[cancel](#cancel)|Cancels the token. Any `task_group`, `structured_task_group`, or `task` which utilizes the token will be canceled upon this call and throw an exception at the next interruption point.|  
|[create_linked_source](#create_linked_source)|Overloaded. Creates a `cancellation_token_source` which is canceled when the provided token is canceled.|  
|[get_token](#get_token)|Returns a cancellation token associated with this source. The returned token can be polled for cancellation or provide a callback if and when cancellation occurs.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[operator!=](#operator_neq)||  
|[operator=](#operator_eq)||  
|[operator==](#operator_eq_eq)||  
  
## Inheritance Hierarchy  
 `cancellation_token_source`  
  
## Requirements  
 **Header:** pplcancellation_token.h  
  
 **Namespace:** concurrency  
  
##  <a name="dtor"></a> ~cancellation_token_source 

```
~cancellation_token_source();
```  
  
##  <a name="cancel"></a> cancel 

 Cancels the token. Any `task_group`, `structured_task_group`, or `task` which utilizes the token will be canceled upon this call and throw an exception at the next interruption point.  
  
```
void cancel() const;
```  
  
##  <a name="ctor"></a> cancellation_token_source 

 Constructs a new `cancellation_token_source`. The source can be used to flag cancellation of some cancelable operation.  
  
```
cancellation_token_source();

cancellation_token_source(const cancellation_token_source& _Src);

cancellation_token_source(cancellation_token_source&& _Src);
```  
  
### Parameters  
 `_Src`  
  
##  <a name="create_linked_source"></a> create_linked_source 

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
 The C++ Standard Library iterator corresponding to the beginning of the range of tokens to listen for cancellation of.  
  
 `_End`  
 The C++ Standard Library iterator corresponding to the ending of the range of tokens to listen for cancellation of.  
  
### Return Value  
 A `cancellation_token_source` which is canceled when the token provided by the `_Src` parameter is canceled.  
  
##  <a name="get_token"></a> get_token 

 Returns a cancellation token associated with this source. The returned token can be polled for cancellation or provide a callback if and when cancellation occurs.  
  
```
cancellation_token get_token() const;
```  
  
### Return Value  
 A cancellation token associated with this source.  
  
##  <a name="operator_neq"></a> operator!= 

```
bool operator!= (const cancellation_token_source& _Src) const;
```  
  
### Parameters  
 `_Src`  
  
### Return Value  
  
##  <a name="operator_eq"></a> operator= 

```
cancellation_token_source& operator= (const cancellation_token_source& _Src);

cancellation_token_source& operator= (cancellation_token_source&& _Src);
```  
  
### Parameters  
 `_Src`  
  
### Return Value  
  
##  <a name="operator_eq_eq"></a> operator== 

```
bool operator== (const cancellation_token_source& _Src) const;
```  
  
### Parameters  
 `_Src`  
  
### Return Value  
  
## See Also  
 [concurrency Namespace](concurrency-namespace.md)
