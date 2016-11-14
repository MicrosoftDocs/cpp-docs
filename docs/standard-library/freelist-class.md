---
title: "freelist Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "stdext::freelist"
  - "freelist"
  - "stdext.freelist"
  - "allocators/stdext::freelist"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "freelist class"
ms.assetid: 8ad7e35c-4c80-4479-8ede-1a2497b06d71
caps.latest.revision: 17
author: "corob-msft"
ms.author: "corob"
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
# freelist Class
Manages a list of memory blocks.  
  
## Syntax  
  
```
template <std::size_t Sz, class Max>  
class freelist
 : public Max
```  
  
#### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`Sz`|The number of elements in the array to be allocated.|  
|`Max`|The max class representing the maximum number of elements to be stored in the free list. The max class can be [max_none](../standard-library/max-none-class.md), [max_unbounded](../standard-library/max-unbounded-class.md), [max_fixed_size](../standard-library/max-fixed-size-class.md), or [max_variable_size](../standard-library/max-variable-size-class.md).|  
  
## Remarks  
 This template class manages a list of memory blocks of size `Sz` with the maximum length of the list determined by the max class passed in `Max`.  
  
### Constructors  
  
|||  
|-|-|  
|[freelist](#freelist__freelist)|Constructs an object of type `freelist`.|  
  
### Member Functions  
  
|||  
|-|-|  
|[pop](#freelist__pop)|Removes the first memory block from the free list.|  
|[push](#freelist__push)|Adds a memory block to the list.|  
  
## Requirements  
 **Header:** \<allocators>  
  
 **Namespace:** stdext  
  
##  <a name="freelist__freelist"></a>  freelist::freelist  
 Constructs an object of type `freelist`.  
  
```
freelist();
```  
  
### Remarks  
  
##  <a name="freelist__pop"></a>  freelist::pop  
 Removes the first memory block from the free list.  
  
```
void *pop();
```  
  
### Return Value  
 Returns a pointer to the memory block removed from the list.  
  
### Remarks  
 The member function returns `NULL` if the list is empty. Otherwise, it removes the first memory block from the list.  
  
##  <a name="freelist__push"></a>  freelist::push  
 Adds a memory block to the list.  
  
```
bool push(void* ptr);
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`ptr`|A pointer to the memory block to be added to the free list.|  
  
### Return Value  
 `true` if the `full` function of the max class returns `false`; otherwise, the `push` function returns `false`.  
  
### Remarks  
 If the `full` function of the max class returns `false`, this member function adds the memory block pointed to by `ptr` to the head of the list.  
  
## See Also  
 [\<allocators>](../standard-library/allocators-header.md)



