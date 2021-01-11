---
description: "Learn more about: _set_se_translator"
title: "_set_se_translator"
ms.date: "02/21/2018"
api_name: ["_set_se_translator"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_set_se_translator", "set_se_translator"]
helpviewer_keywords: ["set_se_translator function", "exception handling, changing", "_set_se_translator function"]
ms.assetid: 280842bc-d72a-468b-a565-2d3db893ae0f
---
# _set_se_translator

Set a per-thread callback function to translate Win32 exceptions (C structured exceptions) into C++ typed exceptions.

## Syntax

```cpp
_se_translator_function _set_se_translator(
    _se_translator_function seTransFunction
);
```

### Parameters

*seTransFunction*<br/>
Pointer to a C structured exception translator function that you write.

## Return Value

Returns a pointer to the previous translator function registered by **_set_se_translator**, so that the previous function can be restored later. If no previous function has been set, the return value can be used to restore the default behavior; this value can be **`nullptr`**.

## Remarks

The **_set_se_translator** function provides a way to handle Win32 exceptions (C structured exceptions) as C++ typed exceptions. To allow each C exception to be handled by a C++ **`catch`** handler, first define a C exception wrapper class that can be used, or derived from, to attribute a specific class type to a C exception. To use this class, install a custom C exception translator function that is called by the internal exception-handling mechanism each time a C exception is raised. Within your translator function, you can throw any typed exception that can be caught by a matching C++ **`catch`** handler.

You must use [/EHa](../../build/reference/eh-exception-handling-model.md) when using **_set_se_translator**.

To specify a custom translation function, call **_set_se_translator** using the name of your translation function as its argument. The translator function that you write is called once for each function invocation on the stack that has **`try`** blocks. There is no default translator function.

Your translator function should do no more than throw a C++ typed exception. If it does anything in addition to throwing (such as writing to a log file, for example) your program might not behave as expected, because the number of times the translator function is invoked is platform-dependent.

In a multithreaded environment, translator functions are maintained separately for each thread. Each new thread needs to install its own translator function. Thus, each thread is in charge of its own translation handling. **_set_se_translator** is specific to one thread; another DLL can install a different translation function.

The *seTransFunction* function that you write must be a native-compiled function (not compiled with /clr). It must take an unsigned integer and a pointer to a Win32 **_EXCEPTION_POINTERS** structure as arguments. The arguments are the return values of calls to the Win32 API **GetExceptionCode** and **GetExceptionInformation** functions, respectively.

```cpp
typedef void (__cdecl *_se_translator_function)(unsigned int, struct _EXCEPTION_POINTERS* );
```

For **_set_se_translator**, there are implications when dynamically linking to the CRT; another DLL in the process might call **_set_se_translator** and replace your handler with its own.

When using **_set_se_translator** from managed code (code compiled with /clr) or mixed native and managed code, be aware that the translator affects exceptions generated in native code only. Any managed exceptions generated in managed code (such as when raising `System::Exception`) are not routed through the translator function. Exceptions raised in managed code using the Win32 function **RaiseException** or caused by a system exception like a divide by zero exception are routed through the translator.

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_set_se_translator**|\<eh.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example: Catch __try exception error

This sample wraps the calls to set a structured exception translator and to restore the old one in an RAII class, `Scoped_SE_Translator`. This class lets you introduce a scope-specific translator as a single declaration. The class destructor restores the original translator when control leaves the scope.

```cpp
// crt_settrans.cpp
// compile with: cl /W4 /EHa crt_settrans.cpp
#include <stdio.h>
#include <windows.h>
#include <eh.h>
#include <exception>

class SE_Exception : public std::exception
{
private:
    const unsigned int nSE;
public:
    SE_Exception() noexcept : SE_Exception{ 0 } {}
    SE_Exception( unsigned int n ) noexcept : nSE{ n } {}
    unsigned int getSeNumber() const noexcept { return nSE; }
};

class Scoped_SE_Translator
{
private:
    const _se_translator_function old_SE_translator;
public:
    Scoped_SE_Translator( _se_translator_function new_SE_translator ) noexcept
        : old_SE_translator{ _set_se_translator( new_SE_translator ) } {}
    ~Scoped_SE_Translator() noexcept { _set_se_translator( old_SE_translator ); }
};

void SEFunc()
{
    __try
    {
        printf( "In __try, about to force exception\n" );
        int x = 5;
        int y = 0;
        int *p = &y;
        *p = x / *p;
    }
    __finally
    {
        printf( "In __finally\n" );
    }
}

void trans_func( unsigned int u, EXCEPTION_POINTERS* )
{
    throw SE_Exception( u );
}

int main()
{
    Scoped_SE_Translator scoped_se_translator{ trans_func };
    try
    {
        SEFunc();
    }
    catch( const SE_Exception& e )
    {
        printf( "Caught a __try exception, error %8.8x.\n", e.getSeNumber() );
    }
}
```

```Output
In __try, about to force exception
In __finally
Caught a __try exception, error c0000094.
```

## Example: Catch SE_Exception error

Although the functionality provided by **_set_se_translator** is not available in managed code, it is possible to use this mapping in native code, even if that native code is in a compilation under the **/clr** switch, as long as the native code is indicated using `#pragma unmanaged`. If a structured exception is being thrown in managed code that is to be mapped, the code that generates and handles the exception must be marked `#pragma unmanaged`. The following code shows a possible use. For more information, see [Pragma Directives and the __Pragma Keyword](../../preprocessor/pragma-directives-and-the-pragma-keyword.md).

```cpp
// crt_set_se_translator_clr.cpp
// compile with: cl /W4 /clr crt_set_se_translator_clr.cpp
#include <windows.h>
#include <eh.h>
#include <stdio.h>
#include <exception>

int thrower_func( int i ) {
   int y = 0;
   int *p = &y;
   *p = i / *p;
   return 0;
}

class SE_Exception : public std::exception
{
private:
    const unsigned int nSE;
public:
    SE_Exception() noexcept : SE_Exception{ 0 } {}
    SE_Exception( unsigned int n ) noexcept : nSE{ n } {}
    unsigned int getSeNumber() const noexcept { return nSE; }
};

class Scoped_SE_Translator
{
private:
    const _se_translator_function old_SE_translator;
public:
    Scoped_SE_Translator( _se_translator_function new_SE_translator ) noexcept
        : old_SE_translator{ _set_se_translator( new_SE_translator ) } {}
    ~Scoped_SE_Translator() noexcept { _set_se_translator( old_SE_translator ); }
};

#pragma unmanaged
void my_trans_func( unsigned int u, PEXCEPTION_POINTERS )
{
    throw SE_Exception( u );
}

void DoTest()
{
    try
    {
        thrower_func( 10 );
    }
    catch( const SE_Exception& e )
    {
        printf( "Caught SE_Exception, error %8.8x\n", e.getSeNumber() );
    }
    catch(...)
    {
        printf( "Caught unexpected SEH exception.\n" );
    }
}
#pragma managed

int main() {
    Scoped_SE_Translator scoped_se_translator{ my_trans_func };

    DoTest();
}
```

```Output
Caught SE_Exception, error c0000094
```

## See also

[Exception Handling Routines](../../c-runtime-library/exception-handling-routines.md)<br/>
[set_terminate](set-terminate-crt.md)<br/>
[set_unexpected](set-unexpected-crt.md)<br/>
[terminate](terminate-crt.md)<br/>
[unexpected](unexpected-crt.md)<br/>
