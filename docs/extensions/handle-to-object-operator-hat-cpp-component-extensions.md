---
description: "Learn more about: Handle to Object Operator (^)  (C++/CLI and C++/CX)"
title: "Handle to Object Operator (^)  (C++/CLI and C++/CX)"
ms.date: "10/12/2018"
ms.topic: "reference"
helpviewer_keywords: ["^ handle to object [C++]"]
ms.assetid: 70c411e6-be57-4468-a944-6ea7be89f392
---
# Handle to Object Operator (^)  (C++/CLI and C++/CX)

The *handle declarator* (`^`, pronounced "hat"), modifies the type [specifier](../cpp/declarations-and-definitions-cpp.md) to mean that the declared object should be automatically deleted when the system determines that the object is no longer accessible.

## Accessing the Declared Object

A variable that is declared with the handle declarator behaves like a pointer to the object. However, the variable points to the entire object, cannot point to a member of the object, and it does not support pointer arithmetic. Use the indirection operator (`*`) to access the object, and the arrow member-access operator (`->`) to access a member of the object.

## Windows Runtime

The compiler uses the COM *reference counting* mechanism to determine if the object is no longer being used and can be deleted. This is possible because an object that is derived from a Windows Runtime interface is actually a COM object. The reference count is incremented when the object is created or copied, and decremented when the object is set to null or goes out of scope. If the reference count goes to zero, the object is automatically and immediately deleted.

The advantage of the handle declarator is that in COM you must explicitly manage the reference count for an object, which is a tedious and error prone process. That is, to increment and decrement the reference count you must call the object's AddRef() and Release() methods. However, if you declare an object with the handle declarator, the compiler generates code that automatically adjusts the reference count.

For information on how to instantiate an object, see [ref new](ref-new-gcnew-cpp-component-extensions.md).

## Requirements

Compiler option: `/ZW`

## Common Language Runtime

The system uses the CLR *garbage collector* mechanism to determine if the object is no longer being used and can be deleted. The common language runtime maintains a heap on which it allocates objects, and uses managed references (variables) in your program indicate the location of objects on the heap. When an object is no longer used, the memory that it occupied on the heap is freed. Periodically, the garbage collector compacts the heap to better use the freed memory. Compacting the heap can move objects on the heap, which invalidates the locations referred to by managed references. However, the garbage collector is aware of the location of all managed references, and automatically updates them to indicate the current location of the objects on the heap.

Because native C++ pointers (`*`) and references (`&`) are not managed references, the garbage collector cannot automatically update the addresses they point to. To solve this problem, use the handle declarator to specify a variable that the garbage collector is aware of and can update automatically.

For more information, see [How to: Declare Handles in Native Types](../dotnet/how-to-declare-handles-in-native-types.md).

### Examples

This sample shows how to create an instance of a reference type on the managed heap.  This sample also shows that you can initialize one handle with another, resulting in two references to same object on managed, garbage-collected heap. Notice that assigning [nullptr](nullptr-cpp-component-extensions.md) to one handle does not mark the object for garbage collection.

```cpp
// mcppv2_handle.cpp
// compile with: /clr
ref class MyClass {
public:
   MyClass() : i(){}
   int i;
   void Test() {
      i++;
      System::Console::WriteLine(i);
   }
};

int main() {
   MyClass ^ p_MyClass = gcnew MyClass;
   p_MyClass->Test();

   MyClass ^ p_MyClass2;
   p_MyClass2 = p_MyClass;

   p_MyClass = nullptr;
   p_MyClass2->Test();
}
```

```Output
1
2
```

The following sample shows how to declare a handle to an object on the managed heap, where the type of object is a boxed value type. The sample also shows how to get the value type from the boxed object.

```cpp
// mcppv2_handle_2.cpp
// compile with: /clr
using namespace System;

void Test(Object^ o) {
   Int32^ i = dynamic_cast<Int32^>(o);

   if(i)
      Console::WriteLine(i);
   else
      Console::WriteLine("Not a boxed int");
}

int main() {
   String^ str = "test";
   Test(str);

   int n = 100;
   Test(n);
}
```

```Output
Not a boxed int
100
```

This sample shows that the common C++ idiom of using a **`void*`** pointer to point to an arbitrary object is replaced by `Object^`, which can hold a handle to any reference class. It also shows that all types, such as arrays and delegates, can be converted to an object handle.

```cpp
// mcppv2_handle_3.cpp
// compile with: /clr
using namespace System;
using namespace System::Collections;
public delegate void MyDel();
ref class MyClass {
public:
   void Test() {}
};

void Test(Object ^ x) {
   Console::WriteLine("Type is {0}", x->GetType());
}

int main() {
   // handle to Object can hold any ref type
   Object ^ h_MyClass = gcnew MyClass;

   ArrayList ^ arr = gcnew ArrayList();
   arr->Add(gcnew MyClass);

   h_MyClass = dynamic_cast<MyClass ^>(arr[0]);
   Test(arr);

   Int32 ^ bi = 1;
   Test(bi);

   MyClass ^ h_MyClass2 = gcnew MyClass;

   MyDel^ DelInst = gcnew MyDel(h_MyClass2, &MyClass::Test);
   Test(DelInst);
}
```

```Output
Type is System.Collections.ArrayList

Type is System.Int32

Type is MyDel
```

This sample shows that a handle can be dereferenced and that a member can be accessed via a dereferenced handle.

```cpp
// mcppv2_handle_4.cpp
// compile with: /clr
using namespace System;
value struct DataCollection {
private:
   int Size;
   array<String^>^ x;

public:
   DataCollection(int i) : Size(i) {
      x = gcnew array<String^>(Size);
      for (int i = 0 ; i < Size ; i++)
         x[i] = i.ToString();
   }

   void f(int Item) {
      if (Item >= Size)
      {
         System::Console::WriteLine("Cannot access array element {0}, size is {1}", Item, Size);
         return;
      }
      else
         System::Console::WriteLine("Array value: {0}", x[Item]);
   }
};

void f(DataCollection y, int Item) {
   y.f(Item);
}

int main() {
   DataCollection ^ a = gcnew DataCollection(10);
   f(*a, 7);   // dereference a handle, return handle's object
   (*a).f(11);   // access member via dereferenced handle
}
```

```Output
Array value: 7

Cannot access array element 11, size is 10
```

This sample shows that a native reference (`&`) can't bind to an **`int`** member of a managed type, as the **`int`** might be stored in the garbage collected heap, and native references don't track object movement in the managed heap. The fix is to use a local variable, or to change `&` to `%`, making it a tracking reference.

```cpp
// mcppv2_handle_5.cpp
// compile with: /clr
ref struct A {
   void Test(unsigned int &){}
   void Test2(unsigned int %){}
   unsigned int i;
};

int main() {
   A a;
   a.i = 9;
   a.Test(a.i);   // C2664
   a.Test2(a.i);   // OK

   unsigned int j = 0;
   a.Test(j);   // OK
}
```

### Requirements

Compiler option: `/clr`

## See also

[Component Extensions for .NET and UWP](component-extensions-for-runtime-platforms.md)<br/>
[Tracking Reference Operator](tracking-reference-operator-cpp-component-extensions.md)
