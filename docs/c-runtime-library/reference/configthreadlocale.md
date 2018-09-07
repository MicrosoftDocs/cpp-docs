---
title: "_configthreadlocale | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
apiname: ["_configthreadlocale"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-locale-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["_configthreadlocale", "configthreadlocale"]
dev_langs: ["C++"]
helpviewer_keywords: ["configthreadlocale function", "locales, per-thread", "_configthreadlocale function", "per-thread locale", "thread locale"]
ms.assetid: 10e4050e-b587-4f30-80bc-6c76b35fc770
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# _configthreadlocale

Configures per-thread locale options.

## Syntax

```C
int _configthreadlocale( int per_thread_locale_type );
```

### Parameters

*per_thread_locale_type*<br/>
The option to set. One of the options listed in the following table.

## Return Value

The previous per-thread locale status (**_DISABLE_PER_THREAD_LOCALE** or **_ENABLE_PER_THREAD_LOCALE**), or -1 on failure.

## Remarks

The **_configurethreadlocale** function is used to control the use of thread-specific locales. Use one of these *per_thread_locale_type* options to specify or determine the per-thread locale status:

|||
|-|-|
**_ENABLE_PER_THREAD_LOCALE**|Make the current thread use a thread-specific locale. Subsequent calls to **setlocale** in this thread affect only the thread's own locale.
**_DISABLE_PER_THREAD_LOCALE**|Make the current thread use the global locale. Subsequent calls to **setlocale** in this thread affect other threads using the global locale.
**0**|Retrieves the current setting for this particular thread.

These functions affect the behavior of **setlocale**, **_tsetlocale**, **_wsetlocale**, and **_setmbcp**. When per-thread locale is disabled, any subsequent call to **setlocale** or **_wsetlocale** changes the locale of all threads that use the global locale. When per-thread locale is enabled, **setlocale** or **_wsetlocale** only affects the current thread's locale.

If you use **_configurethreadlocale** to enable a per-thread locale, we recommend that you call **setlocale** or **_wsetlocale** to set the preferred locale in that thread immediately afterward.

If *per_thread_locale_type* is not one of the values listed in the table, this function invokes the invalid parameter handler, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, this function sets **errno** to **EINVAL** and returns -1.

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_configthreadlocale**|\<locale.h>|

## Example

```cpp
// crt_configthreadlocale.cpp
//
// This program demonstrates the use of _configthreadlocale when
// using two independent threads.
//
// Compile by using: cl /EHsc /W4 crt_configthreadlocale.cpp

#include <locale.h>
#include <mbctype.h>
#include <process.h>
#include <windows.h>
#include <stdio.h>
#include <time.h>

#define BUFF_SIZE 100

// Retrieve the date and time in the current
// locale's format.
int get_time(unsigned char* str)
{
    __time64_t  ltime;
    struct tm   thetime;

    // Retieve the time
    _time64(&ltime);
    _gmtime64_s(&thetime, &ltime);

    // Format the current time structure into a string
    // using %#x is the long date representation,
    // appropriate to the current locale
    if (!strftime((char *)str, BUFF_SIZE, "%#x",
                  (const struct tm*)&thetime))
    {
        printf("strftime failed!\n");
        return -1;
    }
    return 0;
}

// This thread sets its locale to German
// and prints the time.
unsigned __stdcall SecondThreadFunc( void* /*pArguments*/ )
{
    unsigned char str[BUFF_SIZE];

    _configthreadlocale(_ENABLE_PER_THREAD_LOCALE);

    // Set the thread code page
    _setmbcp(_MB_CP_ANSI);

    // Set the thread locale
    printf("The thread locale is now set to %s.\n",
           setlocale(LC_ALL, "German"));

    // Retrieve the time string from the helper function
    if (get_time(str) == 0)
    {
        printf("The time in German locale is: '%s'\n", str);
    }

    _endthreadex( 0 );
    return 0;
}

// The main thread spawns a second thread (above) and then
// sets the locale to English and prints the time.
int main()
{
    HANDLE          hThread;
    unsigned        threadID;
    unsigned char   str[BUFF_SIZE];

    // Enable per-thread locale causes all subsequent locale
    // setting changes in this thread to only affect this thread.
    _configthreadlocale(_ENABLE_PER_THREAD_LOCALE);

    // Retrieve the time string from the helper function
    printf("The thread locale is now set to %s.\n",
           setlocale(LC_ALL, "English"));

    // Create the second thread.
    hThread = (HANDLE)_beginthreadex( NULL, 0, &SecondThreadFunc,
                                      NULL, 0, &threadID );

    if (get_time(str) == 0)
    {
        // Retrieve the time string from the helper function
        printf("The time in English locale is: '%s'\n\n", str);
    }

    // Wait for the created thread to finish.
    WaitForSingleObject( hThread, INFINITE );

    // Destroy the thread object.
    CloseHandle( hThread );
}
```

```Output
The thread locale is now set to English_United States.1252.
The time in English locale is: 'Wednesday, May 12, 2004'

The thread locale is now set to German_Germany.1252.
The time in German locale is: 'Mittwoch, 12. Mai 2004'
```

## See also

[setlocale, _wsetlocale](setlocale-wsetlocale.md)<br/>
[_beginthread, _beginthreadex](beginthread-beginthreadex.md)<br/>
[Locale](../../c-runtime-library/locale.md)<br/>
[Multithreading and Locales](../../parallel/multithreading-and-locales.md)<br/>
