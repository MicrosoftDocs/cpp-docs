---
title: "File System Navigation"
description: "How to use the C++ Standard library filesystem APIs to navigate the file system."
ms.date: "04/13/2020"
ms.assetid: f7cc5f5e-a541-4e00-87c7-a3769ef6096d
---
# File System Navigation

The `<filesystem>` header implements the C++ File System Technical Specification ISO/IEC TS 18822:2015 (Final draft: [ISO/IEC JTC 1/SC 22/WG 21 N4100](https://wg21.link/n4100)) and has types and functions that enable you to write platform-independent code for navigating the file system. Because it's cross-platform, it contains APIs that aren't relevant for Windows systems. For example, `is_fifo(const path&)` always returns **`false`** on Windows.

## Overview

Use the `<filesystem>` APIs for the following tasks:

- iterate over files and directories under a specified path

- get information about files including the time created, size, extension, and root directory

- compose, decompose, and compare paths

- create, copy, and delete directories

- copy and delete files

For more information about File IO using the Standard Library, see [iostream Programming](../standard-library/iostream-programming.md).

## Paths

### Constructing and composing paths

Paths in Windows (since XP) are stored natively in Unicode. The [`path`](../standard-library/path-class.md) class automatically does all necessary string conversions. It accepts arguments of both wide and narrow character arrays, and both `std::string` and `std::wstring` types formatted as UTF8 or UTF16. The `path` class also automatically normalizes path separators. You can use a single forward slash as a directory separator in constructor arguments. This separator lets you use the same strings to store paths in both Windows and UNIX environments:

```cpp
path pathToDisplay(L"/FileSystemTest/SubDir3");     // OK!
path pathToDisplay2(L"\\FileSystemTest\\SubDir3");  // Still OK as always
path pathToDisplay3(LR"(\FileSystemTest\SubDir3)"); // Raw string literals are OK, too.
```

To concatenate two paths, you can use the overloaded `/` and `/=` operators, which are analogous to the `+` and `+=` operators on `std::string` and `std::wstring`. The `path` object will conveniently supply the separators if you don't.

```cpp
path myRoot("C:/FileSystemTest");  // no trailing separator, no problem!
myRoot /= path("SubDirRoot");      // C:/FileSystemTest/SubDirRoot
```

### Examining paths

The path class has several methods that return information about various parts of the path itself. This information is distinct from the information about the file system entity it might refer to. You can get the root, the relative path, the file name, the file extension, and more. You can iterate over a path object to examine all the folders in the hierarchy. The following example shows how to iterate over a path object. And, how to retrieve information about its parts.

```cpp
// filesystem_path_example.cpp
// compile by using: /EHsc /W4 /permissive- /std:c++17 (or later)
#include <string>
#include <iostream>
#include <sstream>
#include <filesystem>

using namespace std;
using namespace std::filesystem;

wstring DisplayPathInfo()
{
    // This path may or may not refer to an existing file. We are
    // examining this path string, not file system objects.
    path pathToDisplay(L"C:/FileSystemTest/SubDir3/SubDirLevel2/File2.txt ");

    wostringstream wos;
    int i = 0;
    wos << L"Displaying path info for: " << pathToDisplay << endl;
    for (path::iterator itr = pathToDisplay.begin(); itr != pathToDisplay.end(); ++itr)
    {
        wos << L"path part: " << i++ << L" = " << *itr << endl;
    }

    wos << L"root_name() = " << pathToDisplay.root_name() << endl
        << L"root_path() = " << pathToDisplay.root_path() << endl
        << L"relative_path() = " << pathToDisplay.relative_path() << endl
        << L"parent_path() = " << pathToDisplay.parent_path() << endl
        << L"filename() = " << pathToDisplay.filename() << endl
        << L"stem() = " << pathToDisplay.stem() << endl
        << L"extension() = " << pathToDisplay.extension() << endl;

    return wos.str();
}

int main()
{
    wcout << DisplayPathInfo() << endl;
    // wcout << ComparePaths() << endl; // see following example
    wcout << endl << L"Press Enter to exit" << endl;
    wstring input;
    getline(wcin, input);
}
```

The code produces this output:

```Output
Displaying path info for: C:\FileSystemTest\SubDir3\SubDirLevel2\File2.txt
path part: 0 = C:
path part: 1 = \
path part: 2 = FileSystemTest
path part: 3 = SubDir3
path part: 4 = SubDirLevel2
path part: 5 = File2.txt
root_name() = C:
root_path() = C:\
relative_path() = FileSystemTest\SubDir3\SubDirLevel2\File2.txt
parent_path() = C:\FileSystemTest\SubDir3\SubDirLevel2
filename() = File2.txt
stem() = File2
extension() = .txt
```

### Comparing paths

The `path` class overloads the same comparison operators as `std::string` and `std::wstring`. When you compare two paths, you make a string comparison after the separators have been normalized. If a trailing slash (or backslash) is missing, it isn't added, and that affects the comparison. The following example demonstrates how path values compare:

```cpp
wstring ComparePaths()
{
    path p0(L"C:/Documents");                 // no trailing separator
    path p1(L"C:/Documents/");                // p0 < p1
    path p2(L"C:/Documents/2013/");           // p1 < p2
    path p3(L"C:/Documents/2013/Reports/");   // p2 < p3
    path p4(L"C:/Documents/2014/");           // p3 < p4
    path p5(L"D:/Documents/2013/Reports/");   // p4 < p5

    wostringstream wos;
    wos << boolalpha <<
        p0.wstring() << L" < " << p1.wstring() << L": " << (p0 < p1) << endl <<
        p1.wstring() << L" < " << p2.wstring() << L": " << (p1 < p2) << endl <<
        p2.wstring() << L" < " << p3.wstring() << L": " << (p2 < p3) << endl <<
        p3.wstring() << L" < " << p4.wstring() << L": " << (p3 < p4) << endl <<
        p4.wstring() << L" < " << p5.wstring() << L": " << (p4 < p5) << endl;
    return wos.str();
}
```

```Output
C:\Documents < C:\Documents\: true
C:\Documents\ < C:\Documents\2013\: true
C:\Documents\2013\ < C:\Documents\2013\Reports\: true
C:\Documents\2013\Reports\ < C:\Documents\2014\: true
C:\Documents\2014\ < D:\Documents\2013\Reports\: true
```

To run this code, paste it into the full example above before `main` and uncomment the line that calls it in main.

### Converting between path and string types

A `path` object is implicitly convertible to `std::wstring` or `std::string`. It means you can pass a path to functions such as [`wofstream::open`](../standard-library/basic-ofstream-class.md#open), as shown in this example:

```cpp
// filesystem_path_conversion.cpp
// compile by using: /EHsc /W4 /permissive- /std:c++17 (or later)
#include <string>
#include <iostream>
#include <fstream>
#include <filesystem>

using namespace std;
using namespace std::filesystem;

int main()
{
    const wchar_t* p{ L"C:/Users/Public/Documents" };
    path filePath(p);

    filePath /= L"NewFile.txt";

    // Open, write to, and close the file.
    wofstream writeFile(filePath, ios::out);  // implicit conversion
    writeFile << L"Lorem ipsum\nDolor sit amet";
    writeFile.close();

    // Open, read, and close the file.
    wifstream readFile;
    wstring line;
    readFile.open(filePath);  // implicit conversions
    wcout << L"File " << filePath << L" contains:" << endl;
    while (readFile.good())
    {
        getline(readFile, line);
        wcout << line << endl;
    }
    readFile.close();

    wcout << endl << L"Press Enter to exit" << endl;
    wstring input;
    getline(wcin, input);
}
```

```Output
File C:\Users\Public\Documents\NewFile.txt contains:
Lorem ipsum
Dolor sit amet

Press Enter to exit
```

## Iterating directories and files

The `<filesystem>` header provides the [`directory_iterator`](../standard-library/directory-iterator-class.md) type to iterate over single directories, and the [`recursive_directory_iterator`](../standard-library/recursive-directory-iterator-class.md) class to iterate recursively over a directory and its subdirectories. After you construct an iterator by passing it a `path` object, the iterator points to the first directory_entry in the path. Create the end iterator by calling the default constructor.

When iterating through a directory, there are several kinds of items you might discover. These items include directories, files, symbolic links, socket files, and others. The `directory_iterator` returns its items as [`directory_entry`](../standard-library/directory-entry-class.md) objects.
