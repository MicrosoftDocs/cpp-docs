---
title: "&lt;thread&gt; operators | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: e6bb6c0f-64f9-4cb2-9ff2-05b88a6ba7ac
caps.latest.revision: 11
manager: "ghogen"
---
# &lt;thread&gt; operators
||||  
|-|-|-|  
|[operator!=](#operator_neq)|[operator&gt;](#operator_gt_)|[operator&gt;=](#operator_gt__eq)|  
|[operator&lt;](#operator_lt_)|[operator&lt;&lt;](#operator_lt__lt_)|[operator&lt;=](#operator_lt__eq)|  
|[operator==](#operator_eq_eq)|  
  
##  <a name="operator_gt__eq"></a>  operator&gt;=  
 Determines whether one `thread::id` object is greater than or equal to another.  
  
```cpp
bool operator>= (
    thread::id Left,
    thread::id Right) noexcept
```  
  
### Parameters  
 `Left`  
 The left `thread::id` object.  
  
 `Right`  
 The right `thread::id` object.  
  
### Return Value  
 `!(Left < Right)`  
  
### Remarks  
 This function does not throw any exceptions.  
  
##  <a name="operator_gt_"></a>  operator&gt;  
 Determines whether one `thread::id` object is greater than another.  
  
```cpp
bool operator> (
    thread::id Left,
    thread::id Right) noexcept
```  
  
### Parameters  
 `Left`  
 The left `thread::id` object.  
  
 `Right`  
 The right `thread::id` object.  
  
### Return Value  
 `Right < Left`  
  
### Remarks  
 This function does not throw any exceptions.  
  
##  <a name="operator_lt__eq"></a>  operator&lt;=  
 Determines whether one `thread::id` object is less than or equal to another.  
  
```cpp
bool operator<= (
    thread::id Left,
    thread::id Right) noexcept
```  
  
### Parameters  
 `Left`  
 The left `thread::id` object.  
  
 `Right`  
 The right `thread::id` object.  
  
### Return Value  
 `!(Right < Left)`  
  
### Remarks  
 This function does not throw any exceptions.  
  
##  <a name="operator_lt_"></a>  operator&lt;  
 Determines whether one `thread::id` object is less than another.  
  
```cpp
bool operator<(
    thread::id Left,
    thread::id Right) noexcept
```  
  
### Parameters  
 `Left`  
 The left `thread::id` object.  
  
 `Right`  
 The right `thread::id` object.  
  
### Return Value  
 `true` if `Left` precedes `Right` in the total ordering; otherwise, `false`.  
  
### Remarks  
 The operator defines a total ordering on all `thread::id` objects. These objects can be used as keys in associative containers.  
  
 This function does not throw any exceptions.  
  
##  <a name="operator_neq"></a>  operator!=  
 Compares two `thread::id` objects for inequality.  
  
```cpp
bool operator!= (
    thread::id Left,
    thread::id Right) noexcept
```  
  
### Parameters  
 `Left`  
 The left `thread::id` object.  
  
 `Right`  
 The right `thread::id` object.  
  
### Return Value  
 `!(Left == Right)`  
  
### Remarks  
 This function does not throw any exceptions.  
  
##  <a name="operator_eq_eq"></a>  operator==  
 Compares two `thread::id` objects for equality.  
  
```cpp
bool operator== (
    thread::id Left,
    thread::id Right) noexcept
```  
  
### Parameters  
 `Left`  
 The left `thread::id` object.  
  
 `Right`  
 The right `thread::id` object.  
  
### Return Value  
 `true` if the two objects represent the same thread of execution or if neither object represents a thread of execution; otherwise, `false`.  
  
### Remarks  
 This function does not throw any exceptions.  
  
##  <a name="operator_lt__lt_"></a>  operator&lt;&lt;  
 Inserts a text representation of a `thread::id` object into a stream.  
  
```cpp
template <class Elem, class Tr>
basic_ostream<Elem, Tr>& operator<<(
    basic_ostream<Elem, Tr>& Ostr, thread::id Id);
```  
  
### Parameters  
 `Ostr`  
 A [basic_ostream](../standard-library/basic-ostream-class.md) object.  
  
 `Id`  
 A `thread::id` object.  
  
### Return Value  
 `Ostr`.  
  
### Remarks  
 This function inserts `Id` into `Ostr`.  
  
 If two `thread::id` objects compare equal, the inserted text representations of those objects are the same.  
  
## See Also  
 [\<thread>](../standard-library/thread.md)



