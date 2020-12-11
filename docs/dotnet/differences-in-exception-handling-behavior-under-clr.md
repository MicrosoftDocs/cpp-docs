---
description: "Learn more about: Differences in Exception Handling Behavior Under /CLR"
title: "Differences in Exception Handling Behavior Under -CLR"
ms.date: "11/04/2016"
helpviewer_keywords: ["EXCEPTION_CONTINUE_EXECUTION macro", "set_se_translator function"]
ms.assetid: 2e7e8daf-d019-44b0-a51c-62d7aaa89104
---
# Differences in Exception Handling Behavior Under /CLR

[Basic Concepts in Using Managed Exceptions](../dotnet/basic-concepts-in-using-managed-exceptions.md) discusses exception handling in managed applications. In this topic, differences from the standard behavior of exception handling and some restrictions are discussed in detail. For more information, see [The _set_se_translator Function](../c-runtime-library/reference/set-se-translator.md).

## <a name="vcconjumpingoutofafinallyblock"></a> Jumping Out of a Finally Block

In native C/C++ code, jumping out of a __**finally** block using structured exception handling (SEH) is allowed although it produces a warning.  Under [/clr](../build/reference/clr-common-language-runtime-compilation.md), jumping out of a **finally** block causes an error:

```cpp
// clr_exception_handling_4.cpp
// compile with: /clr
int main() {
   try {}
   finally {
      return 0;   // also fails with goto, break, continue
    }
}   // C3276
```

## <a name="vcconraisingexceptionswithinanexceptionfilter"></a> Raising Exceptions Within an Exception Filter

When an exception is raised during the processing of an [exception filter](../cpp/writing-an-exception-filter.md) within managed code, the exception is caught and treated as if the filter returns 0.

This is in contrast to the behavior in native code where a nested exception is raised, the **ExceptionRecord** field in the **EXCEPTION_RECORD** structure (as returned by [GetExceptionInformation](/windows/win32/Debug/getexceptioninformation)) is set, and the **ExceptionFlags** field sets the 0x10 bit. The following example illustrates this difference in behavior:

```cpp
// clr_exception_handling_5.cpp
#include <windows.h>
#include <stdio.h>
#include <assert.h>

#ifndef false
#define false 0
#endif

int *p;

int filter(PEXCEPTION_POINTERS ExceptionPointers) {
   PEXCEPTION_RECORD ExceptionRecord =
                     ExceptionPointers->ExceptionRecord;

   if ((ExceptionRecord->ExceptionFlags & 0x10) == 0) {
      // not a nested exception, throw one
      *p = 0; // throw another AV
   }
   else {
      printf("Caught a nested exception\n");
      return 1;
    }

   assert(false);

   return 0;
}

void f(void) {
   __try {
      *p = 0;   // throw an AV
   }
   __except(filter(GetExceptionInformation())) {
      printf_s("We should execute this handler if "
                 "compiled to native\n");
    }
}

int main() {
   __try {
      f();
   }
   __except(1) {
      printf_s("The handler in main caught the "
               "exception\n");
    }
}
```

### Output

```Output
Caught a nested exception
We should execute this handler if compiled to native
```

## <a name="vccondisassociatedrethrows"></a> Disassociated Rethrows

**/clr** does not support rethrowing an exception outside of a catch handler (known as a disassociated rethrow). Exceptions of this type are treated as a standard C++ rethrow. If a disassociated rethrow is encountered when there is an active managed exception, the exception is wrapped as a C++ exception and then rethrown. Exceptions of this type can only be caught as an exception of type <xref:System.Runtime.InteropServices.SEHException>.

The following example demonstrates a managed exception rethrown as a C++ exception:

```cpp
// clr_exception_handling_6.cpp
// compile with: /clr
using namespace System;
#include <assert.h>
#include <stdio.h>

void rethrow( void ) {
   // This rethrow is a dissasociated rethrow.
   // The exception would be masked as SEHException.
   throw;
}

int main() {
   try {
      try {
         throw gcnew ApplicationException;
      }
      catch ( ApplicationException^ ) {
         rethrow();
         // If the call to rethrow() is replaced with
         // a throw statement within the catch handler,
         // the rethrow would be a managed rethrow and
         // the exception type would remain
         // System::ApplicationException
      }
   }

    catch ( ApplicationException^ ) {
      assert( false );

      // This will not be executed since the exception
      // will be masked as SEHException.
    }
   catch ( Runtime::InteropServices::SEHException^ ) {
      printf_s("caught an SEH Exception\n" );
    }
}
```

### Output

```Output
caught an SEH Exception
```

## <a name="vcconexceptionfiltersandexception_continue_execution"></a> Exception Filters and EXCEPTION_CONTINUE_EXECUTION

If a filter returns `EXCEPTION_CONTINUE_EXECUTION` in a managed application, it is treated as if the filter returned `EXCEPTION_CONTINUE_SEARCH`. For more information on these constants, see [try-except Statement](../cpp/try-except-statement.md).

The following example demonstrates this difference:

```cpp
// clr_exception_handling_7.cpp
#include <windows.h>
#include <stdio.h>
#include <assert.h>

int main() {
   int Counter = 0;
   __try {
      __try  {
         Counter -= 1;
         RaiseException (0xe0000000|'seh',
                         0, 0, 0);
         Counter -= 2;
      }
      __except (Counter) {
         // Counter is negative,
         // indicating "CONTINUE EXECUTE"
         Counter -= 1;
      }
    }
    __except(1) {
      Counter -= 100;
   }

   printf_s("Counter=%d\n", Counter);
}
```

### Output

```Output
Counter=-3
```

## <a name="vcconthe_set_se_translatorfunction"></a> The _set_se_translator Function

The translator function, set by a call to `_set_se_translator`, affects only catches in unmanaged code. The following example demonstrates this limitation:

```cpp
// clr_exception_handling_8.cpp
// compile with: /clr /EHa
#include <iostream>
#include <windows.h>
#include <eh.h>
#pragma warning (disable: 4101)
using namespace std;
using namespace System;

#define MYEXCEPTION_CODE 0xe0000101

class CMyException {
public:
   unsigned int m_ErrorCode;
   EXCEPTION_POINTERS * m_pExp;

   CMyException() : m_ErrorCode( 0 ), m_pExp( NULL ) {}

   CMyException( unsigned int i, EXCEPTION_POINTERS * pExp )
         : m_ErrorCode( i ), m_pExp( pExp ) {}

   CMyException( CMyException& c ) : m_ErrorCode( c.m_ErrorCode ),
                                      m_pExp( c.m_pExp ) {}

   friend ostream& operator <<
                 ( ostream& out, const CMyException& inst ) {
      return out <<  "CMyException[\n" <<
             "Error Code: " << inst.m_ErrorCode <<  "]";
    }
};

#pragma unmanaged
void my_trans_func( unsigned int u, PEXCEPTION_POINTERS pExp ) {
   cout <<  "In my_trans_func.\n";
   throw CMyException( u, pExp );
}

#pragma managed
void managed_func() {
   try  {
      RaiseException( MYEXCEPTION_CODE, 0, 0, 0 );
   }
   catch ( CMyException x ) {}
   catch ( ... ) {
      printf_s("This is invoked since "
               "_set_se_translator is not "
               "supported when /clr is used\n" );
    }
}

#pragma unmanaged
void unmanaged_func() {
   try  {
      RaiseException( MYEXCEPTION_CODE,
                      0, 0, 0 );
   }
   catch ( CMyException x ) {
      printf("Caught an SEH exception with "
             "exception code: %x\n", x.m_ErrorCode );
    }
    catch ( ... ) {}
}

// #pragma managed
int main( int argc, char ** argv ) {
   _set_se_translator( my_trans_func );

   // It does not matter whether the translator function
   // is registered in managed or unmanaged code
   managed_func();
   unmanaged_func();
}
```

### Output

```Output
This is invoked since _set_se_translator is not supported when /clr is used
In my_trans_func.
Caught an SEH exception with exception code: e0000101
```

## See also

[Exception Handling](../extensions/exception-handling-cpp-component-extensions.md)<br/>
[safe_cast](../extensions/safe-cast-cpp-component-extensions.md)<br/>
[Exception Handling in MSVC](../cpp/exception-handling-in-visual-cpp.md)
