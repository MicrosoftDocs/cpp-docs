---
description: "Learn more about: delete Operator (C++)"
title: "delete Operator (C++)"
ms.date: "08/12/2019"
f1_keywords: ["delete_cpp"]
helpviewer_keywords: ["delete keyword [C++], syntax", "delete keyword [C++], deallocating objects", "delete keyword [C++]"]
ms.assetid: de39c900-3f57-489c-9598-dcb73c4b3930
---
# delete Operator (C++)

Deallocates a block of memory.

## Syntax

> [`::`] `delete` *cast-expression*\
> [`::`] `delete []` *cast-expression*

## Remarks

The *cast-expression* argument must be a pointer to a block of memory previously allocated for an object created with the [new operator](../cpp/new-operator-cpp.md). The **`delete`** operator has a result of type **`void`** and therefore does not return a value. For example:

```cpp
CDialog* MyDialog = new CDialog;
// use MyDialog
delete MyDialog;
```

Using **`delete`** on a pointer to an object not allocated with **`new`** gives unpredictable results. You can, however, use **`delete`** on a pointer with the value 0. This provision means that, when **`new`** returns 0 on failure, deleting the result of a failed **`new`** operation is harmless. For more information, see [The new and delete Operators](../cpp/new-and-delete-operators.md).

The **`new`** and **`delete`** operators can also be used for built-in types, including arrays. If `pointer` refers to an array, place empty brackets (`[]`) before `pointer`:

```cpp
int* set = new int[100];
//use set[]
delete [] set;
```

Using the **`delete`** operator on an object deallocates its memory. A program that dereferences a pointer after the object is deleted can have unpredictable results or crash.

When **`delete`** is used to deallocate memory for a C++ class object, the object's destructor is called before the object's memory is deallocated (if the object has a destructor).

If the operand to the **`delete`** operator is a modifiable l-value, its value is undefined after the object is deleted.

If the [/sdl (Enable additional security checks)](../build/reference/sdl-enable-additional-security-checks.md) compiler option is specified, the operand to the **`delete`** operator is set to an invalid value after the object is deleted.

## Using delete

There are two syntactic variants for the [delete operator](../cpp/delete-operator-cpp.md): one for single objects and the other for arrays of objects. The following code fragment shows how they differ:

```cpp
// expre_Using_delete.cpp
struct UDType
{
};

int main()
{
   // Allocate a user-defined object, UDObject, and an object
   //  of type double on the free store using the
   //  new operator.
   UDType *UDObject = new UDType;
   double *dObject = new double;
   // Delete the two objects.
   delete UDObject;
   delete dObject;
   // Allocate an array of user-defined objects on the
   // free store using the new operator.
   UDType (*UDArr)[7] = new UDType[5][7];
   // Use the array syntax to delete the array of objects.
   delete [] UDArr;
}
```

The following two cases produce undefined results: using the array form of delete (`delete []`) on an object, and using the nonarray form of delete on an array.

## Example

For examples of using **`delete`**, see [new operator](../cpp/new-operator-cpp.md).

## How delete works

The delete operator invokes the function **operator delete**.

For objects not of class type ([class](../cpp/class-cpp.md), [struct](../cpp/struct-cpp.md), or [union](../cpp/unions.md)), the global delete operator is invoked. For objects of class type, the name of the deallocation function is resolved in global scope if the delete expression begins with the unary scope resolution operator (`::`). Otherwise, the delete operator invokes the destructor for an object prior to deallocating memory (if the pointer is not null). The delete operator can be defined on a per-class basis; if there is no such definition for a given class, the global operator delete is invoked. If the delete expression is used to deallocate a class object whose static type has a virtual destructor, the deallocation function is resolved through the virtual destructor of the dynamic type of the object.

## See also

[Expressions with Unary Operators](../cpp/expressions-with-unary-operators.md)\
[Keywords](../cpp/keywords-cpp.md)\
[new and delete Operators](../cpp/new-and-delete-operators.md)
