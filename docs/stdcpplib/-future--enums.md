---
title: "&lt;future&gt; enums"
ms.custom: na
ms.date: "10/14/2016"
ms.reviewer: na
ms.suite: na
ms.tgt_pltfrm: na
ms.topic: "article"
ms.assetid: 8c675645-db47-4cab-bc0e-7b87f8a302df
caps.latest.revision: 10
---
# &lt;future&gt; enums
||||  
|-|-|-|  
|[future_errc Enumeration](#future_errc_enumeration)|[future_status Enumeration](#future_status_enumeration)|[launch Enumeration](#launch_enumeration)|  
  
##  <a name="future_errc_enumeration"></a>  future_errc Enumeration  
 Supplies symbolic names for all of the errors that are reported by the [future_error](../stdcpplib/future_error-class.md) class.  
  
```
enum class future_errc {
    broken_promise,
 future_already_retrieved,
    promise_already_satisfied,
 no_state
};
```  
  
##  <a name="future_status_enumeration"></a>  future_status Enumeration  
 Supplies symbolic names for the reasons that a timed wait function can return.  
  
```
enum future_status{    ready,
    timeout,
    deferred};
```  
  
##  <a name="launch_enumeration"></a>  launch Enumeration  
 Represents a bitmask type that describes the possible modes for the template function [async](../stdcpplib/-future--functions.md#async_function).  
  
```
enum class launch{
    async,
 deferred
};
```  
  
## See Also  
 [\<future>](../stdcpplib/-future-.md)

