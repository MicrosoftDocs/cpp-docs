---
description: "Learn more about: Windows Operations (C++/CLI)"
title: "Windows Operations (C++/CLI)"
ms.date: "11/04/2016"
helpviewer_keywords: ["Windows [C++], Windows-specific tasks", ".NET Framework [C++], Windows operations", "Visual C++, Windows operations", "Windows operations [C++]", ".NET Framework, shutdown", "shutdown", "termination", "applications [C++], shutdown", "Visual C++, user interactive state", "user interactive state", "Visual C++, reading from Windows Registry", "registry, reading", "performance counters", "performance counters, reading Windows performance counters", "performance monitoring, Windows performance counters", "performance, counters", "counters, reading Windows performance counters", "performance", "performance monitoring", "text, retrieving from Clipboard", "Clipboard, retrieving text", "current user names", "user names, retrieving", "UserName string", ".NET Framework, version", "Version property, retrieving .NET Framework version", "computer name, retrieving", "machine name, retrieving", "computer name", "Windows [C++], version", "Windows [C++], retrieving version using Visual C++", "time, elapsed since startup", "counters, elapsed time", "startup, time elapsed since", "tick counts", "startup", "text, storing in Clipboard", "Clipboard, storing text", "registry, writing to", "Visual C++, writing to Windows Registry"]
ms.assetid: b9a75cb4-0589-4d5b-92cb-5e8be42b4ac0
---
# Windows Operations (C++/CLI)

Demonstrates various Windows-specific tasks using the Windows SDK.

The following topics demonstrate various Windows operations performed with the Windows SDK using Visual C++.

## <a name="determine_shutdown"></a> Determine if Shutdown Has Started

The following code example demonstrates how to determine whether the application or the .NET Framework is currently terminating. This is useful for accessing static elements in the .NET Framework because, during shutdown, these constructs are finalized by the system and cannot be reliably used. By checking the <xref:System.Environment.HasShutdownStarted%2A> property first, you can avoid potential failures by not accessing these elements.

### Example

```cpp
// check_shutdown.cpp
// compile with: /clr
using namespace System;
int main()
{
   if (Environment::HasShutdownStarted)
      Console::WriteLine("Shutting down.");
   else
      Console::WriteLine("Not shutting down.");
   return 0;
}
```

## <a name="determine_user"></a> Determine the User Interactive State

The following code example demonstrates how to determine whether code is being run in a user-interactive context. If <xref:System.Environment.UserInteractive%2A> is false, then the code is running as a service process or from inside a Web application, in which case you should not attempt to interact with the user.

### Example

```cpp
// user_interactive.cpp
// compile with: /clr
using namespace System;

int main()
{
   if ( Environment::UserInteractive )
      Console::WriteLine("User interactive");
   else
      Console::WriteLine("Noninteractive");
   return 0;
}
```

## <a name="read_registry"></a> Read Data from the Windows Registry

The following code example uses the <xref:Microsoft.Win32.Registry.CurrentUser> key to read data from the Windows registry. First, the subkeys are enumerated using the <xref:Microsoft.Win32.RegistryKey.GetSubKeyNames%2A> method and then the Identities subkey is opened using the <xref:Microsoft.Win32.RegistryKey.OpenSubKey%2A> method. Like the root keys, each subkey is represented by the <xref:Microsoft.Win32.RegistryKey> class. Finally, the new <xref:Microsoft.Win32.RegistryKey> object is used to enumerate the key/value pairs.

### Example

```cpp
// registry_read.cpp
// compile with: /clr
using namespace System;
using namespace Microsoft::Win32;

int main( )
{
   array<String^>^ key = Registry::CurrentUser->GetSubKeyNames( );

   Console::WriteLine("Subkeys within CurrentUser root key:");
   for (int i=0; i<key->Length; i++)
   {
      Console::WriteLine("   {0}", key[i]);
   }

   Console::WriteLine("Opening subkey 'Identities'...");
   RegistryKey^ rk = nullptr;
   rk = Registry::CurrentUser->OpenSubKey("Identities");
   if (rk==nullptr)
   {
      Console::WriteLine("Registry key not found - aborting");
      return -1;
   }

   Console::WriteLine("Key/value pairs within 'Identities' key:");
   array<String^>^ name = rk->GetValueNames( );
   for (int i=0; i<name->Length; i++)
   {
      String^ value = rk->GetValue(name[i])->ToString();
      Console::WriteLine("   {0} = {1}", name[i], value);
   }

   return 0;
}
```

### Remarks

The <xref:Microsoft.Win32.Registry> class is merely a container for static instances of <xref:Microsoft.Win32.RegistryKey>. Each instance represents a root registry node. The instances are <xref:Microsoft.Win32.Registry.ClassesRoot>, <xref:Microsoft.Win32.Registry.CurrentConfig>, <xref:Microsoft.Win32.Registry.CurrentUser>, <xref:Microsoft.Win32.Registry.LocalMachine>, and <xref:Microsoft.Win32.Registry.Users>.

In addition to being static, the objects within the <xref:Microsoft.Win32.Registry> class are read-only. Furthermore, instances of the <xref:Microsoft.Win32.RegistryKey> class that are created to access the contents of the registry objects are read-only as well. For an example of how to override this behavior, see [How to: Write Data to the Windows Registry (C++/CLI)](#write_data).

There are two additional objects in the <xref:Microsoft.Win32.Registry> class: <xref:Microsoft.Win32.Registry.DynData> and <xref:Microsoft.Win32.Registry.PerformanceData>. Both are instances of the <xref:Microsoft.Win32.RegistryKey> class. The <xref:Microsoft.Win32.Registry.DynData> object contains dynamic registry information, which is only supported in Windows 98 and Windows Me. The <xref:Microsoft.Win32.Registry.PerformanceData> object can be used to access performance counter information for applications that use the Windows Performance Monitoring System. The <xref:Microsoft.Win32.Registry.PerformanceData> node represents information that is not actually stored in the registry and therefore cannot be viewed using Regedit.exe.

## <a name="read_performance"></a> Read Windows Performance Counters

Some applications and Windows subsystems expose performance data through the Windows performance system. These counters can be accessed using the <xref:System.Diagnostics.PerformanceCounterCategory> and <xref:System.Diagnostics.PerformanceCounter> classes, which reside in the <xref:System.Diagnostics?displayProperty=fullName> namespace.

The following code example uses these classes to retrieve and display a counter that is updated by Windows to indicate the percentage of time that the processor is busy.

> [!NOTE]
> This example requires administrative privileges to run on Windows Vista.

### Example

```cpp
// processor_timer.cpp
// compile with: /clr
#using <system.dll>

using namespace System;
using namespace System::Threading;
using namespace System::Diagnostics;
using namespace System::Timers;

ref struct TimerObject
{
public:
   static String^ m_instanceName;
   static PerformanceCounter^ m_theCounter;

public:
   static void OnTimer(Object^ source, ElapsedEventArgs^ e)
   {
      try
      {
         Console::WriteLine("CPU time used: {0,6} ",
          m_theCounter->NextValue( ).ToString("f"));
      }
      catch(Exception^ e)
      {
         if (dynamic_cast<InvalidOperationException^>(e))
         {
            Console::WriteLine("Instance '{0}' does not exist",
                  m_instanceName);
            return;
         }
         else
         {
            Console::WriteLine("Unknown exception... ('q' to quit)");
            return;
         }
      }
   }
};

int main()
{
   String^ objectName = "Processor";
   String^ counterName = "% Processor Time";
   String^ instanceName = "_Total";

   try
   {
      if ( !PerformanceCounterCategory::Exists(objectName) )
      {
         Console::WriteLine("Object {0} does not exist", objectName);
         return -1;
      }
   }
   catch (UnauthorizedAccessException ^ex)
   {
      Console::WriteLine("You are not authorized to access this information.");
      Console::Write("If you are using Windows Vista, run the application with ");
      Console::WriteLine("administrative privileges.");
      Console::WriteLine(ex->Message);
      return -1;
   }

   if ( !PerformanceCounterCategory::CounterExists(
          counterName, objectName) )
   {
      Console::WriteLine("Counter {0} does not exist", counterName);
      return -1;
   }

   TimerObject::m_instanceName = instanceName;
   TimerObject::m_theCounter = gcnew PerformanceCounter(
          objectName, counterName, instanceName);

   System::Timers::Timer^ aTimer = gcnew System::Timers::Timer();
   aTimer->Elapsed += gcnew ElapsedEventHandler(&TimerObject::OnTimer);
   aTimer->Interval = 1000;
   aTimer->Enabled = true;
   aTimer->AutoReset = true;

   Console::WriteLine("reporting CPU usage for the next 10 seconds");
   Thread::Sleep(10000);
   return 0;
}
```

## <a name="retrieve_text"></a> Retrieve Text from the Clipboard

The following code example uses the <xref:System.Windows.Forms.Clipboard.GetDataObject%2A> member function to return a pointer to the <xref:System.Windows.Forms.IDataObject> interface. This interface can then be queried for the format of the data and used to retrieve the actual data.

### Example

```cpp
// read_clipboard.cpp
// compile with: /clr
#using <system.dll>
#using <system.Drawing.dll>
#using <system.windows.forms.dll>

using namespace System;
using namespace System::Windows::Forms;

[STAThread] int main( )
{
   IDataObject^ data = Clipboard::GetDataObject( );

   if (data)
   {
      if (data->GetDataPresent(DataFormats::Text))
      {
         String^ text = static_cast<String^>
           (data->GetData(DataFormats::Text));
         Console::WriteLine(text);
      }
      else
         Console::WriteLine("Nontext data is in the Clipboard.");
   }
   else
   {
      Console::WriteLine("No data was found in the Clipboard.");
   }

   return 0;
}
```

## <a name="retrieve_current"></a> Retrieve the Current Username

The following code example demonstrates the retrieval of the current user name (the name of the user logged into Windows). The name is stored in the <xref:System.Environment.UserName%2A> string, which is defined in the <xref:System.Environment> namespace.

### Example

```cpp
// username.cpp
// compile with: /clr
using namespace System;

int main()
{
   Console::WriteLine("\nCurrent user: {0}", Environment::UserName);
   return 0;
}
```

## <a name="retrieve_dotnet"></a> Retrieve the .NET Framework Version

The following code example demonstrates how to determine the version of the currently installed .NET Framework with the <xref:System.Environment.Version%2A> property, which is a pointer to a <xref:System.Version> object that contains the version information.

### Example

```cpp
// dotnet_ver.cpp
// compile with: /clr
using namespace System;
int main()
{
   Version^ version = Environment::Version;
   if (version)
   {
      int build = version->Build;
      int major = version->Major;
      int minor = version->Minor;
      int revision = Environment::Version->Revision;
      Console::Write(".NET Framework version: ");
      Console::WriteLine("{0}.{1}.{2}.{3}",
            build, major, minor, revision);
   }
   return 0;
}
```

## <a name="retrieve_local"></a> Retrieve the Local Machine Name

The following code example demonstrates the retrieval of the local machine name (the name of the computer as it appears on a network). You can accomplish this by getting the <xref:System.Environment.MachineName%2A> string, which is defined in the <xref:System.Environment> namespace.

### Example

```cpp
// machine_name.cpp
// compile with: /clr
using namespace System;

int main()
{
   Console::WriteLine("\nMachineName: {0}", Environment::MachineName);
   return 0;
}
```

## <a name="retrieve_version"></a> Retrieve the Windows Version

The following code example demonstrates how to retrieve the platform and version information of the current operating system. This information is stored in the <xref:System.Environment.OSVersion%2A?displayProperty=fullName> property and consists of an enumeration that describes the version of Windows in broad terms and a <xref:System.Environment.Version%2A> object that contains the exact build of the operating system.

### Example

```cpp
// os_ver.cpp
// compile with: /clr
using namespace System;

int main()
{
   OperatingSystem^ osv = Environment::OSVersion;
   PlatformID id = osv->Platform;
   Console::Write("Operating system: ");

   if (id == PlatformID::Win32NT)
      Console::WriteLine("Win32NT");
   else if (id == PlatformID::Win32S)
      Console::WriteLine("Win32S");
   else if (id == PlatformID::Win32Windows)
      Console::WriteLine("Win32Windows");
   else
      Console::WriteLine("WinCE");

   Version^ version = osv->Version;
   if (version)
   {
      int build = version->Build;
      int major = version->Major;
      int minor = version->Minor;
      int revision = Environment::Version->Revision;
      Console::Write("OS Version: ");
      Console::WriteLine("{0}.{1}.{2}.{3}",
                   build, major, minor, revision);
   }

   return 0;
}
```

## <a name="retrieve_time"></a> Retrieve Time Elapsed Since Startup

The following code example demonstrates how to determine the tick count, or number of milliseconds that have elapsed since Windows was started. This value is stored in the <xref:System.Environment.TickCount%2A?displayProperty=fullName> member and, because it is a 32-bit value, resets to zero approximately every 24.9 days.

### Example

```cpp
// startup_time.cpp
// compile with: /clr
using namespace System;

int main( )
{
   Int32 tc = Environment::TickCount;
   Int32 seconds = tc / 1000;
   Int32 minutes = seconds / 60;
   float hours = static_cast<float>(minutes) / 60;
   float days = hours / 24;

   Console::WriteLine("Milliseconds since startup: {0}", tc);
   Console::WriteLine("Seconds since startup: {0}", seconds);
   Console::WriteLine("Minutes since startup: {0}", minutes);
   Console::WriteLine("Hours since startup: {0}", hours);
   Console::WriteLine("Days since startup: {0}", days);

   return 0;
}
```

## <a name="store_text"></a> Store Text in the Clipboard

The following code example uses the <xref:System.Windows.Forms.Clipboard> object defined in the <xref:System.Windows.Forms> namespace to store a string. This object provides two member functions: <xref:System.Windows.Forms.Clipboard.SetDataObject%2A> and <xref:System.Windows.Forms.Clipboard.GetDataObject%2A>. Data is stored in the Clipboard by sending any object derived from <xref:System.Object> to <xref:System.Windows.Forms.Clipboard.SetDataObject%2A>.

### Example

```cpp
// store_clipboard.cpp
// compile with: /clr
#using <System.dll>
#using <System.Drawing.dll>
#using <System.Windows.Forms.dll>

using namespace System;
using namespace System::Windows::Forms;

[STAThread] int main()
{
   String^ str = "This text is copied into the Clipboard.";

   // Use 'true' as the second argument if
   // the data is to remain in the clipboard
   // after the program terminates.
   Clipboard::SetDataObject(str, true);

   Console::WriteLine("Added text to the Clipboard.");

   return 0;
}
```

## <a name="write_data"></a> Write Data to the Windows Registry

The following code example uses the <xref:Microsoft.Win32.Registry.CurrentUser> key to create a writable instance of the <xref:Microsoft.Win32.RegistryKey> class corresponding to the **Software** key. The <xref:Microsoft.Win32.RegistryKey.CreateSubKey%2A> method is then used to create a new key and add to key/value pairs.

### Example

```cpp
// registry_write.cpp
// compile with: /clr
using namespace System;
using namespace Microsoft::Win32;

int main()
{
   // The second OpenSubKey argument indicates that
   // the subkey should be writable.
   RegistryKey^ rk;
   rk  = Registry::CurrentUser->OpenSubKey("Software", true);
   if (!rk)
   {
      Console::WriteLine("Failed to open CurrentUser/Software key");
      return -1;
   }

   RegistryKey^ nk = rk->CreateSubKey("NewRegKey");
   if (!nk)
   {
      Console::WriteLine("Failed to create 'NewRegKey'");
      return -1;
   }

   String^ newValue = "NewValue";
   try
   {
      nk->SetValue("NewKey", newValue);
      nk->SetValue("NewKey2", 44);
   }
   catch (Exception^)
   {
      Console::WriteLine("Failed to set new values in 'NewRegKey'");
      return -1;
   }

   Console::WriteLine("New key created.");
   Console::Write("Use REGEDIT.EXE to verify ");
   Console::WriteLine("'CURRENTUSER/Software/NewRegKey'\n");
   return 0;
}
```

### Remarks

You can use the .NET Framework to access the registry with the <xref:Microsoft.Win32.Registry> and <xref:Microsoft.Win32.RegistryKey> classes, which are both defined in the <xref:Microsoft.Win32> namespace. The **Registry** class is a container for static instances of the <xref:Microsoft.Win32.RegistryKey> class. Each instance represents a root registry node. The instances are <xref:Microsoft.Win32.Registry.ClassesRoot>, <xref:Microsoft.Win32.Registry.CurrentConfig>, <xref:Microsoft.Win32.Registry.CurrentUser>, <xref:Microsoft.Win32.Registry.LocalMachine>, and <xref:Microsoft.Win32.Registry.Users>.

## Related Sections

<xref:System.Environment>

## See also

[.NET Programming with C++/CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)
