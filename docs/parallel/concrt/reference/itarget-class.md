---
title: "ITarget Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "agents/concurrency::ITarget"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ITarget class"
ms.assetid: 5678db25-112a-4f72-be13-42e16b67c48b
caps.latest.revision: 22
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
# ITarget Class
The `ITarget` class is the interface for all target blocks. Target blocks consume messages offered to them by `ISource` blocks.  
  
## Syntax  
  
```
template<class T>
class ITarget;
```  
  
#### Parameters  
 `T`  
 The data type of the payload within the messages accepted by the target block.  
  
## Members  
  
### Public Typedefs  
  
|Name|Description|  
|----------|-----------------|  
|`filter_method`|The signature of any method used by the block that returns a `bool` value to determine whether an offered message should be accepted.|  
|`type`|A type alias for `T`.|  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[ITarget::~ITarget Destructor](#dtor)|Destroys the `ITarget` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[ITarget::propagate Method](#propagate)|When overridden in a derived class, asynchronously passes a message from a source block to this target block.|  
|[ITarget::send Method](#send)|When overridden in a derived class, synchronously passes a message to the target block.|  
|[ITarget::supports_anonymous_source Method](#supports_anonymous_source)|When overridden in a derived class, returns true or false depending on whether the message block accepts messages offered by a source that is not linked to it. If the overridden method returns `true`, the target cannot postpone an offered message, as consumption of a postponed message at a later time requires the source to be identified in its sourse link registry.|  
  
### Protected Methods  
  
|Name|Description|  
|----------|-----------------|  
|[ITarget::link_source Method](#link_source)|When overridden in a derived class, links a specified source block to this `ITarget` block.|  
|[ITarget::unlink_source Method](#unlink_source)|When overridden in a derived class, unlinks a specified source block from this `ITarget` block.|  
|[ITarget::unlink_sources Method](#unlink_sources)|When overridden in a derived class, unlinks all source blocks from this `ITarget` block.|  
  
## Remarks  
 For more information, see [Asynchronous Message Blocks](../../../parallel/concrt/asynchronous-message-blocks.md).  
  
## Inheritance Hierarchy  
 `ITarget`  
  
## Requirements  
 **Header:** agents.h  
  
 **Namespace:** concurrency  
  
##  <a name="dtor"></a>  ITarget::~ITarget Destructor  
 Destroys the `ITarget` object.  
  
```
virtual ~ITarget();
```  
  
##  <a name="link_source"></a>  ITarget::link_source Method  
 When overridden in a derived class, links a specified source block to this `ITarget` block.  
  
```
virtual void link_source(_Inout_ ISource<T>* _PSource) = 0;
```  
  
### Parameters  
 `_PSource`  
 The `ISource` block being linked to this `ITarget` block.  
  
### Remarks  
 This function should not be called directly on an `ITarget` block. Blocks should be connected together using the `link_target` method on `ISource` blocks, which will invoke the `link_source` method on the corresponding target.  
  
##  <a name="propagate"></a>  ITarget::propagate Method  
 When overridden in a derived class, asynchronously passes a message from a source block to this target block.  
  
```
virtual message_status propagate(
    _Inout_opt_ message<T>* _PMessage,
    _Inout_opt_ ISource<T>* _PSource) = 0;
```  
  
### Parameters  
 `_PMessage`  
 A pointer to the `message` object.  
  
 `_PSource`  
 A pointer to the source block offering the message.  
  
### Return Value  
 A [message_status](concurrency-namespace-enums.md) indication of what the target decided to do with the message.  
  
### Remarks  
 The method throws an [invalid_argument](../../../standard-library/invalid-argument-class.md) exception if either the `_PMessage` or `_PSource` parameter is `NULL`.  
  
##  <a name="send"></a>  ITarget::send Method  
 When overridden in a derived class, synchronously passes a message to the target block.  
  
```
virtual message_status send(
    _Inout_ message<T>* _PMessage,
    _Inout_ ISource<T>* _PSource) = 0;
```  
  
### Parameters  
 `_PMessage`  
 A pointer to the `message` object.  
  
 `_PSource`  
 A pointer to the source block offering the message.  
  
### Return Value  
 A [message_status](concurrency-namespace-enums.md) indication of what the target decided to do with the message.  
  
### Remarks  
 The method throws an [invalid_argument](../../../standard-library/invalid-argument-class.md) exception if either the `_PMessage` or `_PSource` parameter is `NULL`.  
  
 Using the `send` method outside of message initiation and to propagate messages within a network is dangerous and can lead to deadlock.  
  
 When `send` returns, the message has either already been accepted, and transferred into the target block, or it has been declined by the target.  
  
##  <a name="supports_anonymous_source"></a>  ITarget::supports_anonymous_source Method  
 When overridden in a derived class, returns true or false depending on whether the message block accepts messages offered by a source that is not linked to it. If the overridden method returns `true`, the target cannot postpone an offered message, as consumption of a postponed message at a later time requires the source to be identified in its sourse link registry.  
  
```
virtual bool supports_anonymous_source();
```  
  
### Return Value  
 `true` if the block can accept message from a source that is not linked to it `false` otherwise.  
  
##  <a name="unlink_source"></a>  ITarget::unlink_source Method  
 When overridden in a derived class, unlinks a specified source block from this `ITarget` block.  
  
```
virtual void unlink_source(_Inout_ ISource<T>* _PSource) = 0;
```  
  
### Parameters  
 `_PSource`  
 The `ISource` block being unlinked from this `ITarget` block.  
  
### Remarks  
 This function should not be called directly on an `ITarget` block. Blocks should be disconnected using the `unlink_target` or `unlink_targets` methods on `ISource` blocks, which will invoke the `unlink_source` method on the corresponding target.  
  
##  <a name="unlink_sources"></a>  ITarget::unlink_sources Method  
 When overridden in a derived class, unlinks all source blocks from this `ITarget` block.  
  
```
virtual void unlink_sources() = 0;
```  
  
## See Also  
 [concurrency Namespace](concurrency-namespace.md)   
 [ISource Class](isource-class.md)
