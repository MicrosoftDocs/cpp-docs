---
title: "cancellation_token_registration Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: ["cancellation_token_registration", "PPLCANCELLATION_TOKEN/concurrency::cancellation_token_registration", "PPLCANCELLATION_TOKEN/concurrency::cancellation_token_registration::cancellation_token_registration"]
dev_langs: ["C++"]
helpviewer_keywords: ["cancellation_token_registration class"]
ms.assetid: 823d63f4-7233-4d65-8976-6152ccf12d0e
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# cancellation_token_registration Class
The `cancellation_token_registration` class represents a callback notification from a `cancellation_token`. When the `register` method on a `cancellation_token` is used to receive notification of when cancellation occurs, a `cancellation_token_registration` object is returned as a handle to the callback so that the caller can request a specific callback no longer be made through use of the `deregister` method.  
  
## Syntax  
  
```
class cancellation_token_registration;
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[cancellation_token_registration](#ctor)||  
|[~cancellation_token_registration Destructor](#dtor)||  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[operator!=](#operator_neq)||  
|[operator=](#operator_eq)||  
|[operator==](#operator_eq_eq)||  
  
## Inheritance Hierarchy  
 `cancellation_token_registration`  
  
## Requirements  
 **Header:** pplcancellation_token.h  
  
 **Namespace:** concurrency  
  
##  <a name="dtor"></a> ~cancellation_token_registration 

```
~cancellation_token_registration();
```  
  
##  <a name="ctor"></a> cancellation_token_registration 

```
cancellation_token_registration();

cancellation_token_registration(const cancellation_token_registration& _Src);

cancellation_token_registration(cancellation_token_registration&& _Src);
```  
  
### Parameters  
 `_Src`  
  
##  <a name="operator_neq"></a> operator!= 

```
bool operator!= (const cancellation_token_registration& _Rhs) const;
```  
  
### Parameters  
 `_Rhs`  
  
### Return Value  
  
##  <a name="operator_eq"></a> operator= 

```
cancellation_token_registration& operator= (const cancellation_token_registration& _Src);

cancellation_token_registration& operator= (cancellation_token_registration&& _Src);
```  
  
### Parameters  
 `_Src`  
  
### Return Value  
  
##  <a name="operator_eq_eq"></a> operator== 

```
bool operator== (const cancellation_token_registration& _Rhs) const;
```  
  
### Parameters  
 `_Rhs`  
  
### Return Value  
  
## See Also  
 [concurrency Namespace](concurrency-namespace.md)
