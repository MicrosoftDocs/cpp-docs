---
title: "message Class | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "agents/concurrency::message"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "message class"
ms.assetid: 3e1f3505-6c0c-486c-8191-666d0880ec62
caps.latest.revision: 21
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# message Class
[!INCLUDE[blank_token](../../../includes/blank-token.md)]

The basic message envelope containing the data payload being passed between messaging blocks.  
  
## Syntax  
  
```
template<class T>
class message : public ::Concurrency::details::_Runtime_object;
```  
  
#### Parameters  
 `T`  
 The data type of the payload within the message.  
  
## Members  
  
### Public Typedefs  
  
|Name|Description|  
|----------|-----------------|  
|`type`|A type alias for `T`.|  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[message::message Constructor](#message__message_constructor)|Overloaded. Constructs a `message` object.|  
|[message::~message Destructor](#message___dtormessage_destructor)|Destroys the `message` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[message::add_ref Method](#message__add_ref_method)|Adds to the reference count for the `message` object. Used for message blocks that need reference counting to determine message lifetimes.|  
|[message::msg_id Method](#message__msg_id_method)|Returns the ID of the `message` object.|  
|[message::remove_ref Method](#message__remove_ref_method)|Subtracts from the reference count for the `message` object. Used for message blocks that need reference counting to determine message lifetimes.|  
  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[message::payload Data Member](#message__payload_data_member)|The payload of the `message` object.|  
  
## Remarks  
 For more information, see [Asynchronous Message Blocks](../../../parallel/concrt/asynchronous-message-blocks.md).  
  
## Inheritance Hierarchy  
 `message`  
  
## Requirements  
 **Header:** agents.h  
  
 **Namespace:** concurrency  
  
##  <a name="message__add_ref_method"></a>  message::add_ref Method  
 Adds to the reference count for the `message` object. Used for message blocks that need reference counting to determine message lifetimes.  
  
```
long add_ref();
```  
  
### Return Value  
 The new value of the reference count.  
  
##  <a name="message__message_constructor"></a>  message::message Constructor  
 Constructs a `message` object.  
  
```
message(
    T const& _P);

message(
    T const& _P,
    runtime_object_identity _Id);

message(
    message const& _Msg);

message(
    _In_ message const* _Msg);
```  
  
### Parameters  
 `_P`  
 The payload of this message.  
  
 `_Id`  
 The unique ID of this message.  
  
 `_Msg`  
 A reference or pointer to a `message` object.  
  
### Remarks  
 The constructor that takes a pointer to a `message` object as an argument throws an [invalid_argument](../../../standard-library/invalid-argument-class.md) exception if the parameter `_Msg` is `NULL`.  
  
##  <a name="message___dtormessage_destructor"></a>  message::~message Destructor  
 Destroys the `message` object.  
  
```
virtual ~message();
```  
  
##  <a name="message__msg_id_method"></a>  message::msg_id Method  
 Returns the ID of the `message` object.  
  
```
runtime_object_identity msg_id() const;
```  
  
### Return Value  
 The `runtime_object_identity` of the `message` object.  
  
##  <a name="message__payload_data_member"></a>  message::payload Data Member  
 The payload of the `message` object.  
  
```
T const payload;
```  
  
##  <a name="message__remove_ref_method"></a>  message::remove_ref Method  
 Subtracts from the reference count for the `message` object. Used for message blocks that need reference counting to determine message lifetimes.  
  
```
long remove_ref();
```  
  
### Return Value  
 The new value of the reference count.  
  
## See Also  
 [concurrency Namespace](../../../parallel/concrt/reference/concurrency-namespace.md)
