---
title: "&lt;system_error&gt; operators"
ms.custom: na
ms.date: 10/03/2016
ms.reviewer: na
ms.suite: na
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: c14edefb-bd8a-4e90-88d3-c59c98e6f73c
caps.latest.revision: 9
---
# &lt;system_error&gt; operators
||||  
|-|-|-|  
|[operator!=](#operator_neq)|[operator&lt;](#operator_lt_)|[operator==](#operator_eq_eq)|  
  
##  <a name="operator_eq_eq"></a>  operator==  
 Tests if the object on the left side of the operator is equal to the object on the right side.  
  
```  
bool operator==(const error_code& _Left, const error_condition& _Right);  
bool operator==(const error_condition& _Left, const error_code& _Right);  
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`_Left`|The object to be tested for equality.|  
|`_Right`|The object to be tested for equality.|  
  
### Return Value  
 **true** if the objects are equal; **false** if objects are not equal.  
  
### Remarks  
 This function returns `_Left.category() == _Right.category() && _Left.value() == _Right.value()`.  
  
##  <a name="operator_neq"></a>  operator!=  
 Tests if the object on the left side of the operator is not equal to the object on the right side.  
  
```  
bool operator!=(const error_code& _Left, const error_condition& _Right);  
bool operator!=(const error_condition& _Left, const error_code& _Right);  
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`_Left`|The object to be tested for inequality.|  
|`_Right`|The object to be tested for inequality.|  
  
### Return Value  
 **true** if the object passed in `_Left` is not equal to the object passed in `_Right`; otherwise **false**.  
  
### Remarks  
 This function returns `!(_Left == _Right)`.  
  
##  <a name="operator_lt_"></a>  operator&lt;  
 Tests if an object is less than the object passed in for comparison.  
  
```  
template<class _Enum> inline bool operator<(  
    _Enum _Left,  
    typename enable_if<is_error_code_enum<_Enum>::value,  
    const error_code&>::type _Right);  
template<class _Enum> inline bool operator<(  
    typename enable_if<is_error_code_enum<_Enum>::value,  
    const error_code&>::type _Left, _Enum _Right);  
template<class _Enum> inline bool operator<(  
    _Enum _Left,  
    typename enable_if<is_error_condition_enum<_Enum>::value,  
    const error_condition&>::type _Right);  
template<class _Enum> inline bool operator<(  
    typename enable_if<is_error_condition_enum<_Enum>::value,  
    const error_condition&>::type _Left, _Enum _Right);  
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`_Left`|The object to be compared.|  
|`_Right`|The object to be compared.|  
  
### Return Value  
 **true** if the object passed in `_Left` is less than the object passed in `_Right`; Otherwise, **false**.  
  
### Remarks  
 This function tests the error order.  
  
## See Also  
 [<system_error>](../VS_visualcpp/-system_error-.md)