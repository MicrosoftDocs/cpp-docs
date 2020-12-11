---
description: "Learn more about: Multithreading and Locales"
title: "Multithreading and Locales"
ms.date: "11/04/2016"
helpviewer_keywords: ["locales [C++], multithreading", "multithreading [C++], locales", "threading [C++], locales", "per-thread locale"]
ms.assetid: d6fb159a-eaca-4130-a51a-f95d62f71485
---
# Multithreading and Locales

Both the C Runtime Library and the C++ Standard Library provide support for changing the locale of your program. This topic discusses issues that arise when using the locale functionality of both libraries in a multithreaded application.

## Remarks

With the C Runtime Library, you can create multithreaded applications using the `_beginthread` and `_beginthreadex` functions. This topic only covers multithreaded applications created using these functions. For more information, see [_beginthread, _beginthreadex](../c-runtime-library/reference/beginthread-beginthreadex.md).

To change the locale using the C Runtime Library, use the [setlocale](../preprocessor/setlocale.md) function. In previous versions of Visual C++, this function would always modify the locale throughout the entire application. There is now support for setting the locale on a per-thread basis. This is done using the [_configthreadlocale](../c-runtime-library/reference/configthreadlocale.md) function. To specify that [setlocale](../preprocessor/setlocale.md) should only change the locale in the current thread, call `_configthreadlocale(_ENABLE_PER_THREAD_LOCALE)` in that thread. Conversely, calling `_configthreadlocale(_DISABLE_PER_THREAD_LOCALE)` will cause that thread to use the global locale, and any call to [setlocale](../preprocessor/setlocale.md) in that thread will change the locale in all threads that have not explicitly enabled per-thread locale.

To change the locale using the C++ Runtime Library, use the [locale Class](../standard-library/locale-class.md). By calling the [locale::global](../standard-library/locale-class.md#global) method, you change the locale in every thread that has not explicitly enabled per-thread locale. To change the locale in a single thread or portion of an application, simply create an instance of a `locale` object in that thread or portion of code.

> [!NOTE]
> Calling [locale::global](../standard-library/locale-class.md#global) changes the locale for both the C++ Standard Library and the C Runtime Library. However, calling [setlocale](../preprocessor/setlocale.md) only changes the locale for the C Runtime Library; the C++ Standard Library is not affected.

The following examples show how to use the [setlocale](../preprocessor/setlocale.md) function, the [locale Class](../standard-library/locale-class.md), and the [_configthreadlocale](../c-runtime-library/reference/configthreadlocale.md) function to change the locale of an application in several different scenarios.

## Example: Change locale with per-thread locale enabled

In this example, the main thread spawns two child threads. The first thread, Thread A, enables per-thread locale by calling `_configthreadlocale(_ENABLE_PER_THREAD_LOCALE)`. The second thread, Thread B, as well as the main thread, do not enable per-thread locale. Thread A then proceeds to change the locale using the [setlocale](../preprocessor/setlocale.md) function of the C Runtime Library.

Since Thread A has per-thread locale enabled, only the C Runtime Library functions in Thread A start using the "french" locale. The C Runtime Library functions in Thread B and in the main thread continue to use the "C" locale. Also, since [setlocale](../preprocessor/setlocale.md) does not affect the C++ Standard Library locale, all C++ Standard Library objects continue to use the "C" locale.

```cpp
// multithread_locale_1.cpp
// compile with: /EHsc /MD
#include <clocale>
#include <cstdio>
#include <locale>
#include <process.h>
#include <windows.h>

#define NUM_THREADS 2
using namespace std;

unsigned __stdcall RunThreadA(void *params);
unsigned __stdcall RunThreadB(void *params);

BOOL localeSet = FALSE;
HANDLE printMutex = CreateMutex(NULL, FALSE, NULL);

int main()
{
    HANDLE threads[NUM_THREADS];

    unsigned aID;
    threads[0] = (HANDLE)_beginthreadex(
        NULL, 0, RunThreadA, NULL, 0, &aID);

    unsigned bID;
    threads[1] = (HANDLE)_beginthreadex(
        NULL, 0, RunThreadB, NULL, 0, &bID);

    WaitForMultipleObjects(2, threads, TRUE, INFINITE);

    printf_s("[Thread main] Per-thread locale is NOT enabled.\n");
    printf_s("[Thread main] CRT locale is set to \"%s\"\n",
        setlocale(LC_ALL, NULL));
    printf_s("[Thread main] locale::global is set to \"%s\"\n",
        locale().name().c_str());

    CloseHandle(threads[0]);
    CloseHandle(threads[1]);
    CloseHandle(printMutex);

    return 0;
}

unsigned __stdcall RunThreadA(void *params)
{
    _configthreadlocale(_ENABLE_PER_THREAD_LOCALE);
    setlocale(LC_ALL, "french");
    localeSet = TRUE;

    WaitForSingleObject(printMutex, INFINITE);
    printf_s("[Thread A] Per-thread locale is enabled.\n");
    printf_s("[Thread A] CRT locale is set to \"%s\"\n",
        setlocale(LC_ALL, NULL));
    printf_s("[Thread A] locale::global is set to \"%s\"\n\n",
        locale().name().c_str());
    ReleaseMutex(printMutex);

    return 1;
}

unsigned __stdcall RunThreadB(void *params)
{
    while (!localeSet)
        Sleep(100);

    WaitForSingleObject(printMutex, INFINITE);
    printf_s("[Thread B] Per-thread locale is NOT enabled.\n");
    printf_s("[Thread B] CRT locale is set to \"%s\"\n",
        setlocale(LC_ALL, NULL));
    printf_s("[Thread B] locale::global is set to \"%s\"\n\n",
        locale().name().c_str());
    ReleaseMutex(printMutex);

    return 1;
}
```

```Output
[Thread A] Per-thread locale is enabled.
[Thread A] CRT locale is set to "French_France.1252"
[Thread A] locale::global is set to "C"

[Thread B] Per-thread locale is NOT enabled.
[Thread B] CRT locale is set to "C"
[Thread B] locale::global is set to "C"

[Thread main] Per-thread locale is NOT enabled.
[Thread main] CRT locale is set to "C"
[Thread main] locale::global is set to "C"
```

## Example: Change global locale with per-thread locale enabled

In this example, the main thread spawns two child threads. The first thread, Thread A, enables per-thread locale by calling `_configthreadlocale(_ENABLE_PER_THREAD_LOCALE)`. The second thread, Thread B, as well as the main thread, do not enable per-thread locale. Thread A then proceeds to change the locale using the [locale::global](../standard-library/locale-class.md#global) method of the C++ Standard Library.

Since Thread A has per-thread locale enabled, only the C Runtime Library functions in Thread A start using the "french" locale. The C Runtime Library functions in Thread B and in the main thread continue to use the "C" locale. However, since the [locale::global](../standard-library/locale-class.md#global) method changes the locale "globally", all C++ Standard Library objects in all threads start using the "french" locale.

```cpp
// multithread_locale_2.cpp
// compile with: /EHsc /MD
#include <clocale>
#include <cstdio>
#include <locale>
#include <process.h>
#include <windows.h>

#define NUM_THREADS 2
using namespace std;

unsigned __stdcall RunThreadA(void *params);
unsigned __stdcall RunThreadB(void *params);

BOOL localeSet = FALSE;
HANDLE printMutex = CreateMutex(NULL, FALSE, NULL);

int main()
{
    HANDLE threads[NUM_THREADS];

    unsigned aID;
    threads[0] = (HANDLE)_beginthreadex(
        NULL, 0, RunThreadA, NULL, 0, &aID);

    unsigned bID;
    threads[1] = (HANDLE)_beginthreadex(
        NULL, 0, RunThreadB, NULL, 0, &bID);

    WaitForMultipleObjects(2, threads, TRUE, INFINITE);

    printf_s("[Thread main] Per-thread locale is NOT enabled.\n");
    printf_s("[Thread main] CRT locale is set to \"%s\"\n",
        setlocale(LC_ALL, NULL));
    printf_s("[Thread main] locale::global is set to \"%s\"\n",
        locale().name().c_str());

    CloseHandle(threads[0]);
    CloseHandle(threads[1]);
    CloseHandle(printMutex);

    return 0;
}

unsigned __stdcall RunThreadA(void *params)
{
    _configthreadlocale(_ENABLE_PER_THREAD_LOCALE);
    locale::global(locale("french"));
    localeSet = TRUE;

    WaitForSingleObject(printMutex, INFINITE);
    printf_s("[Thread A] Per-thread locale is enabled.\n");
    printf_s("[Thread A] CRT locale is set to \"%s\"\n",
        setlocale(LC_ALL, NULL));
    printf_s("[Thread A] locale::global is set to \"%s\"\n\n",
        locale().name().c_str());
    ReleaseMutex(printMutex);

    return 1;
}

unsigned __stdcall RunThreadB(void *params)
{
    while (!localeSet)
        Sleep(100);

    WaitForSingleObject(printMutex, INFINITE);
    printf_s("[Thread B] Per-thread locale is NOT enabled.\n");
    printf_s("[Thread B] CRT locale is set to \"%s\"\n",
        setlocale(LC_ALL, NULL));
    printf_s("[Thread B] locale::global is set to \"%s\"\n\n",
        locale().name().c_str());
    ReleaseMutex(printMutex);

    return 1;
}
```

```Output
[Thread A] Per-thread locale is enabled.
[Thread A] CRT locale is set to "French_France.1252"
[Thread A] locale::global is set to "French_France.1252"

[Thread B] Per-thread locale is NOT enabled.
[Thread B] CRT locale is set to "C"
[Thread B] locale::global is set to "French_France.1252"

[Thread main] Per-thread locale is NOT enabled.
[Thread main] CRT locale is set to "C"
[Thread main] locale::global is set to "French_France.1252"
```

## Example: Change locale without per-thread locale enabled

In this example, the main thread spawns two child threads. The first thread, Thread A, enables per-thread locale by calling `_configthreadlocale(_ENABLE_PER_THREAD_LOCALE)`. The second thread, Thread B, as well as the main thread, do not enable per-thread locale. Thread B then proceeds to change the locale using the [setlocale](../preprocessor/setlocale.md) function of the C Runtime Library.

Since Thread B does not have per-thread locale enabled, the C Runtime Library functions in Thread B and in the main thread start using the "french" locale. The C Runtime Library functions in Thread A continue to use the "C" locale because Thread A has per-thread locale enabled. Also, since [setlocale](../preprocessor/setlocale.md) does not affect the C++ Standard Library locale, all C++ Standard Library objects continue to use the "C" locale.

```cpp
// multithread_locale_3.cpp
// compile with: /EHsc /MD
#include <clocale>
#include <cstdio>
#include <locale>
#include <process.h>
#include <windows.h>

#define NUM_THREADS 2
using namespace std;

unsigned __stdcall RunThreadA(void *params);
unsigned __stdcall RunThreadB(void *params);

BOOL localeSet = FALSE;
BOOL configThreadLocaleCalled = FALSE;
HANDLE printMutex = CreateMutex(NULL, FALSE, NULL);

int main()
{
    HANDLE threads[NUM_THREADS];

    unsigned aID;
    threads[0] = (HANDLE)_beginthreadex(
        NULL, 0, RunThreadA, NULL, 0, &aID);

    unsigned bID;
    threads[1] = (HANDLE)_beginthreadex(
        NULL, 0, RunThreadB, NULL, 0, &bID);

    WaitForMultipleObjects(2, threads, TRUE, INFINITE);

    printf_s("[Thread main] Per-thread locale is NOT enabled.\n");
    printf_s("[Thread main] CRT locale is set to \"%s\"\n",
        setlocale(LC_ALL, NULL));
    printf_s("[Thread main] locale::global is set to \"%s\"\n",
        locale().name().c_str());

    CloseHandle(threads[0]);
    CloseHandle(threads[1]);
    CloseHandle(printMutex);

    return 0;
}

unsigned __stdcall RunThreadA(void *params)
{
    _configthreadlocale(_ENABLE_PER_THREAD_LOCALE);
    configThreadLocaleCalled = TRUE;
    while (!localeSet)
        Sleep(100);

    WaitForSingleObject(printMutex, INFINITE);
    printf_s("[Thread A] Per-thread locale is enabled.\n");
    printf_s("[Thread A] CRT locale is set to \"%s\"\n",
        setlocale(LC_ALL, NULL));
    printf_s("[Thread A] locale::global is set to \"%s\"\n\n",
        locale().name().c_str());
    ReleaseMutex(printMutex);

    return 1;
}

unsigned __stdcall RunThreadB(void *params)
{
    while (!configThreadLocaleCalled)
        Sleep(100);
    setlocale(LC_ALL, "french");
    localeSet = TRUE;

    WaitForSingleObject(printMutex, INFINITE);
    printf_s("[Thread B] Per-thread locale is NOT enabled.\n");
    printf_s("[Thread B] CRT locale is set to \"%s\"\n",
        setlocale(LC_ALL, NULL));
    printf_s("[Thread B] locale::global is set to \"%s\"\n\n",
        locale().name().c_str());
    ReleaseMutex(printMutex);

    return 1;
}
```

```Output
[Thread B] Per-thread locale is NOT enabled.
[Thread B] CRT locale is set to "French_France.1252"
[Thread B] locale::global is set to "C"

[Thread A] Per-thread locale is enabled.
[Thread A] CRT locale is set to "C"
[Thread A] locale::global is set to "C"

[Thread main] Per-thread locale is NOT enabled.
[Thread main] CRT locale is set to "French_France.1252"
[Thread main] locale::global is set to "C"
```

## Example: Change global locale without per-thread locale enabled

In this example, the main thread spawns two child threads. The first thread, Thread A, enables per-thread locale by calling `_configthreadlocale(_ENABLE_PER_THREAD_LOCALE)`. The second thread, Thread B, as well as the main thread, do not enable per-thread locale. Thread B then proceeds to change the locale using the [locale::global](../standard-library/locale-class.md#global) method of the C++ Standard Library.

Since Thread B does not have per-thread locale enabled, the C Runtime Library functions in Thread B and in the main thread start using the "french" locale. The C Runtime Library functions in Thread A continue to use the "C" locale because Thread A has per-thread locale enabled. However, since the [locale::global](../standard-library/locale-class.md#global) method changes the locale "globally", all C++ Standard Library objects in all threads start using the "french" locale.

```cpp
// multithread_locale_4.cpp
// compile with: /EHsc /MD
#include <clocale>
#include <cstdio>
#include <locale>
#include <process.h>
#include <windows.h>

#define NUM_THREADS 2
using namespace std;

unsigned __stdcall RunThreadA(void *params);
unsigned __stdcall RunThreadB(void *params);

BOOL localeSet = FALSE;
BOOL configThreadLocaleCalled = FALSE;
HANDLE printMutex = CreateMutex(NULL, FALSE, NULL);

int main()
{
    HANDLE threads[NUM_THREADS];

    unsigned aID;
    threads[0] = (HANDLE)_beginthreadex(
        NULL, 0, RunThreadA, NULL, 0, &aID);

    unsigned bID;
    threads[1] = (HANDLE)_beginthreadex(
        NULL, 0, RunThreadB, NULL, 0, &bID);

    WaitForMultipleObjects(2, threads, TRUE, INFINITE);

    printf_s("[Thread main] Per-thread locale is NOT enabled.\n");
    printf_s("[Thread main] CRT locale is set to \"%s\"\n",
        setlocale(LC_ALL, NULL));
    printf_s("[Thread main] locale::global is set to \"%s\"\n",
        locale().name().c_str());

    CloseHandle(threads[0]);
    CloseHandle(threads[1]);
    CloseHandle(printMutex);

    return 0;
}

unsigned __stdcall RunThreadA(void *params)
{
    _configthreadlocale(_ENABLE_PER_THREAD_LOCALE);
    configThreadLocaleCalled = TRUE;
    while (!localeSet)
        Sleep(100);

    WaitForSingleObject(printMutex, INFINITE);
    printf_s("[Thread A] Per-thread locale is enabled.\n");
    printf_s("[Thread A] CRT locale is set to \"%s\"\n",
        setlocale(LC_ALL, NULL));
    printf_s("[Thread A] locale::global is set to \"%s\"\n\n",
        locale().name().c_str());
    ReleaseMutex(printMutex);

    return 1;
}

unsigned __stdcall RunThreadB(void *params)
{
    while (!configThreadLocaleCalled)
        Sleep(100);
    locale::global(locale("french"));
    localeSet = TRUE;

    WaitForSingleObject(printMutex, INFINITE);
    printf_s("[Thread B] Per-thread locale is NOT enabled.\n");
    printf_s("[Thread B] CRT locale is set to \"%s\"\n",
        setlocale(LC_ALL, NULL));
    printf_s("[Thread B] locale::global is set to \"%s\"\n\n",
        locale().name().c_str());
    ReleaseMutex(printMutex);

    return 1;
}
```

```Output
[Thread B] Per-thread locale is NOT enabled.
[Thread B] CRT locale is set to "French_France.1252"
[Thread B] locale::global is set to "French_France.1252"

[Thread A] Per-thread locale is enabled.
[Thread A] CRT locale is set to "C"
[Thread A] locale::global is set to "French_France.1252"

[Thread main] Per-thread locale is NOT enabled.
[Thread main] CRT locale is set to "French_France.1252"
[Thread main] locale::global is set to "French_France.1252"
```

## See also

[Multithreading Support for Older Code (Visual C++)](multithreading-support-for-older-code-visual-cpp.md)<br/>
[_beginthread, _beginthreadex](../c-runtime-library/reference/beginthread-beginthreadex.md)<br/>
[_configthreadlocale](../c-runtime-library/reference/configthreadlocale.md)<br/>
[setlocale](../preprocessor/setlocale.md)<br/>
[Internationalization](../c-runtime-library/internationalization.md)<br/>
[Locale](../c-runtime-library/locale.md)<br/>
[\<clocale>](../standard-library/clocale.md)<br/>
[\<locale>](../standard-library/locale.md)<br/>
[locale Class](../standard-library/locale-class.md)
