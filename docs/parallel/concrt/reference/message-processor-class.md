---
title: "message_processor Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
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
|[message_processor::async_send Method](#async_send)|When overridden in a derived class, places messages into the block asynchronously.|  
|[message_processor::sync_send Method](#sync_send)|When overridden in a derived class, places messages into the block synchronously.|  
|[message_processor::wait Method](#wait)|When overridden in a derived class, waits for all asynchronous operations to complete.|  
  
### Protected Methods  
  
|Name|Description|  
|----------|-----------------|  
|[message_processor::process_incoming_message Method](#process_incoming_message)|When overridden in a derived class, performs the forward processing of messages into the block. Called once every time a new message is added and the queue is found to be empty.|  
  
## Inheritance Hierarchy  
 `message_processor`  
  
## Requirements  
 **Header:** agents.h  
  
 **Namespace:** concurrency  
  
##  <a name="async_send"></a>  message_processor::async_send Method  
 When overridden in a derived class, places messages into the block asynchronously.  
  
```
virtual void async_send(_Inout_opt_ message<T>* _Msg) = 0;
```  
  
### Parameters  
 `_Msg`  
 A `message` object to send asynchronously.  
  
### Remarks  
 Processor implementations should override this method.  
  
##  <a name="process_incoming_message"></a>  message_processor::process_incoming_message Method  
 When overridden in a derived class, performs the forward processing of messages into the block. Called once every time a new message is added and the queue is found to be empty.  
  
```
virtual void process_incoming_message() = 0;
```  
  
### Remarks  
 Message block implementations should override this method.  
  
##  <a name="sync_send"></a>  message_processor::sync_send Method  
 When overridden in a derived class, places messages into the block synchronously.  
  
```
virtual void sync_send(_Inout_opt_ message<T>* _Msg) = 0;
```  
  
### Parameters  
 `_Msg`  
 A `message` object to send synchronously.  
  
### Remarks  
 Processor implementations should override this method.  
  
##  <a name="wait"></a>  message_processor::wait Method  
 When overridden in a derived class, waits for all asynchronous operations to complete.  
  
```
virtual void wait() = 0;
```  
  
### Remarks  
 Processor implementations should override this method.  
  
## See Also  
 [concurrency Namespace](concurrency-namespace.md)   
 [ordered_message_processor Class](ordered-message-processor-class.md)
