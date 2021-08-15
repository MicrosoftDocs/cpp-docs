---
description: "Learn more about: finally"
title: "finally"
ms.date: "11/04/2016"
helpviewer_keywords: ["finally keyword [C++]"]
ms.assetid: b55f3c8e-1af0-43e8-bcfb-99c3685d2578
---
# finally

In addition to **`try`** and **`catch`** clauses, CLR exception handling supports a **`finally`** clause. The semantics are identical to the **`__finally`** block in structured exception handling (SEH). A **`__finally`** block can follow a **`try`** or **`catch`** block.

## Remarks

The purpose of the **`finally`** block is to clean up any resources left after the exception occurred. Note that the **`finally`** block is always executed, even if no exception was thrown. The **`catch`** block is only executed if a managed exception is thrown within the associated **`try`** block.

`finally` is a context-sensitive keyword; see [Context-Sensitive Keywords](../extensions/context-sensitive-keywords-cpp-component-extensions.md) for more information.

## Example

The following example demonstrates a simple **`finally`** block:

```cpp
// keyword__finally.cpp
// compile with: /clr
using namespace System;

ref class MyException: public System::Exception{};

void ThrowMyException() {
   throw gcnew MyException;
}

int main() {
   try {
      ThrowMyException();
   }
   catch ( MyException^ e ) {
      Console::WriteLine(  "in catch" );
      Console::WriteLine( e->GetType() );
   }
   finally {
      Console::WriteLine(  "in finally" );
   }
}
```

```Output
in catch
MyException
in finally
```

## See also

[Exception Handling](../extensions/exception-handling-cpp-component-extensions.md)
