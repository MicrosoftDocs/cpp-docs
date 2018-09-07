---
title: "concurrency namespace Operators | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.topic: "reference"
f1_keywords: ["concrt/concurrency::operator!=", "concrt/concurrency:[operator&amp;&amp"]
dev_langs: ["C++"]
ms.assetid: 8e373f23-fc8e-49f7-82e6-ba0c57b822f8
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# concurrency namespace Operators
||||  
|-|-|-|  
|[operator!=](#operator_neq)|[operator&amp;&amp;](#operator_amp_amp)|[operator&gt;](#operator_gt)|  
|[operator&gt;=](#operator_gt_eq)|[operator&lt;](#operator_lt)|[operator&lt;=](#operator_lt_eq)|  
|[operator==](#operator_eq_eq)|[operator||](#operator_lor)|  
  
##  <a name="operator_lor"></a>  operator&#124;&#124; Operator  
 Creates a task that will complete successfully when either of the tasks supplied as arguments completes successfully.  
  
```  
template<typename ReturnType>  
task<ReturnType> operator||(
    const task<ReturnType>& lhs,  
    const task<ReturnType>& rhs);

 
template<typename ReturnType>  
task<std::vector<ReturnType>> operator||(
    const task<std::vector<ReturnType>>& lhs,  
    const task<ReturnType>& rhs);

 
template<typename ReturnType>  
task<std::vector<ReturnType>> operator||(
    const task<ReturnType>& lhs,  
    const task<std::vector<ReturnType>>& rhs);

 
inline task<void> operator||(
    const task<void>& lhs,  
    const task<void>& rhs);
```  
  
### Parameters  
 `ReturnType`  
 The type of the returned task.  
  
 `lhs`  
 The first task to combine into the resulting task.  
  
 `rhs`  
 The second task to combine into the resulting task.  
  
### Return Value  
 A task that completes sucessfully when either of the input tasks has completed successfully. If the input tasks are of type `T`, the output of this function will be a `task<std::vector<T>`. If the input tasks are of type `void` the output task will also be a `task<void>`.  
  
### Remarks  
 If both of the tasks are canceled or throw exceptions, the returned task will complete in the canceled state, and one of the exceptions, if any are encountered, will be thrown when you call `get()` or `wait()` on that task.  
  
##  <a name="operator_amp_amp"></a>  operator&amp;&amp; Operator  
 Creates a task that will complete succesfully when both of the tasks supplied as arguments complete successfully.  
  
```  
template<typename ReturnType>  
task<std::vector<ReturnType>>  operator&&(
    const task<ReturnType>& lhs,  
    const task<ReturnType>& rhs);

 
template<typename ReturnType>  
task<std::vector<ReturnType>>  operator&&(
    const task<std::vector<ReturnType>>& lhs,  
    const task<ReturnType>& rhs);

 
template<typename ReturnType>  
task<std::vector<ReturnType>>  operator&&(
    const task<ReturnType>& lhs,  
    const task<std::vector<ReturnType>>& rhs);

 
template<typename ReturnType>  
task<std::vector<ReturnType>>  operator&&(
    const task<std::vector<ReturnType>>& lhs,  
    const task<std::vector<ReturnType>>& rhs);

 
inline task<void>  operator&&(
    const task<void>& lhs,  
    const task<void>& rhs);
```  
  
### Parameters  
 `ReturnType`  
 The type of the returned task.  
  
 `lhs`  
 The first task to combine into the resulting task.  
  
 `rhs`  
 The second task to combine into the resulting task.  
  
### Return Value  
 A task that completes successfully when both of the input tasks have completed successfully. If the input tasks are of type `T`, the output of this function will be a `task<std::vector<T>>`. If the input tasks are of type `void` the output task will also be a `task<void>`.  
  
### Remarks  
 If one of the tasks is canceled or throws an exception, the returned task will complete early, in the canceled state, and the exception, if one is encoutered, will be thrown if you call `get()` or `wait()` on that task.  
  
##  <a name="operator_eq_eq"></a>  operator== Operator  
 Tests if the `concurrent_vector` object on the left side of the operator is equal to the `concurrent_vector` object on the right side.  
  
```  
template<typename T, class A1, class A2>  
inline bool operator== (
    const concurrent_vector<T, A1>& _A,  
    const concurrent_vector<T, A2>& _B);
```  
  
### Parameters  
 `T`  
 The data type of the elements stored in the concurrent vectors.  
  
 `A1`  
 The allocator type of the first `concurrent_vector` object.  
  
 `A2`  
 The allocator type of the second `concurrent_vector` object.  
  
 `_A`  
 An object of type `concurrent_vector`.  
  
 `_B`  
 An object of type `concurrent_vector`.  
  
### Return Value  
 `true` if the concurrent vector on the left side of the operator is equal to the concurrent vector on the right side of the operator; otherwise `false`.  
  
### Remarks  
 Two concurrent vectors are equal if they have the same number of elements and their respective elements have the same values. Otherwise, they are unequal.  
  
 This method is not concurrency-safe with respect to other methods that could modify either of the concurrent vectors `_A` or `_B`.  
  
##  <a name="operator_neq"></a>  operator!= Operator  
 Tests if the `concurrent_vector` object on the left side of the operator is not equal to the `concurrent_vector` object on the right side.  
  
```  
template<typename T, class A1, class A2>  
inline bool operator!= (
    const concurrent_vector<T, A1>& _A,  
    const concurrent_vector<T, A2>& _B);
```  
  
### Parameters  
 `T`  
 The data type of the elements stored in the concurrent vectors.  
  
 `A1`  
 The allocator type of the first `concurrent_vector` object.  
  
 `A2`  
 The allocator type of the second `concurrent_vector` object.  
  
 `_A`  
 An object of type `concurrent_vector`.  
  
 `_B`  
 An object of type `concurrent_vector`.  
  
### Return Value  
 `true` if the concurrent vectors are not equal; `false` if the concurrent vectors are equal.  
  
### Remarks  
 Two concurrent vectors are equal if they have the same number of elements and their respective elements have the same values. Otherwise, they are unequal.  
  
 This method is not concurrency-safe with respect to other methods that could modify either of the concurrent vectors `_A` or `_B`.  
  
##  <a name="operator_lt"></a>  operator&lt; Operator  
 Tests if the `concurrent_vector` object on the left side of the operator is less than the `concurrent_vector` object on the right side.  
  
```  
template<typename T, class A1, class A2>  
inline bool operator<(
    const concurrent_vector<T, A1>& _A,  
    const concurrent_vector<T, A2>& _B);
```  
  
### Parameters  
 `T`  
 The data type of the elements stored in the concurrent vectors.  
  
 `A1`  
 The allocator type of the first `concurrent_vector` object.  
  
 `A2`  
 The allocator type of the second `concurrent_vector` object.  
  
 `_A`  
 An object of type `concurrent_vector`.  
  
 `_B`  
 An object of type `concurrent_vector`.  
  
### Return Value  
 `true` if the concurrent vector on the left side of the operator is less than the concurrent vector on the right side of the operator; otherwise `false`.  
  
### Remarks  
 The behavior of this operator is identical to the equivalent operator for the `vector` class in the `std` namespace.  
  
 This method is not concurrency-safe with respect to other methods that could modify either of the concurrent vectors `_A` or `_B`.  
  
##  <a name="operator_lt_eq"></a>  operator&lt;= Operator  
 Tests if the `concurrent_vector` object on the left side of the operator is less than or equal to the `concurrent_vector` object on the right side.  
  
```  
template<typename T, class A1, class A2>  
inline bool operator<= (
    const concurrent_vector<T, A1>& _A,  
    const concurrent_vector<T, A2>& _B);
```  
  
### Parameters  
 `T`  
 The data type of the elements stored in the concurrent vectors.  
  
 `A1`  
 The allocator type of the first `concurrent_vector` object.  
  
 `A2`  
 The allocator type of the second `concurrent_vector` object.  
  
 `_A`  
 An object of type `concurrent_vector`.  
  
 `_B`  
 An object of type `concurrent_vector`.  
  
### Return Value  
 `true` if the concurrent vector on the left side of the operator is less than or equal to the concurrent vector on the right side of the operator; otherwise `false`.  
  
### Remarks  
 The behavior of this operator is identical to the equivalent operator for the `vector` class in the `std` namespace.  
  
 This method is not concurrency-safe with respect to other methods that could modify either of the concurrent vectors `_A` or `_B`.  
  
##  <a name="operator_gt"></a>  operator&gt; Operator  
 Tests if the `concurrent_vector` object on the left side of the operator is greater than the `concurrent_vector` object on the right side.  
  
```  
template<typename T, class A1, class A2>  
inline bool operator>(
    const concurrent_vector<T, A1>& _A,  
    const concurrent_vector<T, A2>& _B);
```  
  
### Parameters  
 `T`  
 The data type of the elements stored in the concurrent vectors.  
  
 `A1`  
 The allocator type of the first `concurrent_vector` object.  
  
 `A2`  
 The allocator type of the second `concurrent_vector` object.  
  
 `_A`  
 An object of type `concurrent_vector`.  
  
 `_B`  
 An object of type `concurrent_vector`.  
  
### Return Value  
 `true` if the concurrent vector on the left side of the operator is greater than the concurrent vector on the right side of the operator; otherwise `false`.  
  
### Remarks  
 The behavior of this operator is identical to the equivalent operator for the `vector` class in the `std` namespace.  
  
 This method is not concurrency-safe with respect to other methods that could modify either of the concurrent vectors `_A` or `_B`.  
  
##  <a name="operator_gt_eq"></a>  operator&gt;= Operator  
 Tests if the `concurrent_vector` object on the left side of the operator is greater than or equal to the `concurrent_vector` object on the right side.  
  
```  
template<typename T, class A1, class A2>  
inline bool operator>= (
    const concurrent_vector<T, A1>& _A,  
    const concurrent_vector<T, A2>& _B);
```  
  
### Parameters  
 `T`  
 The data type of the elements stored in the concurrent vectors.  
  
 `A1`  
 The allocator type of the first `concurrent_vector` object.  
  
 `A2`  
 The allocator type of the second `concurrent_vector` object.  
  
 `_A`  
 An object of type `concurrent_vector`.  
  
 `_B`  
 An object of type `concurrent_vector`.  
  
### Return Value  
 `true` if the concurrent vector on the left side of the operator is greater than or equal to the concurrent vector on the right side of the operator; otherwise `false`.  
  
### Remarks  
 The behavior of this operator is identical to the equivalent operator for the `vector` class in the `std` namespace.  
  
 This method is not concurrency-safe with respect to other methods that could modify either of the concurrent vectors `_A` or `_B`.  
  
## See Also  
 [concurrency Namespace](concurrency-namespace.md)
