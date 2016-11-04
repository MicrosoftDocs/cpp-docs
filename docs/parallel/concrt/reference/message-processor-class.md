---
title: "message_processor Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "agents/concurrency::message_processor"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "message_processor class"
ms.assetid: 23afb052-daa7-44ed-bf24-d2513db748da
caps.latest.revision: 16
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
# message_processor Class
The `message_processor` class is the abstract base class for processing of `message` objects. There is no guarantee on the ordering of the messages.  
  
## Syntax  
  
```
template<class T>
class message_processor;
```  
  
#### Parameters  
 `T`  
 The data type of the payload within messages handled by this `message_processor` object.  
  
## Members  
  
### Public Typedefs  
  
|Name|Description|  
|----------|-----------------|  
|`type`|A type alias for `T`.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[message_processor::async_send Method](#message_processor__async_send_method)|When overridden in a derived class, places messages into the block asynchronously.|  
|[message_processor::sync_send Method](#message_processor__sync_send_method)|When overridden in a derived class, places messages into the block synchronously.|  
|[message_processor::wait Method](#message_processor__wait_method)|When overridden in a derived class, waits for all asynchronous operations to complete.|  
  
### Protected Methods  
  
|Name|Description|  
|----------|-----------------|  
|[message_processor::process_incoming_message Method](#message_processor__process_incoming_message_method)|When overridden in a derived class, performs the forward processing of messages into the block. Called once every time a new message is added and the queue is found to be empty.|  
  
## Inheritance Hierarchy  
 `message_processor`  
  
## Requirements  
 **Header:** agents.h  
  
 **Namespace:** concurrency  
  
##  <a name="message_processor__async_send_method"></a>  message_processor::async_send Method  
 When overridden in a derived class, places messages into the block asynchronously.  
  
```
virtual void async_send(_Inout_opt_ message<T>* _Msg) = 0;
```  
  
### Parameters  
 `_Msg`  
 A `message` object to send asynchronously.  
  
### Remarks  
 Processor implementations should override this method.  
  
##  <a name="message_processor__process_incoming_message_method"></a>  message_processor::process_incoming_message Method  
 When overridden in a derived class, performs the forward processing of messages into the block. Called once every time a new message is added and the queue is found to be empty.  
  
```
virtual void process_incoming_message() = 0;
```  
  
### Remarks  
 Message block implementations should override this method.  
  
##  <a name="message_processor__sync_send_method"></a>  message_processor::sync_send Method  
 When overridden in a derived class, places messages into the block synchronously.  
  
```
virtual void sync_send(_Inout_opt_ message<T>* _Msg) = 0;
```  
  
### Parameters  
 `_Msg`  
 A `message` object to send synchronously.  
  
### Remarks  
 Processor implementations should override this method.  
  
##  <a name="message_processor__wait_method"></a>  message_processor::wait Method  
 When overridden in a derived class, waits for all asynchronous operations to complete.  
  
```
virtual void wait() = 0;
```  
  
### Remarks  
 Processor implementations should override this method.  
  
## See Also  
 [concurrency Namespace](../../../parallel/concrt/reference/concurrency-namespace.md)   
 [ordered_message_processor Class](../../../parallel/concrt/reference/ordered-message-processor-class.md)
