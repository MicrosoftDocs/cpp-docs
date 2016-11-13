---
title: "&lt;forward_list&gt; operators | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: 57492e09-3836-4dbc-9ae5-78ecf506c190
caps.latest.revision: 11
manager: "ghogen"
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
    const forward_list <Type, Allocator>& left,
    const forward_list <Type, Allocator>& right);
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`left`|An object of type `forward_list`.|  
|`right`|An object of type `forward_list`.|  
  
### Remarks  
 This template function overloads `operator==` to compare two objects of template class `forward_list`. The function returns `distance(left.begin(), end()) == distance(right.begin(),right.end()) && equal(left. begin(),left. end(),right.begin())`.  
  
##  <a name="operator_neq"></a>  operator!=  
 Tests if the forward list object on the left side of the operator is not equal to the forward list object on the right side.  
  
```
bool operator!=(
    const forward_list <Type, Allocator>& left,
    const forward_list <Type, Allocator>& right);
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`left`|An object of type `forward_list`.|  
|`right`|An object of type `forward_list`.|  
  
### Return Value  
 **true** if the lists are not equal; **false** if the lists are equal.  
  
### Remarks  
 This template function returns `!(left == right)`.  
  
##  <a name="operator_lt_"></a>  operator&lt;  
 Tests if the forward list object on the left side of the operator is less than the forward list object on the right side.  
  
```
bool operator<(
    const forward_list <Type, Allocator>& left,
    const forward_list <Type, Allocator>& right);
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`left`|An object of type `forward_list`.|  
|`right`|An object of type `forward_list`.|  
  
### Return Value  
 `true` if the list on the left side of the operator is less than but not equal to the list on the right side of the operator; otherwise `false`.  
  
### Remarks  
 This template function overloads `operator<` to compare two objects of template class `forward_list`. The function returns `lexicographical_compare(lhs. begin(), lhs. end(), rhs.begin(), rhs.end())`.  
  
##  <a name="operator_lt__eq"></a>  operator&lt;=  
 Tests if the forward list object on the left side of the operator is less than or equal to the forward list object on the right side.  
  
```
bool operator<=(
    const forward_list <Type, Allocator>& left,
    const forward_list <Type, Allocator>& right);
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`left`|An object of type `forward_list`.|  
|`right`|An object of type `forward_list`.|  
  
### Return Value  
 `true` if the list on the left side of the operator is less than or equal to the list on the right side of the operator; otherwise `false`.  
  
### Remarks  
 This template function returns `!(right < left)`.  
  
##  <a name="operator_gt_"></a>  operator&gt;  
 Tests if the forward list object on the left side of the operator is greater than the forward list object on the right side.  
  
```
bool operator>(
    const forward_list <Type, Allocator>& left,
    const forward_list <Type, Allocator>& right);
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`left`|An object of type `forward_list`.|  
|`right`|An object of type `forward_list`.|  
  
### Return Value  
 `true` if the list on the left side of the operator is greater than the list on the right side of the operator; otherwise `false`.  
  
### Remarks  
 This template function returns `right < left`.  
  
##  <a name="operator_gt__eq"></a>  operator&gt;=  
 Tests if the forward list object on the left side of the operator is greater than or equal to the forward list object on the right side.  
  
```
bool operator>=(
    const forward_list <Type, Allocator>& left,
    const forward_list <Type, Allocator>& right);
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`left`|An object of type `forward_list`.|  
|`right`|An object of type `forward_list`.|  
  
### Return Value  
 `true` if the forward list on the left side of the operator is greater than or equal to the forward list on the right side of the operator; otherwise `false`.  
  
### Remarks  
 The template function returns `!(left < right)`.  
  
## See Also  
 [<forward_list>](../standard-library/forward-list.md)



