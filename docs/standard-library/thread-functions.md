---
title: "&lt;thread&gt; functions | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: bb1aa1ef-fe3f-4e2c-8b6e-e22dbf2f5a19
caps.latest.revision: 12
manager: "ghogen"
---
# &lt;thread&gt; functions
||||  
|-|-|-|  
|[get_id](#get_id_function)|[sleep_for](#sleep_for_function)|[sleep_until](#sleep_until_function)|  
|[swap](#swap_function)|[yield](#yield_function)|  
  
##  <a name="get_id_function"></a>  get_id  
 Uniquely identifies the current thread of execution.  
  
```  
thread::id this_thread::get_id() noexcept;  
```  
  
### Return Value  
 An object of type [thread::id](../standard-library/thread-class.md) that uniquely identifies the current thread of execution.  
  
##  <a name="sleep_for_function"></a>  sleep_for  
 Blocks the calling thread.  
  
```  
template <class Rep,  
class Period>  
inline void sleep_for(const chrono::duration<Rep, Period>& Rel_time);
```  
  
### Parameters  
 `Rel_time`  
 A [duration](../standard-library/duration-class.md) object that specifies a time interval.  
  
### Remarks  
 The function blocks the calling thread for at least the time that's specified by `Rel_time`. This function does not throw any exceptions.  
  
##  <a name="sleep_until_function"></a>  sleep_until  
 Blocks the calling thread at least until the specified time.  
  
```  
template <class Clock, class Duration>  
void sleep_until(const chrono::time_point<Clock, Duration>& Abs_time);

void sleep_until(const xtime *Abs_time);
```  
  
### Parameters  
 `Abs_time`  
 Represents a point in time.  
  
### Remarks  
 This function does not throw any exceptions.  
  
##  <a name="swap_function"></a>  swap  
 Swaps the states of two `thread` objects.  
  
```  
void swap(thread& Left, thread& Right) noexcept;  
```  
  
### Parameters  
 `Left`  
 The left `thread` object.  
  
 `Right`  
 The right `thread` object.  
  
### Remarks  
 The function calls `Left.swap(Right)`.  
  
##  <a name="yield_function"></a>  yield  
 Signals the operating system to run other threads, even if the current thread would ordinarily continue to run.  
  
```  
inline void yield() noexcept;  
```  
  
## See Also  
 [\<thread>](../standard-library/thread.md)

