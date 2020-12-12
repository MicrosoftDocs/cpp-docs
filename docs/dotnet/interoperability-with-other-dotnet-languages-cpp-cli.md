---
description: "Learn more about: Interoperability with Other .NET Languages (C++/CLI)"
title: "Interoperability with Other .NET Languages (C++/CLI)"
ms.date: "11/04/2016"
helpviewer_keywords: ["C++, indexers", "indexers, consuming C#", "as C# keyword [C++]", "is C# keyword [C++]", "lock statement", "lock C# keyword [C++]"]
ms.assetid: a5902cf8-a14d-4559-aefb-c178615d45bb
---
# Interoperability with Other .NET Languages (C++/CLI)

The topics in this section show how to create assemblies in Visual C++ that consume from or provide functionality to assemblies written in C# or Visual Basic.

## <a name="consume_indexer"></a> Consume a C# Indexer

Visual C++ does not contain indexers; it has indexed properties. To consume a C# indexer, access the indexer as if it were an indexed property.

For more information about indexers, see:

- [Indexers](/dotnet/csharp/programming-guide/indexers/index)

### Example

The following C# program defines an indexer.

```csharp
// consume_cs_indexers.cs
// compile with: /target:library
using System;
public class IndexerClass {
   private int [] myArray = new int[100];
   public int this [int index] {   // Indexer declaration
      get {
         // Check the index limits.
         if (index < 0 || index >= 100)
            return 0;
         else
            return myArray[index];
      }
      set {
         if (!(index < 0 || index >= 100))
            myArray[index] = value;
      }
   }
}
/*
// code to consume the indexer
public class MainClass {
   public static void Main() {
      IndexerClass b = new IndexerClass();

      // Call indexer to initialize elements 3 and 5
      b[3] = 256;
      b[5] = 1024;
      for (int i = 0 ; i <= 10 ; i++)
         Console.WriteLine("Element #{0} = {1}", i, b[i]);
   }
}
*/
```

### Example

This Visual C++ program consumes the indexer.

```cpp
// consume_cs_indexers_2.cpp
// compile with: /clr
#using "consume_cs_indexers.dll"
using namespace System;

int main() {
   IndexerClass ^ ic = gcnew IndexerClass;
   ic->default[0] = 21;
   for (int i = 0 ; i <= 10 ; i++)
      Console::WriteLine("Element #{0} = {1}", i, ic->default[i]);
}
```

```Output
Element #0 = 21
Element #1 = 0
Element #2 = 0
Element #3 = 0
Element #4 = 0
Element #5 = 0
Element #6 = 0
Element #7 = 0
Element #8 = 0
Element #9 = 0
Element #10 = 0
```

## <a name="implement_isas"></a> Implement is and as C# Keywords

This topic shows how to implement the functionality of the `is` and `as` C# keywords in Visual C++.

### Example

```cpp
// CS_is_as.cpp
// compile with: /clr
using namespace System;

interface class I {
public:
   void F();
};

ref struct C : public I {
   virtual void F( void ) { }
};

template < class T, class U >
Boolean isinst(U u) {
   return dynamic_cast< T >(u) != nullptr;
}

int main() {
   C ^ c = gcnew C();
   I ^ i = safe_cast< I ^ >(c);   // is (maps to castclass in IL)
   I ^ ii = dynamic_cast< I ^ >(c);   // as (maps to isinst in IL)

   // simulate 'as':
   Object ^ o = "f";
   if ( isinst< String ^ >(o) )
      Console::WriteLine("o is a string");
}
```

```Output
o is a string
```

## <a name="implement_locak"></a> Implement the lock C# Keyword

This topic shows how to implement the C# `lock` keyword in Visual C++.

You can also use the `lock` class in the C++ Support Library. See [Synchronization (lock Class)](../dotnet/synchronization-lock-class.md) for more information.

### Example

```cpp
// CS_lock_in_CPP.cpp
// compile with: /clr
using namespace System::Threading;
ref class Lock {
   Object^ m_pObject;
public:
   Lock( Object ^ pObject ) : m_pObject( pObject ) {
      Monitor::Enter( m_pObject );
   }
   ~Lock() {
      Monitor::Exit( m_pObject );
   }
};

ref struct LockHelper {
   void DoSomething();
};

void LockHelper::DoSomething() {
   // Note: Reference type with stack allocation semantics to provide
   // deterministic finalization

   Lock lock( this );
   // LockHelper instance is locked
}

int main()
{
   LockHelper lockHelper;
   lockHelper.DoSomething();
   return 0;
}
```

## See also

[.NET Programming with C++/CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)
