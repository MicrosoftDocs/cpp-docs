---
title: "&lt;future&gt; enums | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: 8c675645-db47-4cab-bc0e-7b87f8a302df
caps.latest.revision: 11
manager: "ghogen"
---
# &lt;future&gt; enums
||||  
|-|-|-|  
|[future_errc Enumeration](#future_errc_enumeration)|[future_status Enumeration](#future_status_enumeration)|[launch Enumeration](#launch_enumeration)|  
  
##  <a name="future_errc_enumeration"></a>  future_errc Enumeration  
 Supplies symbolic names for all of the errors that are reported by the [future_error](../standard-library/future-error-class.md) class.  
  
class future_errc {
   broken_promise,
   future_already_retrieved,
   promise_already_satisfied,
   no_state
   };  
  
##  <a name="future_status_enumeration"></a>  future_status Enumeration  
 Supplies symbolic names for the reasons that a timed wait function can return.  
  
```
enum future_status{    ready,
    timeout,
 deferred};
```  
  
##  <a name="launch_enumeration"></a>  launch Enumeration  
 Represents a bitmask type that describes the possible modes for the template function [async](../standard-library/future-functions.md#async_function).  
  
class launch{
   async,
   deferred
   };  
  
## See Also  
 [\<future>](../standard-library/future.md)



