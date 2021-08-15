---
description: "Learn more about: Specifying When and Where an Annotation Applies"
title: Specifying When and Where an Annotation Applies
ms.date: 11/04/2016
ms.topic: "conceptual"
f1_keywords:
  - "_Group_"
  - "_At_"
  - "_When_"
  - "_At_buffer_"
ms.assetid: 8e4f4f9c-5dfa-4835-87df-ecd1698fc650
---
# Specifying When and Where an Annotation Applies

When an annotation is conditional, it may require other annotations to specify that to the analyzer.  For example, if a function has a variable that can be either synchronous or asynchronous, the function behaves as follows: In the synchronous case it always eventually succeeds, but in the asynchronous case it reports an error if it can't succeed immediately. When the function is called synchronously, checking the result value provides no value to the code analyzer because it would not have returned.  However, when the function is called asynchronously and the function result is not checked, a serious error could occur. This example illustrates a situation in which you could use the `_When_` annotation—described later in this article—to enable checking.

## Structural Annotations

To control when and where annotations apply, use the following structural annotations.

|Annotation|Description|
|----------------|-----------------|
|`_At_(expr, anno-list)`|`expr` is an expression that yields an lvalue. The annotations in `anno-list` are applied to the object that is named by `expr`. For each annotation in `anno-list`, `expr` is interpreted in pre-condition if the annotation is interpreted in pre-condition, and in post-condition if the annotation is interpreted in post-condition.|
|`_At_buffer_(expr, iter, elem-count, anno-list)`|`expr` is an expression that yields an lvalue. The annotations in `anno-list` are applied to the object that is named by `expr`. For each annotation in `anno-list`, `expr` is interpreted in pre-condition if the annotation is interpreted in precondition, and in post-condition if the annotation is interpreted in post-condition.<br /><br /> `iter` is the name of a variable that is scoped to the annotation (inclusive of `anno-list`). `iter` has an implicit type **`long`**. Identically named variables in any enclosing scope are hidden from evaluation.<br /><br /> `elem-count` is an expression that evaluates to an integer.|
|`_Group_(anno-list)`|The annotations in `anno-list` are all considered to have any qualifier that applies to the group annotation that is applied to each annotation.|
|`_When_(expr, anno-list)`|`expr` is an expression that can be converted to **`bool`**. When it is non-zero (**`true`**), the annotations that are specified in `anno-list` are considered applicable.<br /><br /> By default, for each annotation in `anno-list`, `expr` is interpreted as using the input values if the annotation is a precondition, and as using the output values if the annotation is a post-condition. To override the default, you can use the `_Old_` intrinsic when you evaluate a post-condition to indicate that input values should be used. **Note:**  Different annotations might be enabled as a consequence of using `_When_` if a mutable value—for example, `*pLength`—is involved because the evaluated result of `expr` in precondition may differ from its evaluated result in post-condition.|

## See also

- [Using SAL Annotations to Reduce C/C++ Code Defects](../code-quality/using-sal-annotations-to-reduce-c-cpp-code-defects.md)
- [Understanding SAL](../code-quality/understanding-sal.md)
- [Annotating Function Parameters and Return Values](../code-quality/annotating-function-parameters-and-return-values.md)
- [Annotating Function Behavior](../code-quality/annotating-function-behavior.md)
- [Annotating Structs and Classes](../code-quality/annotating-structs-and-classes.md)
- [Annotating Locking Behavior](../code-quality/annotating-locking-behavior.md)
- [Intrinsic Functions](../code-quality/intrinsic-functions.md)
- [Best Practices and Examples](../code-quality/best-practices-and-examples-sal.md)
