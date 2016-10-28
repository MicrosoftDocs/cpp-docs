---
title: "&lt;thread&gt; functions"
ms.custom: na
ms.date: "10/14/2016"
ms.reviewer: na
ms.suite: na
ms.tgt_pltfrm: na
ms.topic: "article"
ms.assetid: bb1aa1ef-fe3f-4e2c-8b6e-e22dbf2f5a19
caps.latest.revision: 10
---
# &lt;thread&gt; functions
||||  
|-|-|-|  
|[get_id Function](#get_id_function)|[sleep_for Function](#sleep_for_function)|[sleep_until Function](#sleep_until_function)|  
|[swap Function](#swap_function)|[yield Function](#yield_function)|  
  
##  <a name="get_id_function"></a>  get_id Function  
 Uniquely identifies the current thread of execution.  
  
```  
thread::id this_thread::get_id() _NOEXCEPT;  
```  
  
### Return Value  
 An object of type thread::id that uniquely identifies the current thread of execution.  
  
##  <a name="sleep_for_function"></a>  sleep_for Function  
 Blocks the calling thread.  
  
```  
template<class Rep,  
class Period>  
inline void sleep_for(  
   const chrono::duration< Rep, Period>& Rel_time  
);  
```  
  
### Parameters  
 `Rel_time`  
 A [duration](../stdcpplib/duration-class.md) object that specifies a time interval.  
  
### Remarks  
 The function blocks the calling thread for at least the time that's specified by `Rel_time`. This function does not throw any exceptions.  
  
##  <a name="sleep_until_function"></a>  sleep_until Function  
 Blocks the calling thread at least until the specified time.  
  
```  
template<class Clock, class Duration>  
    void sleep_until(const chrono::time_point<Clock, Duration>& Abs_time);  
void sleep_until(const xtime *Abs_time);  
```  
  
### Parameters  
 `Abs_time`  
 Represents a point in time.  
  
### Remarks  
 This function does not throw any exceptions.  
  
##  <a name="swap_function"></a>  swap Function  
 Swaps the states of two `thread` objects.  
  
```  
void swap(  
   thread& Left,  
   thread& Right  
) _NOEXCEPT;  
```  
  
### Parameters  
 `Left`  
 The left `thread` object.  
  
 `Right`  
 The right `thread` object.  
  
### Remarks  
 The function calls `Left.swap(Right)`.  
  
##  <a name="yield_function"></a>  yield Function  
 Signals the operating system to run other threads, even if the current thread would ordinarily continue to run.  
  
```  
inline void yield() _NOEXCEPT;  
```  
  
## See Also  
 [\<thread>](../stdcpplib/-thread-.md)