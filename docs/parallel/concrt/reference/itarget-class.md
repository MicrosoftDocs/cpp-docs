---
title: "ITarget Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-concrt"]
ms.topic: "reference"
f1_keywords: ["ITarget", "AGENTS/concurrency::ITarget", "AGENTS/concurrency::ITarget::propagate", "AGENTS/concurrency::ITarget::send", "AGENTS/concurrency::ITarget::supports_anonymous_source", "AGENTS/concurrency::ITarget::link_source", "AGENTS/concurrency::ITarget::unlink_source", "AGENTS/concurrency::ITarget::unlink_sources"]
dev_langs: ["C++"]
helpviewer_keywords: ["ITarget class"]
ms.assetid: 5678db25-112a-4f72-be13-42e16b67c48b
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
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
|[~ITarget Destructor](#dtor)|Destroys the `ITarget` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[propagate](#propagate)|When overridden in a derived class, asynchronously passes a message from a source block to this target block.|  
|[send](#send)|When overridden in a derived class, synchronously passes a message to the target block.|  
|[supports_anonymous_source](#supports_anonymous_source)|When overridden in a derived class, returns true or false depending on whether the message block accepts messages offered by a source that is not linked to it. If the overridden method returns `true`, the target cannot postpone an offered message, as consumption of a postponed message at a later time requires the source to be identified in its sourse link registry.|  
  
### Protected Methods  
  
|Name|Description|  
|----------|-----------------|  
|[link_source](#link_source)|When overridden in a derived class, links a specified source block to this `ITarget` block.|  
|[unlink_source](#unlink_source)|When overridden in a derived class, unlinks a specified source block from this `ITarget` block.|  
|[unlink_sources](#unlink_sources)|When overridden in a derived class, unlinks all source blocks from this `ITarget` block.|  
  
## Remarks  
 For more information, see [Asynchronous Message Blocks](../../../parallel/concrt/asynchronous-message-blocks.md).  
  
## Inheritance Hierarchy  
 `ITarget`  
  
## Requirements  
 **Header:** agents.h  
  
 **Namespace:** concurrency  
  
##  <a name="dtor"></a> ~ITarget 

 Destroys the `ITarget` object.  
  
```
virtual ~ITarget();
```  
  
##  <a name="link_source"></a> link_source 

 When overridden in a derived class, links a specified source block to this `ITarget` block.  
  
```
virtual void link_source(_Inout_ ISource<T>* _PSource) = 0;
```  
  
### Parameters  
 `_PSource`  
 The `ISource` block being linked to this `ITarget` block.  
  
### Remarks  
 This function should not be called directly on an `ITarget` block. Blocks should be connected together using the `link_target` method on `ISource` blocks, which will invoke the `link_source` method on the corresponding target.  
  
##  <a name="propagate"></a> propagate 

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
  
##  <a name="send"></a> send 

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
  
##  <a name="supports_anonymous_source"></a> supports_anonymous_source 

 When overridden in a derived class, returns true or false depending on whether the message block accepts messages offered by a source that is not linked to it. If the overridden method returns `true`, the target cannot postpone an offered message, as consumption of a postponed message at a later time requires the source to be identified in its sourse link registry.  
  
```
virtual bool supports_anonymous_source();
```  
  
### Return Value  
 `true` if the block can accept message from a source that is not linked to it `false` otherwise.  
  
##  <a name="unlink_source"></a> unlink_source 

 When overridden in a derived class, unlinks a specified source block from this `ITarget` block.  
  
```
virtual void unlink_source(_Inout_ ISource<T>* _PSource) = 0;
```  
  
### Parameters  
 `_PSource`  
 The `ISource` block being unlinked from this `ITarget` block.  
  
### Remarks  
 This function should not be called directly on an `ITarget` block. Blocks should be disconnected using the `unlink_target` or `unlink_targets` methods on `ISource` blocks, which will invoke the `unlink_source` method on the corresponding target.  
  
##  <a name="unlink_sources"></a> unlink_sources 

 When overridden in a derived class, unlinks all source blocks from this `ITarget` block.  
  
```
virtual void unlink_sources() = 0;
```  
  
## See Also  
 [concurrency Namespace](concurrency-namespace.md)   
 [ISource Class](isource-class.md)
