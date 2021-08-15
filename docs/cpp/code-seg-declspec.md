---
description: "Learn more about: code_seg (__declspec)"
title: "code_seg (__declspec)"
ms.date: "11/04/2016"
f1_keywords: ["code_seg_cpp"]
helpviewer_keywords: ["code_seg __declspec keyword"]
ms.assetid: ad3c1105-15d3-4e08-b7b9-e4bd9d7b6aa0
---
# code_seg (__declspec)

**Microsoft Specific**

The **code_seg** declaration attribute names an executable text segment in the .obj file in which the object code for the function or class member functions will be stored.

## Syntax

```
__declspec(code_seg("segname")) declarator
```

## Remarks

The `__declspec(code_seg(...))` attribute enables the placement of code into separate named segments that can be paged or locked in memory individually. You can use this attribute to control the placement of instantiated templates and compiler-generated code.

A *segment* is a named block of data in an .obj file that is loaded into memory as a unit. A *text segment* is a segment that contains executable code. The term *section* is often used interchangeably with segment.

Object code that's generated when `declarator` is defined is put in the text segment specified by `segname`, which is a narrow-string literal. The name `segname` does not have to be specified in a [section](../preprocessor/section.md) pragma before it can be used in a declaration. By default, when no `code_seg` is specified, object code is put in a segment named .text. A **code_seg** attribute overrides any existing [#pragma code_seg](../preprocessor/code-seg.md) directive. A **code_seg** attribute applied to a member function overrides any **code_seg** attribute applied to the enclosing class.

If an entity has a **code_seg** attribute, all declarations and definitions of the same entity must have identical **code_seg** attributes. If a base-class has a **code_seg** attribute, derived classes must have the same attribute.

When a **code_seg** attribute is applied to a namespace-scope function or a member function, the object code for that function is put in the specified text segment. When this attribute is applied to a class, all member functions of the class and nested classes—this includes compiler-generated special member functions—are put in the specified segment. Locally defined classes—for example, classes defined in a member function body—do not inherit the **code_seg** attribute of the enclosing scope.

When a **code_seg** attribute is applied to a template class or template function, all implicit specializations of the template are put in the specified segment. Explicit or partial specializations do not inherit the **code_seg** attribute from the primary template. You may specify the same or a different **code_seg** attribute on the specialization. A **code_seg** attribute can’t be applied to an explicit template instantiation.

By default, compiler-generated code such as a special member function is put in the .text segment. The `#pragma code_seg` directive does not override this default. Use the **code_seg** attribute on the class, class template, or function template to control where compiler-generated code is put.

Lambdas inherit **code_seg** attributes from their enclosing scope. To specify a segment for a lambda, apply a **code_seg** attribute after the parameter-declaration clause and before any mutable or exception specification, any trailing return-type specification, and the lambda body. For more information, see [Lambda Expression Syntax](../cpp/lambda-expression-syntax.md). This example defines a lambda in a segment named PagedMem:

```cpp
auto Sqr = [](int t) __declspec(code_seg("PagedMem")) -> int { return t*t; };
```

Be careful when you put specific member functions—especially virtual member functions—in different segments. If you define a virtual function in a derived class that resides in a paged segment when the base class method resides in a non-paged segment, other base class methods or user code may assume that invoking the virtual method will not trigger a page fault.

## Example

This example shows how a **code_seg** attribute controls segment placement when implicit and explicit template specialization is used:

```cpp
// code_seg.cpp
// Compile: cl /EHsc /W4 code_seg.cpp

// Base template places object code in Segment_1 segment
template<class T>
class __declspec(code_seg("Segment_1")) Example
{
public:
   virtual void VirtualMemberFunction(T /*arg*/) {}
};

// bool specialization places code in default .text segment
template<>
class Example<bool>
{
public:
   virtual void VirtualMemberFunction(bool /*arg*/) {}
};

// int specialization places code in Segment_2 segment
template<>
class __declspec(code_seg("Segment_2")) Example<int>
{
public:
   virtual void VirtualMemberFunction(int /*arg*/) {}
};

// Compiler warns and ignores __declspec(code_seg("Segment_3"))
// in this explicit specialization
__declspec(code_seg("Segment_3")) Example<short>; // C4071

int main()
{
   // implicit double specialization uses base template's
   // __declspec(code_seg("Segment_1")) to place object code
   Example<double> doubleExample{};
   doubleExample.VirtualMemberFunction(3.14L);

   // bool specialization places object code in default .text segment
   Example<bool> boolExample{};
   boolExample.VirtualMemberFunction(true);

   // int specialization uses __declspec(code_seg("Segment_2"))
   // to place object code
   Example<int> intExample{};
   intExample.VirtualMemberFunction(42);
}
```

**END Microsoft Specific**

## See also

[__declspec](../cpp/declspec.md)<br/>
[Keywords](../cpp/keywords-cpp.md)
