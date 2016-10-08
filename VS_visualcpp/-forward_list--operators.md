---
title: "&lt;forward_list&gt; operators"
ms.custom: na
ms.date: 10/03/2016
ms.reviewer: na
ms.suite: na
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 57492e09-3836-4dbc-9ae5-78ecf506c190
caps.latest.revision: 9
---
# &lt;forward_list&gt; operators
||||  
|-|-|-|  
|[operator!=](#operator_neq)|[operator&gt;](#operator_gt_)|[operator&gt;=](#operator_gt__eq)|  
|[operator&lt;](#operator_lt_)|[operator&lt;=](#operator_lt__eq)|[operator==](#operator_eq_eq)|  
  
##  <a name="operator_eq_eq"></a>  operator==  
 Tests if the forward list object on the left side of the operator is equal to the forward list object on the right side.  
  
```  
bool operator==(  
    const forward_list <Type, Allocator>& _Left,  
    const forward_list <Type, Allocator>& _Right  
);  
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`_Left`|An object of type `forward_list`.|  
|`_Right`|An object of type `forward_list`.|  
  
### Remarks  
 This template function overloads `operator==` to compare two objects of template class `forward_list`. The function returns `distance(_Left.begin(), end()) == distance(_Right.begin(),_Right.end()) && equal(_Left. begin(),_Left. end(),_Right.begin())`.  
  
##  <a name="operator_neq"></a>  operator!=  
 Tests if the forward list object on the left side of the operator is not equal to the forward list object on the right side.  
  
```  
bool operator!=(  
    const forward_list <Type, Allocator>& _Left,  
    const forward_list <Type, Allocator>& _Right  
);  
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`_Left`|An object of type `forward_list`.|  
|`_Right`|An object of type `forward_list`.|  
  
### Return Value  
 **true** if the lists are not equal; **false** if the lists are equal.  
  
### Remarks  
 This template function returns `!(_Left == _Right)`.  
  
##  <a name="operator_lt_"></a>  operator&lt;  
 Tests if the forward list object on the left side of the operator is less than the forward list object on the right side.  
  
```  
bool operator<(  
    const forward_list <Type, Allocator>& _Left,  
    const forward_list <Type, Allocator>& _Right  
);  
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`_Left`|An object of type `forward_list`.|  
|`_Right`|An object of type `forward_list`.|  
  
### Return Value  
 `true` if the list on the left side of the operator is less than but not equal to the list on the right side of the operator; otherwise `false`.  
  
### Remarks  
 This template function overloads `operator<` to compare two objects of template class `forward_list`. The function returns `lexicographical_compare(lhs. begin(), lhs. end(), rhs.begin(), rhs.end())`.  
  
##  <a name="operator_lt__eq"></a>  operator&lt;=  
 Tests if the forward list object on the left side of the operator is less than or equal to the forward list object on the right side.  
  
```  
bool operator<=(  
    const forward_list <Type, Allocator>& _Left,  
    const forward_list <Type, Allocator>& _Right  
);  
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`_Left`|An object of type `forward_list`.|  
|`_Right`|An object of type `forward_list`.|  
  
### Return Value  
 `true` if the list on the left side of the operator is less than or equal to the list on the right side of the operator; otherwise `false`.  
  
### Remarks  
 This template function returns `!(_Right < _Left)`.  
  
##  <a name="operator_gt_"></a>  operator&gt;  
 Tests if the forward list object on the left side of the operator is greater than the forward list object on the right side.  
  
```  
bool operator>(  
    const forward_list <Type, Allocator>& _Left,  
    const forward_list <Type, Allocator>& _Right  
);  
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`_Left`|An object of type `forward_list`.|  
|`_Right`|An object of type `forward_list`.|  
  
### Return Value  
 `true` if the list on the left side of the operator is greater than the list on the right side of the operator; otherwise `false`.  
  
### Remarks  
 This template function returns `_Right < _Left`.  
  
##  <a name="operator_gt__eq"></a>  operator&gt;=  
 Tests if the forward list object on the left side of the operator is greater than or equal to the forward list object on the right side.  
  
```  
bool operator>=(  
    const forward_list <Type, Allocator>& _Left,  
    const forward_list <Type, Allocator>& _Right  
);  
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`_Left`|An object of type `forward_list`.|  
|`_Right`|An object of type `forward_list`.|  
  
### Return Value  
 `true` if the forward list on the left side of the operator is greater than or equal to the forward list on the right side of the operator; otherwise `false`.  
  
### Remarks  
 The template function returns `!(_Left < _Right)`.  
  
## See Also  
 [<forward_list>](../VS_visualcpp/-forward_list-.md)