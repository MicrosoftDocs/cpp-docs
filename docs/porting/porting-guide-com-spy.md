---
description: "Learn more about: Porting Guide: COM Spy"
title: "Porting Guide: COM Spy"
ms.date: "11/04/2016"
ms.assetid: 24aa0d52-4014-4acb-8052-f4e2e4bbc3bb
---
# Porting Guide: COM Spy

This topic is the second in a series of articles that demonstrates the process of upgrading older Visual Studio C++ projects to the latest version of Visual Studio. The example code in this topic was last compiled with Visual Studio 2005.

## COMSpy

COMSpy is a program that monitors and logs the activity of serviced components on a machine. Serviced components are COM+ components that run on a system and can be used by computers on the same network. They're managed by the Component Services functionality in the Windows Control Panel.

### Step 1. Converting the project file

The project file converts easily and produces a migration report. There are a few entries in the report that let us know about issues we might need to deal with. Here's one issue that is reported (note that throughout this topic, error messages are sometimes shortened for readability, for example to remove the full paths):

```Output
ComSpyAudit\ComSpyAudit.vcproj: MSB8012: $(TargetPath) ('C:\Users\UserName\Desktop\spy\spy\ComSpyAudit\.\XP32_DEBUG\ComSpyAudit.dll') does not match the Librarian's OutputFile property value '.\XP32_DEBUG\ComSpyAudit.dll' ('C:\Users\UserName\Desktop\spy\spy\XP32_DEBUG\ComSpyAudit.dll') in project configuration 'Unicode Debug|Win32'. This may cause your project to build incorrectly. To correct this, please make sure that $(TargetPath) property value matches the value specified in %(Lib.OutputFile).
```

One of the frequent problems in upgrading projects is that the **Linker OutputFile** setting in the project properties dialog box might need to be reviewed. For projects prior to Visual Studio 2010, the OutputFile is one setting that the automatic conversion wizard has trouble with, if it's set to a non-standard value. In this case, the paths for the output files were set to a non-standard folder, XP32_DEBUG. To find out more about this error, we consulted a [blog post](https://devblogs.microsoft.com/cppblog/visual-studio-2010-c-project-upgrade-guide/) related to the Visual Studio 2010 project upgrade, which was the upgrade that involved the change from vcbuild to msbuild, a significant change. According to this information, the default value for the **Output File** setting when you create a new project is `$(OutDir)$(TargetName)$(TargetExt)`, but this isn't set during conversion since it's not possible for converted projects to verify that everything is correct. However, let's try putting that in for OutputFile and see if it works.  It does, so we can move on. If there is no particular reason for using a nonstandard output folder, we recommend using the standard location. In this case, we chose to leave the output location as the non-standard during the porting and upgrading process; `$(OutDir)` resolves to the XP32_DEBUG folder in the **Debug** configuration and the ReleaseU folder for the **Release** configuration.

### Step 2. Getting it to build

Building the ported project, a number of errors and warnings occur.

`ComSpyCtl` doesn't compile though due to this compiler error:

```Output
atlcom.h(611): error C2664: 'HRESULT CComSpy::IPersistStreamInit_Save(LPSTREAM,BOOL,ATL::ATL_PROPMAP_ENTRY *)': cannot convert argument 3 from 'const ATL::ATL_PROPMAP_ENTRY *' to 'ATL::ATL_PROPMAP_ENTRY *'atlcom.h(611): note: Conversion loses qualifiersatlcom.h(608): note: while compiling class template member function 'HRESULT ATL::IPersistStreamInitImpl<CComSpy>::Save(LPSTREAM,BOOL)'\spy\spy\comspyctl\ccomspy.h(28): note: see reference to class template instantiation 'ATL::IPersistStreamInitImpl<CComSpy>' being compiled
```

The error references the `Save` method on the `IPersistStreamInitImpl` class in atlcom.h.

```cpp
STDMETHOD(Save)(_Inout_ LPSTREAM pStm, _In_ BOOL fClearDirty)
{
     T* pT = static_cast<T*>(this);
     ATLTRACE(atlTraceCOM, 2, _T("IPersistStreamInitImpl::Save\n"));
     return pT->IPersistStreamInit_Save(pStm, fClearDirty, T::GetPropertyMap());
}
```

The problem is that a conversion that an older version of the compiler accepted is no longer valid. In order to conform with the C++ standard, some code that previously was allowed is no longer allowed. In this case, it's not safe to pass a non-const pointer to a function that expects a const pointer.  The solution is to find the declaration of `IPersistStreamInit_Save` on the `CComSpy` class and add the const modifier to the third parameter.

```cpp
HRESULT CComSpy::IPersistStreamInit_Save(LPSTREAM pStm, BOOL /* fClearDirty */, const ATL_PROPMAP_ENTRY* pMap)
```

And a similar change to `IPersistStreamInit_Load`.

```cpp
HRESULT IPersistStreamInit_Load(LPSTREAM pStm, const ATL_PROPMAP_ENTRY* pMap);
```

The next error deals with registration.

```Output
error MSB3073: The command "regsvr32 /s /c "C:\Users\username\Desktop\spy\spy\ComSpyCtl\.\XP32_DEBUG\ComSpyCtl.lib"error MSB3073: echo regsvr32 exec. time > ".\XP32_DEBUG\regsvr32.trg"error MSB3073:error MSB3073: :VCEnd" exited with code 3.
```

We don't need this post-build registration command anymore. Instead, we simply remove the custom build command, and specify in the **Linker** settings to register the output.

### Dealing with warnings

The project produces the following linker warning.

```Output
warning LNK4075: ignoring '/EDITANDCONTINUE' due to '/SAFESEH' specification
```

The `/SAFESEH` compiler option is not useful in debug mode, which is when `/EDITANDCONTINUE` is useful, so the fix here is to disable `/SAFESEH` for **Debug** configurations only. To do this in the property dialog, we open the property dialog for the project that produces this error, and we first set the **Configuration** to **Debug** (actually **Debug Unicode**), and then in the **Linker Advanced** section, reset the **Image Has Safe Exception Handlers** property to **No** (`/SAFESEH:NO`).

The compiler warns us that `PROP_ENTRY_EX` is deprecated. It's not secure and the recommended substitute is `PROP_ENTRY_TYPE_EX`.

```cpp
BEGIN_PROPERTY_MAP(CComSpy)
     PROP_ENTRY_EX( "LogFile", DISPID_LOGFILE, CLSID_ComSpyPropPage, IID_IComSpy)
     PROP_ENTRY_EX( "ShowGridLines", DISPID_GRIDLINES, CLSID_ComSpyPropPage, IID_IComSpy)
     PROP_ENTRY_EX( "Audit", DISPID_AUDIT, CLSID_ComSpyPropPage, IID_IComSpy)
     PROP_ENTRY_EX( "ColWidth", DISPID_COLWIDTH, CLSID_ComSpyPropPage, IID_IComSpy)
     PROP_PAGE(CLSID_StockFontPage)
END_PROPERTY_MAP()
```

We change the code in ccomspy.h accordingly, adding COM types as appropriate.

```cpp
BEGIN_PROPERTY_MAP(CComSpy)
     PROP_ENTRY_TYPE_EX( "LogFile", DISPID_LOGFILE, CLSID_ComSpyPropPage, IID_IComSpy, VT_BSTR)
     PROP_ENTRY_TYPE_EX( "ShowGridLines", DISPID_GRIDLINES, CLSID_ComSpyPropPage, IID_IComSpy, VT_BOOL)
     PROP_ENTRY_TYPE_EX( "Audit", DISPID_AUDIT, CLSID_ComSpyPropPage, IID_IComSpy, VT_BOOL)
     PROP_ENTRY_TYPE_EX( "ColWidth", DISPID_COLWIDTH, CLSID_ComSpyPropPage, IID_IComSpy, VT_UINT)
     PROP_PAGE(CLSID_StockFontPage)
END_PROPERTY_MAP()
```

We're getting down to the last few warnings, which are also caused by more strict compiler conformance checks:

```Output
\spy\comspyctl\usersub.h(70): warning C4457: declaration of 'var' hides function parameter\spy\comspyctl\usersub.h(48): note: see declaration of 'var'\spy\comspyctl\usersub.h(94): warning C4018: '<': signed/unsigned mismatch  ComSpy.cpp\spy\comspyctl\comspy.cpp(186): warning C4457: declaration of 'bHandled' hides function parameter\spy\spy\comspyctl\comspy.cpp(177): note: see declaration of 'bHandled'
```

Warning C4018 comes from this code:

```cpp
for (i=0;i<lCount;i++)
    CoTaskMemFree(pKeys[i]);
```

The problem is that `i` is declared as `UINT` and `lCount` is declared as **`long`**, hence the signed/unsigned mismatch. It would be inconvenient to change the type of `lCount` to `UINT`, since it gets its value from `IMtsEventInfo::get_Count`, which uses the type **`long`**, and is not in user code. So we add a cast to the code. A C-style cast would do for a numerical cast such as this, but **`static_cast`** is the recommended style.

```cpp
for (i=0;i<static_cast<UINT>(lCount);i++)
    CoTaskMemFree(pKeys[i]);
```

Those warnings are cases where a variable was declared in a function that has a parameter with the same name, leading to potentially confusing code. We fixed that by changing the names of the local variables.

### Step 3. Testing and debugging

We tested the app first by running through the various menus and commands, and then closing the application. The only issue noted was a debug assertion upon closing down the app. The problem appeared in the destructor for `CWindowImpl`, a base class of the `CSpyCon` object, the application's main COM component. The assertion failure occurred in the following code in atlwin.h.

```cpp
virtual ~CWindowImplRoot()
{
     #ifdef _DEBUG
     if(m_hWnd != NULL)// should be cleared in WindowProc
     {
          ATLTRACE(atlTraceWindowing, 0, _T("ERROR - Object deleted before window was destroyed\n"));
          ATLASSERT(FALSE);
     }
     #endif //_DEBUG
}
```

The `hWnd` is normally set to zero in the `WindowProc` function, but that didn't happen because instead of the default `WindowProc`, a custom handler is called for the Windows message (WM_SYSCOMMAND) that closes the window. The custom handler was not setting the `hWnd` to zero. A look at similar code in MFC's `CWnd` class, shows that when a window is being destroyed, `OnNcDestroy` is called, and in MFC, documentation advises that when overriding `CWnd::OnNcDestroy`, the base `NcDestroy` should be called to make sure that the right clean-up operations occur, including separating the window handle from the window, or in other words, setting the `hWnd` to zero. This assert might have been triggered in the original version of the sample as well, since the same assertion code was present in the old version of atlwin.h.

To test the functionality of the app, we created a **Serviced Component** using the ATL project template, chose to add COM+ support in the ATL project wizard. If you haven't worked with serviced components before, it's not difficult to create one and get one registered and available on the system or network for other apps to use. The COM Spy app is designed to monitor the activity of serviced components as a diagnostic aid.

Then we added a class, chose ATL Object, and specified the object name as `Dog`. Then in dog.h and dog.cpp, we added the implementation.

```cpp
STDMETHODIMP CDog::Wag(LONG* lDuration)
{
    // TODO: Add your implementation code here
    *lDuration = 100l;
    return S_OK;
}
```

Next, we built and registered it (you'll need to run Visual Studio as Administrator), and activated it using the **Serviced Component** application in the Windows Control Panel. We created a C# Windows Forms project, dragged a button to the form from the toolbox, and double-clicked that to a click event handler. We added the following code to instantiate the `Dog` component.

```cpp
private void button1_Click(object sender, EventArgs e)
{
    ATLProjectLib.Dog dog1 = new ATLProjectLib.Dog();
    dog1.Wag();
}
```

This ran without problems, and with COM Spy up and running and configured to monitor the `Dog` component, lots of data appears showing the activity.

## See also

[Porting and Upgrading: Examples and Case Studies](../porting/porting-and-upgrading-examples-and-case-studies.md)<br/>
[Next Example: Spy++](../porting/porting-guide-spy-increment.md)<br/>
[Previous Example: MFC Scribble](../porting/porting-guide-mfc-scribble.md)
