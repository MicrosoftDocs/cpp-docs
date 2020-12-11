---
description: "Learn more about: Input Stream Member Functions"
title: "Input Stream Member Functions"
ms.date: "07/19/2019"
helpviewer_keywords: ["input stream objects", "input streams, member functions"]
ms.assetid: b4b9465d-0da9-4ccf-859d-72a68418982e
---
# Input Stream Member Functions

Input stream member functions are used for disk input.

## <a name="vclrftheopenfunctionforinputstreamsanchor11"></a> open

If you are using an input file stream (`ifstream`), you must associate that stream with a specific disk file. You can do this in the constructor, or you can use the `open` function. In either case, the arguments are the same.

You generally specify an [ios_base::openmode](../standard-library/ios-base-class.md#openmode) flag when you open the file associated with an input stream (the default mode is `ios::in`). For a list of the `openmode` flags, see [ios_base::openmode](../standard-library/ios-base-class.md#openmode). The flags can be combined with the bitwise OR ( &#124; ) operator.

To read a file, first use the `fail` member function to determine whether it exists:

```cpp
istream ifile("FILENAME");

if (ifile.fail())
// The file does not exist ...
```

## <a name="vclrfthegetfunctionanchor12"></a> get

The unformatted `get` member function works like the `>>` operator with two exceptions. First, the `get` function includes white-space characters, whereas the extractor excludes white space when the `skipws` flag is set (the default). Second, the `get` function is less likely to cause a tied output stream (`cout`, for example) to be flushed.

A variation of the `get` function specifies a buffer address and the maximum number of characters to read. This is useful for limiting the number of characters sent to a specific variable, as this example shows:

```cpp
// ioo_get_function.cpp
// compile with: /EHsc
// Type up to 24 characters and a terminating character.
// Any remaining characters can be extracted later.
#include <iostream>
using namespace std;

int main()
{
   char line[25];
   cout << " Type a line terminated by carriage return\n>";
   cin.get( line, 25 );
   cout << line << endl;
}
```

### Input

```Input
1234
```

### Sample Output

```Output
1234
```

## <a name="vclrfthegetlinefunctionanchor13"></a> getline

The `getline` member function is similar to the `get` function. Both functions allow a third argument that specifies the terminating character for input. The default value is the newline character. Both functions reserve one character for the required terminating character. However, `get` leaves the terminating character in the stream and `getline` removes the terminating character.

The following example specifies a terminating character for the input stream:

```cpp
// getline_func.cpp
// compile with: /EHsc
#include <iostream>
using namespace std;

int main( )
{
   char line[100];
   cout << " Type a line terminated by 't'" << endl;
   cin.getline( line, 100, 't' );
   cout << line;
}
```

### Input

```Input
test
```

## <a name="vclrfthereadfunctionanchor14"></a> read

The `read` member function reads bytes from a file to a specified area of memory. The length argument determines the number of bytes read. If you do not include that argument, reading stops when the physical end of file is reached or, in the case of a text-mode file, when an embedded `EOF` character is read.

This example reads a binary record from a payroll file into a structure:

```cpp
#include <fstream>
#include <iostream>
using namespace std;

int main()
{
   struct
   {
      double salary;
      char name[23];
   } employee;

   ifstream is( "payroll" );
   if( is ) {  // ios::operator void*()
      is.read( (char *) &employee, sizeof( employee ) );
      cout << employee.name << ' ' << employee.salary << endl;
   }
   else {
      cout << "ERROR: Cannot open file 'payroll'." << endl;
   }
}
```

The program assumes that the data records are formatted exactly as specified by the structure with no terminating carriage return or line feed characters.

## <a name="vclrftheseekgandtellgfunctionsanchor7"></a> seekg and tellg

Input file streams keep an internal pointer to the position in the file where data is to be read next. You set this pointer with the `seekg` function, as shown here:

```cpp
#include <iostream>
#include <fstream>
using namespace std;

int main( )
{
   char ch;

   ifstream tfile( "payroll" );
   if( tfile ) {
      tfile.seekg( 8 );        // Seek 8 bytes in (past salary)
      while ( tfile.good() ) { // EOF or failure stops the reading
         tfile.get( ch );
         if( !ch ) break;      // quit on null
         cout << ch;
      }
   }
   else {
      cout << "ERROR: Cannot open file 'payroll'." << endl;
   }
}
```

To use `seekg` to implement record-oriented data management systems, multiply the fixed-length record size by the record number to obtain the byte position relative to the end of the file, and then use the `get` object to read the record.

The `tellg` member function returns the current file position for reading. This value is of type `streampos`, a **`typedef`** defined in \<iostream>. The following example reads a file and displays messages showing the positions of spaces.

```cpp
#include <fstream>
#include <iostream>
using namespace std;

int main( )
{
   char ch;
   ifstream tfile( "payroll" );
   if( tfile ) {
       while ( tfile.good( ) ) {
          streampos here = tfile.tellg();
          tfile.get( ch );
          if ( ch == ' ' )
             cout << "\nPosition " << here << " is a space";
       }
   }
   else {
      cout << "ERROR: Cannot open file 'payroll'." << endl;
   }
}
```

## <a name="vclrftheclosefunctionforinputstreamsanchor15"></a> close

The `close` member function closes the disk file associated with an input file stream and frees the operating system file handle. The [`ifstream`](../standard-library/basic-ifstream-class.md) destructor closes the file for you, but you can use the `close` function if you need to open another file for the same stream object.

## See also

[Input Streams](../standard-library/input-streams.md)
