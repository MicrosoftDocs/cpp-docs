---
description: "Learn more about: File Handling and I/O (C++/CLI)"
title: "File Handling and I-O (C++/CLI)"
ms.date: "11/04/2016"
helpviewer_keywords: [".NET Framework [C++], file handling", "files [C++], .NET Framework and", "I/O [C++], .NET Framework applications", ".NET Framework [C++], I/O", "files [C++], listing files", "directories [C++], listing files", "monitoring file system events", "FileSystemWatcher class, examples", "examples [C++], monitoring file system changes", "events [C++], monitoring", "file system events [C++]", "files [C++], binary", "binary files, reading in C++", "reading text files", "text files, reading", "files [C++], retrieving information about", "FileInfo class", "binary files, writing in C++", "files [C++], binary", "files [C++], text", "text files, writing in C++"]
ms.assetid: 3296fd59-a83a-40d4-bd4a-6096cc13101b
---
# File Handling and I/O (C++/CLI)

Demonstrates various file operations using the .NET Framework.

The following topics demonstrate the use of classes defined in the <xref:System.IO> namespace to perform various file operations.

## <a name="enumerate"></a> Enumerate Files in a Directory

The following code example demonstrates how to retrieve a list of the files in a directory. Additionally, the subdirectories are enumerated. The following code example uses the <xref:System.IO.Directory.GetFiles%2A><xref:System.IO.Directory.GetFiles%2A> and <xref:System.IO.Directory.GetDirectories%2A> methods to display the contents of the C:\Windows directory.

### Example

```cpp
// enum_files.cpp
// compile with: /clr
using namespace System;
using namespace System::IO;

int main()
{
   String^ folder = "C:\\";
   array<String^>^ dir = Directory::GetDirectories( folder );
   Console::WriteLine("--== Directories inside '{0}' ==--", folder);
   for (int i=0; i<dir->Length; i++)
      Console::WriteLine(dir[i]);

   array<String^>^ file = Directory::GetFiles( folder );
   Console::WriteLine("--== Files inside '{0}' ==--", folder);
   for (int i=0; i<file->Length; i++)
      Console::WriteLine(file[i]);

   return 0;
}
```

## <a name="monitor"></a> Monitor File System Changes

The following code example uses <xref:System.IO.FileSystemWatcher> to register for events corresponding to files being created, changed, deleted, or renamed. Instead of periodically polling a directory for changes to files, you can use the <xref:System.IO.FileSystemWatcher> class to fire events when a change is detected.

### Example

```cpp
// monitor_fs.cpp
// compile with: /clr
#using <system.dll>

using namespace System;
using namespace System::IO;

ref class FSEventHandler
{
public:
    void OnChanged (Object^ source, FileSystemEventArgs^ e)
    {
        Console::WriteLine("File: {0} {1}",
               e->FullPath, e->ChangeType);
    }
    void OnRenamed(Object^ source, RenamedEventArgs^ e)
    {
        Console::WriteLine("File: {0} renamed to {1}",
                e->OldFullPath, e->FullPath);
    }
};

int main()
{
   array<String^>^ args = Environment::GetCommandLineArgs();

   if(args->Length < 2)
   {
      Console::WriteLine("Usage: Watcher.exe <directory>");
      return -1;
   }

   FileSystemWatcher^ fsWatcher = gcnew FileSystemWatcher( );
   fsWatcher->Path = args[1];
   fsWatcher->NotifyFilter = static_cast<NotifyFilters>
              (NotifyFilters::FileName |
               NotifyFilters::Attributes |
               NotifyFilters::LastAccess |
               NotifyFilters::LastWrite |
               NotifyFilters::Security |
               NotifyFilters::Size );

    FSEventHandler^ handler = gcnew FSEventHandler();
    fsWatcher->Changed += gcnew FileSystemEventHandler(
            handler, &FSEventHandler::OnChanged);
    fsWatcher->Created += gcnew FileSystemEventHandler(
            handler, &FSEventHandler::OnChanged);
    fsWatcher->Deleted += gcnew FileSystemEventHandler(
            handler, &FSEventHandler::OnChanged);
    fsWatcher->Renamed += gcnew RenamedEventHandler(
            handler, &FSEventHandler::OnRenamed);

    fsWatcher->EnableRaisingEvents = true;

    Console::WriteLine("Press Enter to quit the sample.");
    Console::ReadLine( );
}
```

## <a name="read_binary"></a> Read a Binary File

The following code example shows how to read binary data from a file, by using two classes from the <xref:System.IO?displayProperty=fullName> namespace: <xref:System.IO.FileStream> and <xref:System.IO.BinaryReader>. <xref:System.IO.FileStream> represents the actual file. <xref:System.IO.BinaryReader> provides an interface to the stream that allows binary access.

The code example reads a file that's named data.bin and contains integers in binary format. For information about this kind of file, see [How to: Write a Binary File (C++/CLI)](#write_binary).

### Example

```cpp
// binary_read.cpp
// compile with: /clr
#using<system.dll>
using namespace System;
using namespace System::IO;

int main()
{
   String^ fileName = "data.bin";
   try
   {
      FileStream^ fs = gcnew FileStream(fileName, FileMode::Open);
      BinaryReader^ br = gcnew BinaryReader(fs);

      Console::WriteLine("contents of {0}:", fileName);
      while (br->BaseStream->Position < br->BaseStream->Length)
         Console::WriteLine(br->ReadInt32().ToString());

      fs->Close( );
   }
   catch (Exception^ e)
   {
      if (dynamic_cast<FileNotFoundException^>(e))
         Console::WriteLine("File '{0}' not found", fileName);
      else
         Console::WriteLine("Exception: ({0})", e);
      return -1;
   }
   return 0;
}
```

## <a name="read_text"></a> Read a Text File

The following code example demonstrates how to open and read a text file one line at a time, by using the <xref:System.IO.StreamReader> class that's defined in the <xref:System.IO?displayProperty=fullName> namespace. An instance of this class is used to open a text file and then the <xref:System.IO.StreamReader.ReadLine%2A?displayProperty=fullName> method is used to retrieve each line.

This code example reads a file that's named textfile.txt and contains text. For information about this kind of file, see [How to: Write a Text File (C++/CLI)](#write_text).

### Example

```cpp
// text_read.cpp
// compile with: /clr
#using<system.dll>
using namespace System;
using namespace System::IO;

int main()
{
   String^ fileName = "textfile.txt";
   try
   {
      Console::WriteLine("trying to open file {0}...", fileName);
      StreamReader^ din = File::OpenText(fileName);

      String^ str;
      int count = 0;
      while ((str = din->ReadLine()) != nullptr)
      {
         count++;
         Console::WriteLine("line {0}: {1}", count, str );
      }
   }
   catch (Exception^ e)
   {
      if (dynamic_cast<FileNotFoundException^>(e))
         Console::WriteLine("file '{0}' not found", fileName);
      else
         Console::WriteLine("problem reading file '{0}'", fileName);
   }

   return 0;
}
```

## <a name="retrieve"></a> Retrieve File Information

The following code example demonstrates the <xref:System.IO.FileInfo> class. When you have the name of a file, you can use this class to retrieve information about the file such as the file size, directory, full name, and date and time of creation and of the last modification.

This code retrieves file information for Notepad.exe.

### Example

```cpp
// file_info.cpp
// compile with: /clr
using namespace System;
using namespace System::IO;

int main()
{
   array<String^>^ args = Environment::GetCommandLineArgs();
   if (args->Length < 2)
   {
      Console::WriteLine("\nUSAGE : file_info <filename>\n\n");
      return -1;
   }

   FileInfo^ fi = gcnew FileInfo( args[1] );

   Console::WriteLine("file size: {0}", fi->Length );

   Console::Write("File creation date:  ");
   Console::Write(fi->CreationTime.Month.ToString());
   Console::Write(".{0}", fi->CreationTime.Day.ToString());
   Console::WriteLine(".{0}", fi->CreationTime.Year.ToString());

   Console::Write("Last access date:  ");
   Console::Write(fi->LastAccessTime.Month.ToString());
   Console::Write(".{0}", fi->LastAccessTime.Day.ToString());
   Console::WriteLine(".{0}", fi->LastAccessTime.Year.ToString());

   return 0;
}
```

## <a name="write_binary"></a> Write a Binary File

The following code example demonstrates writing binary data to a file. Two classes from the <xref:System.IO> namespace are used: <xref:System.IO.FileStream> and <xref:System.IO.BinaryWriter>. <xref:System.IO.FileStream> represents the actual file, while <xref:System.IO.BinaryWriter> provides an interface to the stream that allows binary access.

The following code example writes a file containing integers in binary format. This file can be read with the code in [How to: Read a Binary File (C++/CLI)](#read_binary).

### Example

```cpp
// binary_write.cpp
// compile with: /clr
#using<system.dll>
using namespace System;
using namespace System::IO;

int main()
{
   array<Int32>^ data = {1, 2, 3, 10000};

   FileStream^ fs = gcnew FileStream("data.bin", FileMode::Create);
   BinaryWriter^ w = gcnew BinaryWriter(fs);

   try
   {
      Console::WriteLine("writing data to file:");
      for (int i=0; i<data->Length; i++)
      {
         Console::WriteLine(data[i]);
         w->Write(data[i]);
      }
   }
   catch (Exception^)
   {
     Console::WriteLine("data could not be written");
     fs->Close();
     return -1;
   }

   fs->Close();
   return 0;
}
```

## <a name="write_text"></a> Write a Text File

The following code example demonstrates how to create a text file and write text to it using the <xref:System.IO.StreamWriter> class, which is defined in the <xref:System.IO> namespace. The <xref:System.IO.StreamWriter> constructor takes the name of the file to be created. If the file exists, it is overwritten (unless you pass True as the second <xref:System.IO.StringWriter> constructor argument).

The file is then filed using the <xref:System.IO.StreamWriter.Write%2A> and <xref:System.IO.TextWriter.WriteLine%2A> functions.

### Example

```cpp
// text_write.cpp
// compile with: /clr
using namespace System;
using namespace System::IO;

int main()
{
   String^ fileName = "textfile.txt";

   StreamWriter^ sw = gcnew StreamWriter(fileName);
   sw->WriteLine("A text file is born!");
   sw->Write("You can use WriteLine");
   sw->WriteLine("...or just Write");
   sw->WriteLine("and do {0} output too.", "formatted");
   sw->WriteLine("You can also send non-text objects:");
   sw->WriteLine(DateTime::Now);
   sw->Close();
   Console::WriteLine("a new file ('{0}') has been written", fileName);

   return 0;
}
```

## See also

[.NET Programming with C++/CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)<br/>
[File and Stream I/O](/dotnet/standard/io/index)<br/>
[System.IO namespace](/dotnet/api/system.io)
