---
description: "Learn more about: Annotating function behavior"
title: Annotating function behavior
ms.date: 11/04/2016
ms.topic: "conceptual"
f1_keywords:
  - "_On_failure_"
  - "_Return_type_success_"
  - "_Always_"
  - "_Maybe_raises_SEH_exception_"
  - "_Raises_SEH_exception_"
  - "_Called_from_function_class_"
  - "_Function_class_"
  - "_Must_inspect_result_"
  - "_Success_"
  - "_Check_return_"
  - "_Use_decl_annotations_"
ms.assetid: c0aa268d-6fa3-4ced-a8c6-f7652b152e61
---
# Annotating function behavior

In addition to annotating [function parameters and return values](../code-quality/annotating-function-parameters-and-return-values.md), you can annotate properties of the whole function.

## Function annotations

The following annotations apply to the function as a whole and describe how it behaves or what it expects to be true.

|Annotation|Description|
|----------------|-----------------|
|`_Called_from_function_class_(name)`|Not intended to stand alone; instead, it is a predicate to be used with the `_When_` annotation. For more information, see [Specifying When and Where an Annotation Applies](../code-quality/specifying-when-and-where-an-annotation-applies.md).<br /><br /> The `name` parameter is an arbitrary string that also appears in a `_Function_class_` annotation in the declaration of some functions.  `_Called_from_function_class_` returns nonzero if the function that is currently being analyzed is annotated by using `_Function_class_` that has the same value of `name`; otherwise, it returns zero.|
|`_Check_return_`|Annotates a return value and   states that the caller should inspect it. The checker reports an error if the function is called in a void context.|
|`_Function_class_(name)`|The `name` parameter is an arbitrary string that is designated by the user.  It exists in a namespace that is distinct from other namespaces. A function, function pointer, or—most usefully—a function pointer type may be designated as belonging to one or more function classes.|
|`_Raises_SEH_exception_`|Annotates a function that always raises a structured exception handler (SEH) exception, subject to `_When_` and `_On_failure_` conditions. For more information, see [Specifying When and Where an Annotation Applies](../code-quality/specifying-when-and-where-an-annotation-applies.md).|
|`_Maybe_raises_SEH_exception_`|Annotates a function that may optionally raise an SEH exception, subject to `_When_` and `_On_failure_` conditions.|
|`_Must_inspect_result_`|Annotates any output value, including the return value, parameters, and globals.  The analyzer reports an error if the value in the annotated object is not subsequently inspected. "Inspection" includes whether it is used in a conditional expression, is assigned to an output parameter or global, or is passed as a parameter.  For return values, `_Must_inspect_result_` implies `_Check_return_`.|
|`_Use_decl_annotations_`|May be used on a function definition (also known as a function body) in place of the list of annotations in the header.  When `_Use_decl_annotations_` is used, the annotations that appear on an in-scope header for the same function are used as if they are also present in the definition that has the `_Use_decl_annotations_` annotation.|

## Success/failure annotations

A function can fail, and when it does, its results may be incomplete or differ from the results when the function succeeds.  The annotations in the following list provide ways to express the failure behavior.  To use these annotations, you must enable them to determine success; therefore, a `_Success_` annotation is required.  Notice that `NTSTATUS` and `HRESULT` already have a `_Success_` annotation built into them; however, if you specify your own `_Success_` annotation on `NTSTATUS` or `HRESULT`, it overrides the built-in annotation.

|Annotation|Description|
|----------------|-----------------|
|`_Always_(anno_list)`|Equivalent to `anno_list _On_failure_(anno_list)`; that is, the annotations in `anno_list` apply whether or not the function succeeds.|
|`_On_failure_(anno_list)`|To be used only when `_Success_` is also used to annotate the function—either explicitly, or implicitly through `_Return_type_success_` on a typedef. When the `_On_failure_` annotation is present on a function parameter or return value, each annotation in `anno_list` (anno) behaves as if it were coded as `_When_(!expr, anno)`, where `expr` is the parameter to the required `_Success_` annotation. This means that the implied application of `_Success_` to all post-conditions does not apply for `_On_failure_`.|
|`_Return_type_success_(expr)`|May be applied to a typedef. Indicates that all functions that return that type and do not explicitly have `_Success_` are annotated as if they had `_Success_(expr)`. `_Return_type_success_` cannot be used on a function or a function pointer typedef.|
|`_Success_(expr)`|`expr` is an expression that yields an rvalue. When the `_Success_` annotation is present on a function declaration or definition, each annotation (`anno`) on the function and in post-condition behaves as if it were coded as `_When_(expr, anno)`. The `_Success_` annotation may be used only on a function, not on its parameters or return type. There can be at most one `_Success_` annotation on a function, and it cannot be in any `_When_`, `_At_`, or `_Group_`. For more information, see [Specifying When and Where an Annotation Applies](../code-quality/specifying-when-and-where-an-annotation-applies.md).|

## See also

- [Using SAL Annotations to Reduce C/C++ Code Defects](../code-quality/using-sal-annotations-to-reduce-c-cpp-code-defects.md)
- [Understanding SAL](../code-quality/understanding-sal.md)
- [Annotating Function Parameters and Return Values](../code-quality/annotating-function-parameters-and-return-values.md)
- [Annotating Structs and Classes](../code-quality/annotating-structs-and-classes.md)
- [Annotating Locking Behavior](../code-quality/annotating-locking-behavior.md)
- [Specifying When and Where an Annotation Applies](../code-quality/specifying-when-and-where-an-annotation-applies.md)
- [Intrinsic Functions](../code-quality/intrinsic-functions.md)
- [Best Practices and Examples](../code-quality/best-practices-and-examples-sal.md)
