---
title: "error_category Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std::error_category"
  - "system_error/std::error_category"
  - "error_category"
  - "std.error_category"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "error_category class"
ms.assetid: e0a71e14-852d-4905-acd6-5f8ed426706d
caps.latest.revision: 15
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.mt: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# error_category Class
Represents the abstract, common base for objects that describes a category of error codes.  
  
## Syntax  
  
```
class error_category;
```  
  
## Remarks  
 Two predefined objects implement `error_category`: [generic_category](../standard-library/system-error-functions.md#generic_category) and [system_category](../standard-library/system-error-functions.md#system_category).  
  
### TypeDefs  
  
|||  
|-|-|  
|[value_type](#error_category__value_type)|A type that represents the stored error code value.|  
  
### Member Functions  
  
|||  
|-|-|  
|[default_error_condition](#error_category__default_error_condition)|Stores the error code value for an error condition object.|  
|[equivalent](#error_category__equivalent)|Returns a value that specifies whether error objects are equivalent.|  
|[message](#error_category__message)|Returns the name of the specified error code.|  
|[name](#error_category__name)|Returns the name of the category.|  
  
### Operators  
  
|||  
|-|-|  
|[operator==](#error_category__operator_eq_eq)|Tests for equality between `error_category` objects.|  
|[operator!=](#error_category__operator_neq)|Tests for inequality between `error_category` objects.|  
|[operator<](#error_category__operator_lt_)|Tests if the [error_category](../standard-library/error-category-class.md) object is less than the `error_category` object passed in for comparison.|  
  
## Requirements  
 **Header:** <system_error>  
  
 **Namespace:** std  
  
##  <a name="error_category__default_error_condition"></a>  error_category::default_error_condition  
 Stores the error code value for an error condition object.  
  
```
virtual error_condition default_error_condition(int _Errval) const;
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`_Errval`|The error code value to store in the [error_condition](../standard-library/error-condition-class.md).|  
  
### Return Value  
 Returns `error_condition(_Errval, *this)`.  
  
### Remarks  
  
##  <a name="error_category__equivalent"></a>  error_category::equivalent  
 Returns a value that specifies whether error objects are equivalent.  
  
```
virtual bool equivalent(value_type _Errval,
    const error_condition& _Cond) const;

virtual bool equivalent(const error_code& _Code,
    value_type _Errval) const;
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`_Errval`|The error code value to compare.|  
|`_Cond`|The [error_condition](../standard-library/error-condition-class.md) object to compare.|  
|`_Code`|The [error_code](../standard-library/error-code-class.md) object to compare.|  
  
### Return Value  
 `true` if the category and value are equal; otherwise, `false`.  
  
### Remarks  
 The first member function returns `*this == _Cond.category() && _Cond.value() == _Errval`.  
  
 The second member function returns `*this == _Code.category() && _Code.value() == _Errval`.  
  
##  <a name="error_category__message"></a>  error_category::message  
 Returns the name of the specified error code.  
  
```
virtual string message(error_code::value_type val) const = 0;
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`val`|The error code value to describe.|  
  
### Return Value  
 Returns a descriptive name of the error code `val` for the category.  
  
### Remarks  
  
##  <a name="error_category__name"></a>  error_category::name  
 Returns the name of the category.  
  
```
virtual const char *name() const = 0;
```  
  
### Return Value  
 Returns the name of the category as a null-terminated byte string.  
  
### Remarks  
  
##  <a name="error_category__operator_eq_eq"></a>  error_category::operator==  
 Tests for equality between `error_category` objects.  
  
```
bool operator==(const error_category& right) const;
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`right`|The object to be tested for equality.|  
  
### Return Value  
 **true** if the objects are equal; **false** if the objects are not equal.  
  
### Remarks  
 This member operator returns `this == &right`.  
  
##  <a name="error_category__operator_neq"></a>  error_category::operator!=  
 Tests for inequality between `error_category` objects.  
  
```
bool operator!=(const error_category& right) const;
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`right`|The object to be tested for inequality.|  
  
### Return Value  
 **true** if the `error_category` object is not equal to the `error_category` object passed in `right`; otherwise **false**.  
  
### Remarks  
 The member operator returns `(!*this == right)`.  
  
##  <a name="error_category__operator_lt_"></a>  error_category::operator&lt;  
 Tests if the [error_category](../standard-library/error-category-class.md) object is less than the `error_category` object passed in for comparison.  
  
```
bool operator<(const error_category& right) const;
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`right`|The `error_category` object to be compared.|  
  
### Return Value  
 **true** if the `error_category` object is less than the `error_category` object passed in for comparison; Otherwise, **false**.  
  
### Remarks  
 The member operator returns `this < &right`.  
  
##  <a name="error_category__value_type"></a>  error_category::value_type  
 A type that represents the stored error code value.  
  
```
typedef int value_type;
```  
  
### Remarks  
 This type definition is a synonym for `int`.  
  
## See Also  
 [<system_error>](../standard-library/system-error.md)



