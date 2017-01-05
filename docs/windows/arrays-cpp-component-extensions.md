---
title: "Arrays (C++ Component Extensions) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "cli::array"
  - "details::array"
  - "lang::array"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "array keyword [C++]"
  - "declaring arrays, about declaring arrays"
  - "arrays [C++], multidimensional"
  - "multidimensional arrays"
  - "arrays [C++]"
ms.assetid: 49445812-d775-4db1-a231-869598dbb955
caps.latest.revision: 34
author: "mikeblome"
ms.author: "mblome"
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
# Arrays (C++ Component Extensions)
The `Platform::Array<T>` type in [!INCLUDE[cppwrt_short](../build/reference/includes/cppwrt_short_md.md)], or the `array` keyword in [!INCLUDE[cppcli](../build/reference/includes/cppcli_md.md)], declares an array of a specified type and initial value.  
  
## All Platforms  
 The array must be declared by using the handle-to-object (^) modifier after the closing angle bracket (>) in the declaration.  
  
 The number of elements of the array is not part of the type. One array variable can refer to arrays of different sizes.  
  
 Unlike standard C++, subscripting is not a synonym for pointer arithmetic and is not commutative.  
  
 For more information about arrays, see:  
  
  
-   [How to: Use Arrays in C++/CLI](../dotnet/how-to-use-arrays-in-cpp-cli.md)  
    
-   [Variable Argument Lists (...) (C++/CLI)](../windows/variable-argument-lists-dot-dot-dot-cpp-cli.md)  
  
  
## [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)]  
 Arrays are members of the `Platform` namespace. Arrays can be only one-dimensional.  
  
 **Syntax**  
  
 The first example of the syntax uses the `ref new` aggregate keyword to allocate an array. The second example declares a local array.  
  
```  
  
      [qualifiers]  
      [  
      Platform::  
      ]  
      Array<  
      [qualifiers]  
      array-type  
      [,rank]  
      >^  
      identifier = ref new[Platform::]Array<initialization-type> [{initialization-list [,...]}]  
  
[qualifiers][Platform::]Array<[qualifiers]array-type[,rank]>^identifier = {initialization-list [,...]}  
```  
  
 *qualifiers* [optional]  
 One or more of these storage class specifiers: [mutable](../cpp/mutable-data-members-cpp.md), [volatile](../cpp/volatile-cpp.md), [const](../cpp/const-cpp.md), [extern](../cpp/using-extern-to-specify-linkage.md), [static](../cpp/static-members-cpp.md).  
  
 `array-type`  
 The type of the array variable. Valid types are [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] classes and fundamental types, ref classes and structs, value classes and structs, and native pointers (`type``*`).  
  
 `rank` [optional]  
 The number of dimensions of the array. Must be 1.  
  
 `identifier`  
 The name of the array variable.  
  
 `initialization-type`  
 The type of the values that initialize the array. Typically, `array-type` and `initialization-type` are the same type. However, the types can be different if there is a conversion from `initialization-type` to `array-type`—for example, if `initialization-type` is derived from `array-type`.  
  
 `initialization-list` [optional]  
 A comma-delimited list of values in curly brackets that initialize the elements of the array. For example, if `rank-size-list` were `(3)`, which declares a one-dimensional array of 3 elements, `initialization list` could be `{1,2,3}`.  
  
 **Remarks**  
  
 You can detect at compile time whether a type is a reference-counted array with `__is_ref_array(``type``)`. For more information, see [Compiler Support for Type Traits](../windows/compiler-support-for-type-traits-cpp-component-extensions.md).  
  
### Requirements  
 Compiler option: **/ZW**  
  
### Examples  
 The following example creates a one-dimensional array that has 100 elements.  
  
```  
  
      // cwr_array.cpp  
// compile with: /ZW  
using namespace Platform;  
ref class MyClass {};  
int main() {  
   // one-dimensional array  
   Array<MyClass^>^ My1DArray = ref new Array<MyClass^>(100);  
   My1DArray[99] = ref new MyClass();  
}  
```  
  
## [!INCLUDE[clr_for_headings](../dotnet/includes/clr_for_headings_md.md)]  
 **Syntax**  
  
 The first example of the syntax uses the `gcnew` keyword to allocate an array. The second example declares a local array.  
  
```  
  
      [qualifiers]  
      [  
      cli::  
      ]  
      array<  
      [qualifiers]  
      array-type [,rank] >^identifier = gcnew[cli::]array<initialization-type[,rank]>(rank-size-list[,...]) [{initialization-list [,...]}]  
  
[qualifiers][cli::]array<[qualifiers]array-type [,rank] >^identifier = {initialization-list [,...]}  
```  
  
 *qualifiers* [optional]  
 One or more of these storage class specifiers: [mutable](../cpp/mutable-data-members-cpp.md), [volatile](../cpp/volatile-cpp.md), [const](../cpp/const-cpp.md), [extern](../cpp/using-extern-to-specify-linkage.md), [static](../cpp/static-members-cpp.md).  
  
 `array-type`  
 The type of the array variable. Valid types are [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] classes and fundamental types, ref classes and structs, value classes and structs, native pointers (`type``*`), and native POD (plain old data) types.  
  
 `rank` [optional]  
 The number of dimensions of the array. The default is 1; the maximum is 32. Each dimension of the array is itself an array.  
  
 `identifier`  
 The name of the array variable.  
  
 `initialization-type`  
 The type of the values that initialize the array. Typically, `array-type` and `initialization-type` are the same type. However, the types can be different if there is a conversion from `initialization-type` to `array-type`—for example, if `initialization-type` is derived from `array-type`.  
  
 `rank-size-list`  
 A comma-delimited list of the size of each dimension in the array. Alternatively, if the `initialization-list` parameter is specified, the compiler can deduce the size of each dimension and `rank-size-list` can be omitted. 
  
 `initialization-list` [optional]  
 A comma-delimited list of values in curly brackets that initialize the elements of the array. Or a comma-delimited list of nested *initialization-list* items that initialize the elements in a multi-dimensional array.  
  
 For example, if `rank-size-list` were `(3)`, which declares a one-dimensional array of 3 elements, `initialization list` could be `{1,2,3}`. If `rank-size-list` were `(3,2,4)`, which declares a three-dimensional array of 3 elements in the first dimension, 2 elements in the second, and 4 elements in the third, `initialization-list` could be `{{1,2,3},{0,0},{-5,10,-21,99}}`.)  
  
 **Remarks**  
  
 `array` is in the [Platform, default, and cli Namespaces](../windows/platform-default-and-cli-namespaces-cpp-component-extensions.md) namespace.  
  
 Like standard C++, the indices of an array are zero-based, and an array is subscripted by using square brackets ([]). Unlike standard C++, the indices of a multi-dimensional array are specified in a list of indices for each dimension instead of a set of square-bracket ([]) operators for each dimension. For example, *identifier*[*index1*, *index2*] instead of *identifier*[*index1*][ *index2*].  
  
 All managed arrays inherit from `System::Array`. Any method or property of `System::Array` can be applied directly to the array variable.  
  
 When you allocate an array whose element type is pointer-to a managed class, the elements are 0-initialized.  
  
 When you allocate an array whose element type is a value type `V`, the default constructor for `V` is applied to each array element. For more information, see [.NET Framework Equivalents to C++ Native Types (C++/CLI)](../dotnet/dotnet-framework-equivalents-to-cpp-native-types-cpp-cli.md).  
  
 At compile time, you can detect whether a type is a common language runtime (CLR) array with`__is_ref_array(``type``)`. For more information, see [Compiler Support for Type Traits](../windows/compiler-support-for-type-traits-cpp-component-extensions.md).  
  
### Requirements  
 Compiler option: **/clr**  
  
### Examples  
 The following example creates a one-dimensional array that has 100 elements, and a three-dimensional array that has 3 elements in the first dimension, 5 elements in the second, and 6 elements in the third.  
  
```  
// clr_array.cpp  
// compile with: /clr  
ref class MyClass {};  
int main() {  
   // one-dimensional array  
   array<MyClass ^> ^ My1DArray = gcnew array<MyClass ^>(100);  
   My1DArray[99] = gcnew MyClass();  
  
   // three-dimensional array  
   array<MyClass ^, 3> ^ My3DArray = gcnew array<MyClass ^, 3>(3, 5, 6);  
   My3DArray[0,0,0] = gcnew MyClass();  
}  
```  
  
## See Also  
 [Component Extensions for Runtime Platforms](../windows/component-extensions-for-runtime-platforms.md)