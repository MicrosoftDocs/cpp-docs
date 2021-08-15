---
description: "Learn more about: How to: Interface between exceptional and non-exceptional code"
title: "How to: Interface between exceptional and non-exceptional code"
ms.custom: "how-to"
ms.date: "11/19/2019"
ms.topic: "conceptual"
ms.assetid: fd5bb4af-5665-46a1-a321-614b48d4061e
---
# How to: Interface between exceptional and non-exceptional code

This article describes how to implement consistent exception-handling in a C++ module, and also how to translate those exceptions to and from error codes at the exception boundaries.

Sometimes a C++ module has to interface with code that doesn't use exceptions (non-exceptional code). Such an interface is known as an *exception boundary*. For example, you may want to call the Win32 function `CreateFile` in your C++ program. `CreateFile` doesn't throw exceptions; instead it sets error codes that can be retrieved by the `GetLastError` function. If your C++ program is non-trivial, then in it you probably prefer to have a consistent exception-based error-handling policy. And you probably don't want to abandon exceptions just because you interface with non-exceptional code, and neither do you want to mix exception-based and non-exception-based error policies in your C++ module.

## Calling non-exceptional functions from C++

When you call a non-exceptional function from C++, the idea is to wrap that function in a C++ function that detects any errors and then possibly throws an exception. When you design such a wrapper function, first decide which type of exception guarantee to provide:  no-throw, strong, or basic. Second, design the function so that all resources, for example, file handles, are correctly released if an exception is thrown. Typically, this means that you use smart pointers or similar resource managers to own the resources. For more information about design considerations, see [How to: Design for Exception Safety](how-to-design-for-exception-safety.md).

### Example

The following example shows C++ functions that use the Win32 `CreateFile` and `ReadFile` functions internally to open and read two files.  The `File` class is a resource acquisition is initialization (RAII) wrapper for the file handles. Its constructor detects a "file not found" condition and throws an exception to propagate the error up the call stack of the C++ module (in this example, the `main()` function). If an exception is thrown after a `File` object is fully constructed, the destructor automatically calls `CloseHandle` to release the file handle. (If you prefer, you can use the Active Template Library (ATL) `CHandle` class for this same purpose, or a `unique_ptr` together with a custom deleter.) The functions that call Win32 and CRT APIs detect errors and then throw C++ exceptions using the locally-defined `ThrowLastErrorIf` function, which in turn uses the `Win32Exception` class, derived from the `runtime_error` class. All functions in this example provide a strong exception guarantee; if an exception is thrown at any point in these functions, no resources are leaked and no program state is modified.

```cpp
// compile with: /EHsc
#include <Windows.h>
#include <stdlib.h>
#include <vector>
#include <iostream>
#include <string>
#include <limits>
#include <stdexcept>

using namespace std;

string FormatErrorMessage(DWORD error, const string& msg)
{
    static const int BUFFERLENGTH = 1024;
    vector<char> buf(BUFFERLENGTH);
    FormatMessageA(FORMAT_MESSAGE_FROM_SYSTEM, 0, error, 0, buf.data(),
        BUFFERLENGTH - 1, 0);
    return string(buf.data()) + "   ("  + msg  + ")";
}

class Win32Exception : public runtime_error
{
private:
    DWORD m_error;
public:
    Win32Exception(DWORD error, const string& msg)
        : runtime_error(FormatErrorMessage(error, msg)), m_error(error) { }

    DWORD GetErrorCode() const { return m_error; }
};

void ThrowLastErrorIf(bool expression, const string& msg)
{
    if (expression) {
        throw Win32Exception(GetLastError(), msg);
    }
}

class File
{
private:
    HANDLE m_handle;

    // Declared but not defined, to avoid double closing.
    File& operator=(const File&);
    File(const File&);
public:
    explicit File(const string& filename)
    {
        m_handle = CreateFileA(filename.c_str(), GENERIC_READ, FILE_SHARE_READ,
            nullptr, OPEN_EXISTING, FILE_ATTRIBUTE_READONLY, nullptr);
        ThrowLastErrorIf(m_handle == INVALID_HANDLE_VALUE,
            "CreateFile call failed on file named " + filename);
    }

    ~File() { CloseHandle(m_handle); }

    HANDLE GetHandle() { return m_handle; }
};

size_t GetFileSizeSafe(const string& filename)
{
    File fobj(filename);
    LARGE_INTEGER filesize;

    BOOL result = GetFileSizeEx(fobj.GetHandle(), &filesize);
    ThrowLastErrorIf(result == FALSE, "GetFileSizeEx failed: " + filename);

    if (filesize.QuadPart < (numeric_limits<size_t>::max)()) {
        return filesize.QuadPart;
    } else {
        throw;
    }
}

vector<char> ReadFileVector(const string& filename)
{
    File fobj(filename);
    size_t filesize = GetFileSizeSafe(filename);
    DWORD bytesRead = 0;

    vector<char> readbuffer(filesize);

    BOOL result = ReadFile(fobj.GetHandle(), readbuffer.data(), readbuffer.size(),
        &bytesRead, nullptr);
    ThrowLastErrorIf(result == FALSE, "ReadFile failed: " + filename);

    cout << filename << " file size: " << filesize << ", bytesRead: "
        << bytesRead << endl;

    return readbuffer;
}

bool IsFileDiff(const string& filename1, const string& filename2)
{
    return ReadFileVector(filename1) != ReadFileVector(filename2);
}

#include <iomanip>

int main ( int argc, char* argv[] )
{
    string filename1("file1.txt");
    string filename2("file2.txt");

    try
    {
        if(argc > 2) {
            filename1 = argv[1];
            filename2 = argv[2];
        }

        cout << "Using file names " << filename1 << " and " << filename2 << endl;

        if (IsFileDiff(filename1, filename2)) {
            cout << "+++ Files are different." << endl;
        } else {
            cout<< "=== Files match." << endl;
        }
    }
    catch(const Win32Exception& e)
    {
        ios state(nullptr);
        state.copyfmt(cout);
        cout << e.what() << endl;
        cout << "Error code: 0x" << hex << uppercase << setw(8) << setfill('0')
            << e.GetErrorCode() << endl;
        cout.copyfmt(state); // restore previous formatting
    }
}
```

## Calling exceptional code from non-exceptional code

C++ functions that are declared as "extern C" can be called by C programs. C++ COM servers can be consumed by code written in any of a number of different languages. When you implement public exception-aware functions in C++ to be called by non-exceptional code, the C++ function must not allow any exceptions to propagate back to the caller. Therefore, the C++ function must specifically catch every exception that it knows how to handle and, if appropriate, convert the exception to an error code that the caller understands. If not all potential exceptions are known, the C++ function should have a `catch(...)` block as the last handler. In such a case, it's best to report a fatal error to the caller, because your program might be in an unknown state.

The following example shows a function that assumes that any exception that might be thrown is either a Win32Exception or an exception type derived from `std::exception`. The function catches any exception of these types and propagates the error information as a Win32 error code to the caller.

```cpp
BOOL DiffFiles2(const string& file1, const string& file2)
{
    try
    {
        File f1(file1);
        File f2(file2);
        if (IsTextFileDiff(f1, f2))
        {
            SetLastError(MY_APPLICATION_ERROR_FILE_MISMATCH);
            return FALSE;
        }
        return TRUE;
    }
    catch(Win32Exception& e)
    {
        SetLastError(e.GetErrorCode());
    }

    catch(std::exception& e)
    {
        SetLastError(MY_APPLICATION_GENERAL_ERROR);
    }
    return FALSE;
}
```

When you convert from exceptions to error codes, one potential issue is that error codes often don't contain the richness of information that an exception can store. To address this, you can provide a **`catch`** block for each specific exception type that might be thrown, and perform logging to record the details of the exception before it is converted to an error code. This approach can create a lot of code repetition if multiple functions all use the same set of **`catch`** blocks. A good way to avoid code repetition is by refactoring those blocks into one private utility function that implements the **`try`** and **`catch`** blocks and accepts a function object that is invoked in the **`try`** block. In each public function, pass the code to the utility function as a lambda expression.

```cpp
template<typename Func>
bool Win32ExceptionBoundary(Func&& f)
{
    try
    {
        return f();
    }
    catch(Win32Exception& e)
    {
        SetLastError(e.GetErrorCode());
    }
    catch(const std::exception& e)
    {
        SetLastError(MY_APPLICATION_GENERAL_ERROR);
    }
    return false;
}
```

The following example shows how to write the lambda expression that defines the functor. When a functor is defined "inline" by using a lambda expression, it is often easier to read than it would be if it were written as a named function object.

```cpp
bool DiffFiles3(const string& file1, const string& file2)
{
    return Win32ExceptionBoundary([&]() -> bool
    {
        File f1(file1);
        File f2(file2);
        if (IsTextFileDiff(f1, f2))
        {
            SetLastError(MY_APPLICATION_ERROR_FILE_MISMATCH);
            return false;
        }
        return true;
    });
}
```

For more information about lambda expressions, see [Lambda Expressions](lambda-expressions-in-cpp.md).

## See also

[Modern C++ best practices for exceptions and error handling](errors-and-exception-handling-modern-cpp.md)<br/>
[How to: Design for Exception Safety](how-to-design-for-exception-safety.md)<br/>
