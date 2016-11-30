---
title: "accelerator_view Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "amprt/Concurrency::accelerator_view"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "accelerator_view class"
ms.assetid: 9f298c21-bf62-46e0-88b8-01c5c78ef144
caps.latest.revision: 18
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
# accelerator_view Class
Represents a virtual device abstraction on a C++ AMP data-parallel accelerator.  
  
### Syntax  
  
```  
class accelerator_view;  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[accelerator_view::accelerator_view Constructor](#accelerator_view__ctor)|Initializes a new instance of the `accelerator_view` class.|  
|[accelerator_view::~accelerator_view Destructor](#accelerator_view__dtor)|Destroys the `accelerator_view` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[accelerator_view::create_marker Method](#accelerator_view__create_marker_method)|Returns a future to track the completion of all commands submitted so far to this `accelerator_view` object.|  
|[accelerator_view::flush Method](#accelerator_view__flush_method)|Submits all pending commands queued to the `accelerator_view` object to the accelerator for execution.|  
|[accelerator_view::get_accelerator Method](#accelerator_view__get_accelerator_method)|Returns the `accelerator` object for the `accelerator_view` object.|  
|[accelerator_view::get_is_auto_selection Method](#accelerator_view__get_is_auto_selection_method)|Returns a Boolean value that indicates whether the runtime will automatically select an appropriate accelerator when the `accelerator_view` object is passed to a [parallel_for_each](concurrency-namespace-functions-amp.md#parallel_for_each_function).|  
|[accelerator_view::get_is_debug Method](#accelerator_view__get_is_debug_method)|Returns a Boolean value that indicates whether the `accelerator_view` object has the DEBUG layer enabled for extensive error reporting.|  
|[accelerator_view::get_queuing_mode Method](#accelerator_view__get_queuing_mode_method)|Returns the queuing mode for the `accelerator_view` object.|  
|[accelerator_view::get_version Method](#accelerator_view__get_version_method)|Returns the version of the `accelerator_view`.|  
|[accelerator_view::wait Method](#accelerator_view__wait_method)|Waits for all commands submitted to the `accelerator_view` object to finish.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[accelerator_view::operator!= Operator](#operator_neq)|Compares this `accelerator_view` object with another and returns `false` if they are the same; otherwise, returns `true`.|  
|[accelerator_view::operator= Operator](#operator_eq)|Copies the contents of the specified `accelerator_view` object into this one.|  
|[accelerator_view::operator== Operator](#operator_eq_eq)|Compares this `accelerator_view` object with another and returns `true` if they are the same; otherwise, returns `false`.|  
  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[accelerator_view::accelerator Data Member](#accelerator_view__accelerator_data_member)|Gets the `accelerator` object for the `accelerator_view` object.|  
|[accelerator_view::is_auto_selection Data Member](#accelerator_view__is_auto_selection_data_member)|Gets a Boolean value that indicates whether the runtime will automatically select an appropriate accelerator when the `accelerator_view` object is passed to a [parallel_for_each](concurrency-namespace-functions-amp.md#parallel_for_each_function).|  
|[accelerator_view::is_debug Data Member](#accelerator_view__is_debug_data_member)|Gets a Boolean value that indicates whether the `accelerator_view` object has the DEBUG layer enabled for extensive error reporting.|  
|[accelerator_view::queuing_mode Data Member](#accelerator_view__queuing_mode_data_member)|Gets the queuing mode for the `accelerator_view` object.|  
|[accelerator_view::version Data Member](#accelerator_view__version_data_member)|Gets the version of the accelerator.|  
  
## Inheritance Hierarchy  
 `accelerator_view`  
  
### Remarks  
 An `accelerator_view` object represents a logical, isolated view of an accelerator. A single physical compute device can have many logical, isolated `accelerator_view` objects. Each accelerator has a default `accelerator_view` object. Additional `accelerator_view` objects can be created.  
  
 Physical devices can be shared among many client threads. Client threads can cooperatively use the same `accelerator_view` object of an accelerator, or each client can communicate with a compute device via an independent `accelerator_view` object for isolation from other client threads.  
  
 An `accelerator_view` object can have one of two [queuing_mode Enumeration](concurrency-namespace-enums-amp.md#queuing_mode_enumeration) states. If the queuing mode is `immediate`, commands like `copy` and `parallel_for_each` are sent to the corresponding accelerator device as soon as they return to the caller. If the queuing mode is `deferred`, such commands are queued up on a command queue that corresponds to the `accelerator_view` object. Commands are not actually sent to the device until `flush()` is called.  
  
## Requirements  
 **Header:** amprt.h  
  
 **Namespace:** Concurrency  

## <a name="accelerator"></a> accelerator_view::accelerator Data Member

Gets the accelerator object for the accelerator_view object.  
  
### Syntax  
  
```  
__declspec(property(get= get_accelerator)) Concurrency::accelerator accelerator;  
```  
  
## <a name="accelerator_view_ctor"></a> accelerator_view::accelerator_view Constructor
Initializes a new instance of the accelerator_view class by copying an existing `accelerator_view` object.  
  
### Syntax  
  
```  
accelerator_view( const accelerator_view & _Other );  
```  
  
### Parameters  
 `_Other`  
 The `accelerator_view` object to copy.  
  
## <a name="create_marker"></a> accelerator_view::create_marker Method
Returns a future to track the completion of all commands submitted so far to this `accelerator_view` object.  
  
### Syntax  
  
```  
concurrency::completion_future create_marker();  
```  
  
### Return Value  
 A future to track the completion of all commands submitted so far to this `accelerator_view` object.  
  
## <a name="flush"></a> accelerator_view::flush Method
Submits all pending commands queued to the accelerator_view object to the accelerator for execution.  
  
### Syntax  
  
```  
void flush();  
```  
  
### Return Value  
 Returns `void`.  

## <a name="get_accelerator"></a> accelerator_view::get_accelerator Method  
Returns the accelerator object for the accelerator_view object.
### Syntax
```
accelerator get_accelerator() const;
```
### Return Value
The accelerator object for the accelerator_view object.

## <a name="get_is_auto_selection"></a> accelerator_view::get_is_auto_selection Method  
Returns a Boolean value that indicates whether the runtime will automatically select an appropriate accelerator when the accelerator_view is passed to a [parallel_for_each](concurrency-namespace-functions-amp.md#parallel_for_each).  
  
### Syntax  
  
```  
bool get_is_auto_selection() const;  
```  
  
### Return Value  
 `true` if the runtime will automatically select an appropriate accelerator; otherwise, `false`.  
  
## <a name="get_is_debug"></a> accelerator_view::get_is_debug Method
Returns a Boolean value that indicates whether the accelerator_view object has the DEBUG layer enabled for extensive error reporting.  
  
### Syntax  
  
```  
bool get_is_debug() const;  
```  
  
### Return Value  
 A Boolean value that indicates whether the `accelerator_view` object has the DEBUG layer enabled for extensive error reporting.  

## <a name="get_queuing_mode"></a> accelerator_view::get_queuing_mode Method
Returns the queuing mode for the accelerator_view object.  
  
### Syntax  
  
```  
queuing_mode get_queuing_mode() const;  
```  
  
### Return Value  
 The queuing mode for the `accelerator_view` object.  
  
## <a name="get_version"></a> accelerator_view::get_version Method  
Returns the version of the accelerator_view.  
  
### Syntax  
  
```  
unsigned int get_version() const;  
```  
  
### Return Value  
 The version of the `accelerator_view`.  
  
## <a name="is_auto_selection"></a> accelerator_view::is_auto_selection Data Member  
Gets a Boolean value that indicates whether the runtime will automatically select an appropriate accelerator when the accelerator_view is passed to a [parallel_for_each](concurrency-namespace-functions-amp.md#parallel_for_each).  
  
### Syntax  
  
```  
__declspec(property(get= get_is_auto_selection)) bool is_auto_selection;  
```  
  
## <a name="is_debug"></a> accelerator_view::is_debug Data Member  
Gets a Boolean value that indicates whether the accelerator_view object has the  DEBUG layer enabled for extensive error reporting.  
  
### Syntax  
  
```  
__declspec(property(get= get_is_debug)) bool is_debug;  
```  
  
## <a name="operator_neq"></a> accelerator_view::operator!= Operator  
Compares this accelerator_view object with another and returns `false` if they are the same; otherwise, returns `true`.  
  
### Syntax  
  
```  
bool operator!= (    const accelerator_view & _Other ) const;  
```  
  
### Parameters  
 `_Other`  
 The `accelerator_view` object to compare with this one.  
  
### Return Value  
 `false` if the two objects are the same; otherwise, `true`.  
  
## <a name="operator_eq"></a> accelerator_view::operator= Operator  
Copies the contents of the specified accelerator_view object into this one.  
  
### Syntax  
  
```  
accelerator_view & operator= (    const accelerator_view & _Other );  
```  
  
### Parameters  
 `_Other`  
 The `accelerator_view` object to copy from.  
  
### Return Value  
 A reference to the modified `accelerator_view` object.  
  
## <a name="operator_eq_eq"></a> accelerator_view::operator== Operator  
Compares this accelerator_view object with another and returns `true` if they are the same; otherwise, returns `false`.  
  
### Syntax  
  
```  
bool operator= = (    const accelerator_view & _Other ) const;  
```  
  
### Parameters  
 `_Other`  
 The `accelerator_view` object to compare with this one.  
  
### Return Value  
 `true` if the two objects are the same; otherwise, `false`.  
  
## <a name="queuing_mode"></a> accelerator_view::queuing_mode Data Member  
Gets the queuing mode for the accelerator_view object.  
  
### Syntax  
  
```  
__declspec(property(get= get_queuing_mode)) Concurrency::queuing_mode queuing_mode;  
```  
  
## <a name="version"></a> accelerator_view::version Data Member  
Gets the version of the accelerator_view.  
  
### Syntax  
  
```  
__declspec(property(get= get_version)) unsigned int version;  
```  
  
## <a name="wait"></a> accelerator_view::wait Method  
Waits for all commands submitted to the accelerator_view object to finish.  
  
### Syntax  
  
```  
void wait();  
```  
  
#### Return Value  
 Returns `void`.  
  
#### Remarks  
 If the [queuing_mode](concurrency-namespace-enums-amp.md#queuing_mode) is `immediate`, this method returns immediately without blocking.  
  
##  <a name="accelerator_view_dtor"></a> accelerator_view::~accelerator_view Destructor
Destroys the accelerator_view object.  
  
#### Syntax  
  
```  
~accelerator_view();  
```  
  
### Return Value  
  
 
## See Also  
 [Concurrency Namespace (C++ AMP)](../../../parallel/amp/reference/concurrency-namespace-cpp-amp)
