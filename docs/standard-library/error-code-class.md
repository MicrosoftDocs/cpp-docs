---
title: "error_code Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "error_code"
  - "std.error_code"
  - "std::error_code"
  - "system_error/std::error_code"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "error_code class"
ms.assetid: c09b4a96-cb14-4281-a319-63543f9b2b4a
caps.latest.revision: 17
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
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
# error_code Class
Represents low-level system errors that are implementation-specific.  
  
## Syntax  
  
```
class error_code;
```  
  
## Remarks  
 An object of type `error_code` class stores an error code value and a pointer to an object that represents a [category](../standard-library/error-category-class.md) of error codes that describe reported low-level system errors.  
  
### Constructors  
  
|||  
|-|-|  
|[error_code](#error_code__error_code)|Constructs an object of type `error_code`.|  
  
### Typedefs  
  
|||  
|-|-|  
|[value_type](#error_code__value_type)|A type that represents the stored error code value.|  
  
### Member Functions  
  
|||  
|-|-|  
|[assign](#error_code__assign)|Assigns an error code value and category to an error code.|  
|[category](#error_code__category)|Returns the error category.|  
|[clear](#error_code__clear)|Clears the error code value and category.|  
|[default_error_condition](#error_code__default_error_condition)|Returns the default error condition.|  
|[message](#error_code__message)|Returns the name of the error code.|  
  
### Operators  
  
|||  
|-|-|  
|[operator==](#error_code__operator_eq_eq)|Tests for equality between `error_code` objects.|  
|[operator!=](#error_code__operator_neq)|Tests for inequality between `error_code` objects.|  
|[operator<](#error_code__operator_lt_)|Tests if the `error_code` object is less than the `error_code` object passed in for comparison.|  
|[operator=](#error_code__operator_eq)|Assigns a new enumeration value to the `error_code` object.|  
|[operator bool](#error_code__operator_bool)|Casts a variable of type `error_code`.|  
  
## Requirements  
 **Header:** <system_error>  
  
 **Namespace:** std  
  
##  <a name="error_code__assign"></a>  error_code::assign  
 Assigns an error code value and category to an error code.  
  
```
void assign(value_type val, const error_category& _Cat);
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`val`|The error code value to store in the `error_code`.|  
|`_Cat`|The error category to store in the `error_code`.|  
  
### Remarks  
 The member function stores `val` as the error code value and a pointer to `_Cat`.  
  
##  <a name="error_code__category"></a>  error_code::category  
 Returns the error category.  
  
```
const error_category& category() const;
```  
  
### Remarks  
  
##  <a name="error_code__clear"></a>  error_code::clear  
 Clears the error code value and category.  
  
```
clear();
```  
  
### Remarks  
 The member function stores a zero error code value and a pointer to the [generic_category](../standard-library/system-error-functions.md#generic_category) object.  
  
##  <a name="error_code__default_error_condition"></a>  error_code::default_error_condition  
 Returns the default error condition.  
  
```
error_condition default_error_condition() const;
```  
  
### Return Value  
 The [error_condition](../standard-library/error-condition-class.md) specified by [default_error_condition](../standard-library/error-category-class.md#error_category__default_error_condition).  
  
### Remarks  
 This member function returns `category().default_error_condition(value())`.  
  
##  <a name="error_code__error_code"></a>  error_code::error_code  
 Constructs an object of type `error_code`.  
  
```
error_code();

error_code(value_type val, const error_category& _Cat);

template <class _Enum>
error_code(_Enum _Errcode,
    typename enable_if<is_error_code_enum<_Enum>::value,
    error_code>::type* = 0);
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`val`|The error code value to store in the `error_code`.|  
|`_Cat`|The error category to store in the `error_code`.|  
|`_Errcode`|The enumeration value to store in the `error_code`.|  
  
### Remarks  
 The first constructor stores a zero error code value and a pointer to the [generic_category](../standard-library/system-error-functions.md#generic_category).  
  
 The second constructor stores `val` as the error code value and a pointer to [error_category](http://msdn.microsoft.com/en-us/6fe57a15-63a1-4e79-8af4-6738e43e19c8).  
  
 The third constructor stores `(value_type)_Errcode` as the error code value and a pointer to the [generic_category](../standard-library/system-error-functions.md#generic_category).  
  
##  <a name="error_code__message"></a>  error_code::message  
 Returns the name of the error code.  
  
```
string message() const;
```  
  
### Return Value  
 A `string` representing the name of the error code.  
  
### Remarks  
 This member function returns `category().message(value())`.  
  
##  <a name="error_code__operator_eq_eq"></a>  error_code::operator==  
 Tests for equality between `error_code` objects.  
  
```
bool operator==(const error_code& right) const;
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`right`|The object to be tested for equality.|  
  
### Return Value  
 **true** if the objects are equal; **false** if objects are not equal.  
  
### Remarks  
 The member operator returns `category() == right.category() && value == right.value()`.  
  
##  <a name="error_code__operator_neq"></a>  error_code::operator!=  
 Tests for inequality between `error_code` objects.  
  
```
bool operator!=(const error_code& right) const;
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`right`|The object to be tested for inequality.|  
  
### Return Value  
 **true** if the `error_code` object is not equal to the `error_code` object passed in `right`; otherwise **false**.  
  
### Remarks  
 The member operator returns `!(*this == right)`.  
  
##  <a name="error_code__operator_lt_"></a>  error_code::operator&lt;  
 Tests if the [error_code](http://msdn.microsoft.com/en-us/09c6ef90-b6f8-430a-b584-e168716c7e31) object is less than the `error_code` object passed in for comparison.  
  
```
bool operator<(const error_code& right) const;
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`right`|The error_code object to be compared.|  
  
### Return Value  
 **true** if the `error_code` object is less than the `error_code` object passed in for comparison; Otherwise, **false**.  
  
### Remarks  
 The member operator returns `category() < right.category() || category() == right.category() && value < right.value()`.  
  
##  <a name="error_code__operator_eq"></a>  error_code::operator=  
 Assigns a new enumeration value to the [error_code](http://msdn.microsoft.com/en-us/09c6ef90-b6f8-430a-b584-e168716c7e31) object.  
  
```
template <class _Enum>
typename enable_if<is_error_code_enum<_Enum>::value,
    error_code>::type&
 operator=(_Enum _Errcode);
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`_Errcode`|The enumeration value to assign to the `error_code` object.|  
  
### Return Value  
 A reference to the `error_code` object that is being assigned the new enumeration value by the member function.  
  
### Remarks  
 The member operator stores `(value_type)_Errcode` as the error code value and a pointer to the [generic_category](../standard-library/system-error-functions.md#generic_category). It returns `*this`.  
  
##  <a name="error_code__operator_bool"></a>  error_code::operator bool  
 Casts a variable of type `error_code`.  
  
```
explicit operator bool() const;
```  
  
### Return Value  
 The Boolean value of the `error_code` object.  
  
### Remarks  
 The operator returns a value convertible to `true` only if [value](#error_code__value) is not equal to zero. The return type is convertible only to `bool`, not to `void *` or other known scalar types.  
  
##  <a name="error_code__value"></a>  error_code::value  
 Returns the stored error code value.  
  
```
value_type value() const;
```  
  
### Return Value  
 The stored error code value of type [value_type](#error_code__value_type).  
  
### Remarks  
  
##  <a name="error_code__value_type"></a>  error_code::value_type  
 A type that represents the stored error code value.  
  
```
typedef int value_type;
```  
  
### Remarks  
 This type definition is a synonym for `int`.  
  
## See Also  
 [error_category Class](../standard-library/error-category-class.md)   
 [<system_error>](../standard-library/system-error.md)



