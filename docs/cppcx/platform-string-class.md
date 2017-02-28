---
title: "Platform::String Class | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"  
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Platform/Platform::String"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Platform::String"
ms.assetid: 72dd04a4-a694-40d3-b899-eaa0b503eab8
caps.latest.revision: 7
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Platform::String Class
Represents a sequential collection of Unicode characters that is used to represent text. For more information and examples, see [Strings](../cppcx/strings-c-cx.md).  
  
## Syntax  
  
```cpp  
  
public ref class String sealed : Object,  
    IDisposable,  
    IEquatable,  
    IPrintable  
```  
  
## Iterators  
 Two iterator functions, which are not members of the String class, can be used with the `std::for_each` template function to enumerate the characters in a String object.  
  
|Member|Description|  
|------------|-----------------|  
|`const char16* begin(String^ s)`|Returns a pointer to the beginning of the specified String object.|  
|`const char16* end(String^ s)`|Returns a pointer past the end of the specified String object.|  
  
## Members  
 The String class inherits from Object, and the IDisposable, IEquatable, and IPrintable interfaces.  
  
 The String class also has the following types of members.  
  
 **Constructors**  
  
|Member|Description|  
|------------|-----------------|  
|[String::String Constructor](../cppcx/string-string-constructor.md)|Initializes a new instance of the String class.|  
  
 **Methods**  
  
 The String class inherits the Equals(), Finalize(), GetHashCode(), GetType(), MemberwiseClose(), and ToString() methods from the [Platform::Object Class](../cppcx/platform-object-class.md). String also has the following methods.  
  
|Method|Description|  
|------------|-----------------|  
|[String::Begin Method](../cppcx/string-begin-method.md)|Returns a pointer to the beginning of the current string.|  
|[String::CompareOrdinal Method](../cppcx/string-compareordinal-method.md)|Compares two `String` objects by evaluating the numeric values of the corresponding characters in the two string values represented by the objects.|  
|[String::Concat Method](../cppcx/string-concat-method.md)|Concatenates the values of two String objects.|  
|[String::Data Method](../cppcx/string-data-method.md)|Returns a pointer to the beginning of the current string.|  
|[String::Dispose Method](../cppcx/string-dispose-method.md)|Frees or releases resources.|  
|[String::End Method](../cppcx/string-end-method.md)|Returns a pointer past the end of the current string.|  
|[String::Equals Method](../cppcx/string-equals-method.md)|Indicates whether the specified object is equal to the current object.|  
|[String::GetHashCode Method](../cppcx/string-gethashcode-method.md)|Returns the hash code for this instance.|  
|[String::IsEmpty Method](../cppcx/string-isempty-method.md)|Indicates whether the current String object is empty.|  
|[String::IsFastPass Method](../cppcx/string-isfastpass-method.md)|Indicates whether the current String object is is participating in a *fast pass* operation. In a fast pass operation, reference counting is suspended.|  
|[String::Length Method](../cppcx/string-length-method.md)|Retrieves the length of the current String object.|  
|[String::ToString Method](../cppcx/string-tostring-method-c-cx.md)|Returns a String object whose value is the same as the current string.|  
  
 **Properties**  
  
 The String class has the following properties.  
  
|Member|Description|  
|------------|-----------------|  
|[String::operator== Operator](../cppcx/string-operator-equality-operator-c-cx.md)|Indicates whether two specifed String objects have the same value.|  
|[operator+ Operator](../cppcx/string-operator-decrementoperator.md)|Concatenates two String objects into a new String object.|  
|[String::operator> Operator](../cppcx/string-operator-greater-than-operator-c-cx.md)|Indicates whether the value of one String object is greater than the value of a second String object.|  
|[String::operator>= Operator](../cppcx/string-operator-greater-than-or-equals-c-cx.md)|Indicates whether the value of one String object is greater than or equal to the value of a second String object.|  
|[String::operator!= Operator](../cppcx/string-operator-inequality-operator-c-cx.md)|Indicates whether two specifed String objects have different values.|  
|[String::operator< Operator](../cppcx/string-operator-less-than-operator-c-cx.md)|Indicates whether the value of one String object is less than the value of a second String object.|  
  
## Requirements  
 **Minimum supported client:** [!INCLUDE[win8](../cppcx/includes/win8-md.md)]  
  
 **Minimum supported server:** [!INCLUDE[winserver8](../cppcx/includes/winserver8-md.md)]  
  
 **Namespace:** Platform  
  
 **Header** vccorlib.h (included by default)  
  
## See Also  
 [Platform namespace](../cppcx/platform-namespace-c-cx.md)