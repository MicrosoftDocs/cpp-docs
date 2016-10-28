---
title: "cancellation_token_registration Class"
ms.custom: ""
ms.date: "10/28/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "pplcancellation_token/concurrency::cancellation_token_registration"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "cancellation_token_registration class"
ms.assetid: 823d63f4-7233-4d65-8976-6152ccf12d0e
caps.latest.revision: 9
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
|[cancellation_token_registration::cancellation_token_registration Constructor](#cancellation_token_registration__cancellation_token_registration_constructor)||  
|[cancellation_token_registration::~cancellation_token_registration Destructor](#cancellation_token_registration___dtorcancellation_token_registration_destructor)||  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[cancellation_token_registration::operator!= Operator](#cancellation_token_registration__operator_neq_operator)||  
|[cancellation_token_registration::operator= Operator](#cancellation_token_registration__operator_eq_operator)||  
|[cancellation_token_registration::operator== Operator](#cancellation_token_registration__operator_eq_eq_operator)||  
  
## Inheritance Hierarchy  
 `cancellation_token_registration`  
  
## Requirements  
 **Header:** pplcancellation_token.h  
  
 **Namespace:** concurrency  
  
##  <a name="cancellation_token_registration___dtorcancellation_token_registration_destructor"></a>  cancellation_token_registration::~cancellation_token_registration Destructor  
  
```
~cancellation_token_registration();
```  
  
##  <a name="cancellation_token_registration__cancellation_token_registration_constructor"></a>  cancellation_token_registration::cancellation_token_registration Constructor  
  
```
cancellation_token_registration();

cancellation_token_registration(const cancellation_token_registration& _Src);

cancellation_token_registration(cancellation_token_registration&& _Src);
```  
  
### Parameters  
 `_Src`  
  
##  <a name="cancellation_token_registration__operator_neq_operator"></a>  cancellation_token_registration::operator!= Operator  
  
```
bool operator!= (const cancellation_token_registration& _Rhs) const;
```  
  
### Parameters  
 `_Rhs`  
  
### Return Value  
  
##  <a name="cancellation_token_registration__operator_eq_operator"></a>  cancellation_token_registration::operator= Operator  
  
```
cancellation_token_registration& operator= (const cancellation_token_registration& _Src);

cancellation_token_registration& operator= (cancellation_token_registration&& _Src);
```  
  
### Parameters  
 `_Src`  
  
### Return Value  
  
##  <a name="cancellation_token_registration__operator_eq_eq_operator"></a>  cancellation_token_registration::operator== Operator  
  
```
bool operator== (const cancellation_token_registration& _Rhs) const;
```  
  
### Parameters  
 `_Rhs`  
  
### Return Value  
  
## See Also  
 [concurrency Namespace](../../../parallel/concrt/reference/concurrency-namespace.md)
