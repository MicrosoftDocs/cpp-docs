---
description: "Learn more about: Intrinsic Functions"
title: Intrinsic Functions
ms.date: 11/04/2016
ms.topic: "conceptual"
f1_keywords:
  - "_String_length_"
  - "_Param_"
  - "_Curr_"
  - "_Old_"
  - "_Nullterm_length_"
  - "_Inexpressible_"
ms.assetid: adf29f8c-89fd-4a5e-9804-35ac83e1c457
---
# Intrinsic Functions

An expression in SAL can be a C/C++ expression provided that it is an expression that does not have side effects—for example, ++, --, and function calls all have side effects in this context.  However, SAL does provide some function-like objects and some reserved symbols that can be used in SAL expressions. These are referred to as *intrinsic functions*.

## General Purpose

The following instrinsic function annotations provide general utility for SAL.

|Annotation|Description|
|----------------|-----------------|
|`_Curr_`|A synonym for the object that is currently being annotated.  When the `_At_` annotation is in use, `_Curr_` is the same as the first parameter to `_At_`.  Otherwise, it is the parameter or the entire function/return value with which the annotation is lexically associated.|
|`_Inexpressible_(expr)`|Expresses a situation where the size of a buffer is too complex to represent by using an annotation expression—for example, when it is computed by scanning an input data set and then counting selected members.|
|`_Nullterm_length_(param)`|`param` is the number of elements in the buffer up to but not including a null terminator. It may be applied to any buffer of non-aggregate, non-void type.|
|`_Old_(expr)`|When it is evaluated in precondition, `_Old_` returns the input value `expr`.  When it is evaluated in post-condition, it returns the value `expr` as it would have been evaluated in precondition.|
|`_Param_(n)`|The `n`th parameter to a function, counting from 1 to `n`, and `n` is a literal integral constant. If the parameter is named, this annotation is identical to accessing the parameter by name. **Note:**  `n` may refer to the positional parameters that are defined by an ellipsis, or may be used in function prototypes where names are not used.|
|`return`|The C/C++ reserved keyword **`return`** can be used in a SAL expression to indicate the return value of a function.  The value is only available in post state; it is a syntax error to use it in pre state.|

## String Specific

The following intrinsic function annotations enable manipulation of strings. All four of these functions serve the same purpose: to return the number of elements of the type that is found before a null terminator. The differences are the kinds of data in the elements that are referred to. Note that if you want to specify the length of a null-terminated buffer that is not composed of characters, use the `_Nullterm_length_(param)` annotation from the previous section.

|Annotation|Description|
|----------------|-----------------|
|`_String_length_(param)`|`param` is the number of elements in the string up to but not including a null terminator. This annotation is reserved for string-of-character types.|
|`strlen(param)`|`param` is the number of elements in the string up to but not including a null terminator. This annotation is reserved for use on character arrays and resembles the C Runtime function [strlen()](../c-runtime-library/reference/strlen-wcslen-mbslen-mbslen-l-mbstrlen-mbstrlen-l.md).|
|`wcslen(param)`|`param` is the number of elements in the string up to (but not including) a null terminator. This annotation is reserved for use on wide character arrays and resembles the C Runtime function [wcslen()](../c-runtime-library/reference/strlen-wcslen-mbslen-mbslen-l-mbstrlen-mbstrlen-l.md).|

## See also

- [Using SAL Annotations to Reduce C/C++ Code Defects](../code-quality/using-sal-annotations-to-reduce-c-cpp-code-defects.md)
- [Understanding SAL](../code-quality/understanding-sal.md)
- [Annotating Function Parameters and Return Values](../code-quality/annotating-function-parameters-and-return-values.md)
- [Annotating Function Behavior](../code-quality/annotating-function-behavior.md)
- [Annotating Structs and Classes](../code-quality/annotating-structs-and-classes.md)
- [Annotating Locking Behavior](../code-quality/annotating-locking-behavior.md)
- [Specifying When and Where an Annotation Applies](../code-quality/specifying-when-and-where-an-annotation-applies.md)
- [Best Practices and Examples](../code-quality/best-practices-and-examples-sal.md)
