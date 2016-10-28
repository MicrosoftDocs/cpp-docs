---
title: "Concurrency namespace operators (AMP)"
ms.custom: ""
ms.date: "10/28/2016"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: 77f1ae17-1eb2-480d-8fe5-66d4c24bb91e
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Concurrency namespace operators (AMP)
||||  
|-|-|-|  
|[operator!= Operator (C++ AMP)](#operator_neq_operator__c_add_add_amp_)|[operator% Operator (C++ AMP)](#operator_mod_operator__c_add_add_amp_)|[operator* Operator (C++ AMP)](#operator_star_operator__c_add_add_amp_)|  
|[operator+ Operator (C++ AMP)](#operator_add_operator__c_add_add_amp_)|[operator- Operator (C++ AMP)](#operator-_operator__c_add_add_amp_)|[operator/ Operator (C++ AMP)](#operator__operator__c_add_add_amp_)|  
|[operator== Operator (C++ AMP)](#operator_eq_eq_operator__c_add_add_amp_)|  
  
##  <a name="operator_eq_eq_operator__c_add_add_amp_"></a>  operator== Operator (C++ AMP)  
 Determines whether the specified arguments are equal.  
  
```  
template <
    int _Rank,  
    template <int> class _Tuple_type  
>  
bool operator== (
    const _Tuple_type<_Rank>& _Lhs,  
    const _Tuple_type<_Rank>& _Rhs) restrict(amp);
```  
  
### Parameters  
 `_Rank`  
 The rank of the tuple arguments.  
  
 `_Lhs`  
 One of the tuples to compare.  
  
 `_Rhs`  
 One of the tuples to compare.  
  
### Return Value  
 `true` if the tuples are equal; otherwise, `false`.  
  
##  <a name="operator_neq_operator__c_add_add_amp_"></a>  operator!= Operator (C++ AMP)  
 Determines whether the specified arguments are not equal.  
  
```  
template <
    int _Rank,  
    template <int> class _Tuple_type  
>  
bool operator!= (
    const _Tuple_type<_Rank>& _Lhs,  
    const _Tuple_type<_Rank>& _Rhs) restrict(amp);
```  
  
### Parameters  
 `_Rank`  
 The rank of the tuple arguments.  
  
 `_Lhs`  
 One of the tuples to compare.  
  
 `_Rhs`  
 One of the tuples to compare.  
  
### Return Value  
 `true` if the tuples are not equal; otherwise, `false`.  
  
##  <a name="operator_add_operator__c_add_add_amp_"></a>  operator+ Operator (C++ AMP)  
 Computes the component-wise sum of the specified arguments.  
  
```  
template <
    int _Rank,  
    template <int> class _Tuple_type  
>  
class _Tuple_type> _Tuple_type<_Rank>   operator+(
    const _Tuple_type<_Rank>& _Lhs,  
    const _Tuple_type<_Rank>& _Rhs) restrict(amp,cpu);

 
template <
    int _Rank,  
    template <int> class _Tuple_type  
>  
class _Tuple_type> _Tuple_type<_Rank>   operator+(
    const _Tuple_type<_Rank>& _Lhs,  
    typename _Tuple_type<_Rank>::value_type _Rhs) restrict(amp,cpu);

 
template <
    int _Rank,  
    template <int> class _Tuple_type  
>  
class _Tuple_type> _Tuple_type<_Rank>   operator+(
    typename _Tuple_type<_Rank>::value_type _Lhs,  
    const _Tuple_type<_Rank>& _Rhs) restrict(amp,cpu);
```  
  
### Parameters  
 `_Rank`  
 The rank of the tuple arguments.  
  
 `_Lhs`  
 One of the arguments to add.  
  
 `_Rhs`  
 One of the arguments to add.  
  
### Return Value  
 The component-wise sum of the specified arguments.  
  
##  <a name="operator-_operator__c_add_add_amp_"></a>  operator- Operator (C++ AMP)  
 Computes the component-wise difference between the specified arguments.  
  
```  
template <
    int _Rank,  
    template <int> class _Tuple_type  
>  
_Tuple_type<_Rank>   operator-(
    const _Tuple_type<_Rank>& _Lhs,  
    const _Tuple_type<_Rank>& _Rhs) restrict(amp,cpu);

 
template <
    int _Rank,  
    template <int> class _Tuple_type  
>  
_Tuple_type<_Rank>   operator-(
    const _Tuple_type<_Rank>& _Lhs,  
    typename _Tuple_type<_Rank>::value_type _Rhs) restrict(amp,cpu);

 
template <
    int _Rank,  
    template <int> class _Tuple_type  
>  
_Tuple_type<_Rank>   operator-(
    typename _Tuple_type<_Rank>::value_type _Lhs,  
    const _Tuple_type<_Rank>& _Rhs) restrict(amp,cpu);
```  
  
### Parameters  
 `_Rank`  
 The rank of the tuple arguments.  
  
 `_Lhs`  
 The argument to be subtracted from.  
  
 `_Rhs`  
 The argument to subtract.  
  
### Return Value  
 The component-wise difference between the specified arguments.  
  
##  <a name="operator_star_operator__c_add_add_amp_"></a>  operator* Operator (C++ AMP)  
 Computes the component-wise product of the specified arguments.  
  
```  
template <
    int _Rank,  
    template <int> class _Tuple_type  
>  
_Tuple_type<_Rank>   operator*(
    const _Tuple_type<_Rank>& _Lhs,  
    typename _Tuple_type<_Rank>::value_type _Rhs) restrict(amp,cpu);

 
template <
    int _Rank,  
    template <int> class _Tuple_type  
>  
_Tuple_type<_Rank>   operator*(
    typename _Tuple_type<_Rank>::value_type _Lhs,  
    const _Tuple_type<_Rank>& _Rhs) restrict(amp, cpu);
```  
  
### Parameters  
 `_Rank`  
 The rank of the tuple arguments.  
  
 `_Lhs`  
 One of the tuples to multiply.  
  
 `_Rhs`  
 One of the tuples to multiply.  
  
### Return Value  
 The component-wise product of the specified arguments.  
  
##  <a name="operator__operator__c_add_add_amp_"></a>  operator/ Operator (C++ AMP)  
 Computes the component-wise quotient of the specified arguments.  
  
```  
template <
    int _Rank,  
    template <int> class _Tuple_type  
>  
_Tuple_type<_Rank>   operator/(
    const _Tuple_type<_Rank>& _Lhs,  
    typename _Tuple_type<_Rank>::value_type _Rhs) restrict(amp,cpu);

 
template <
    int _Rank,  
    template <int> class _Tuple_type  
>  
_Tuple_type<_Rank>   operator/(
    typename _Tuple_type<_Rank>::value_type _Lhs,  
    const _Tuple_type<_Rank>& _Rhs) restrict(amp,cpu);
```  
  
### Parameters  
 `_Rank`  
 The rank of the tuple arguments.  
  
 `_Lhs`  
 The tuple to be divided.  
  
 `_Rhs`  
 The tuple to divide by.  
  
### Return Value  
 The component-wise quotient of the specified arguments.  
  
##  <a name="operator_mod_operator__c_add_add_amp_"></a>  operator% Operator (C++ AMP)  
 Computes the modulus of the first specified argument by the second specified argument.  
  
```  
template <
    int _Rank,  
    template <int> class _Tuple_type  
>  
_Tuple_type<_Rank>   operator%(
    const _Tuple_type<_Rank>& _Lhs,  
    typename _Tuple_type<_Rank>::value_type _Rhs) restrict(amp,cpu);

 
template <
    int _Rank,  
    template <int> class _Tuple_type  
>  
_Tuple_type<_Rank>   operator%(
    typename _Tuple_type<_Rank>::value_type _Lhs,  
    const _Tuple_type<_Rank>& _Rhs) restrict(amp,cpu);
```  
  
### Parameters  
 `_Rank`  
 The rank of the tuple arguments.  
  
 `_Lhs`  
 The tuple from which the modulo is calculated.  
  
 `_Rhs`  
 The tuple to modulo by.  
  
### Return Value  
 The result of the first specified argument modulus the second specified argument.  
  
## See Also  
 [Concurrency Namespace (C++ AMP)](../../../parallel/amp/reference/concurrency-namespace-cpp-amp.md)
