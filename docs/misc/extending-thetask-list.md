---
title: "Extending theTask List"
ms.custom: ""
ms.date: "10/20/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "Task List"
ms.assetid: 9d84c9c4-7796-4fa1-86f8-22d077b79f7e
caps.latest.revision: 17
manager: "douge"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# Extending theTask List
The [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] **Task List** lets users add custom programming tasks, view task comments that link to lines in the code, and create and view custom categories for task messages.  
  
 Tasks are handled through a service named <xref:Microsoft.VisualStudio.Shell.Interop.SVsTaskList>, which implements <xref:Microsoft.VisualStudio.Shell.Interop.IVsTaskList> and <xref:Microsoft.VisualStudio.Shell.Interop.IVsTaskList2>. To use basic **Task List** functionality, you must create a task provider by implementing <xref:Microsoft.VisualStudio.Shell.Interop.IVsTaskProvider>.  
  
 Register your task provider with the <xref:Microsoft.VisualStudio.Shell.Interop.SVsTaskList> service by calling <xref:Microsoft.VisualStudio.Shell.Interop.IVsTaskList.RegisterTaskProvider*>, which returns a cookie value that must be used to uniquely identify the task provider in all subsequent transactions.  
  
 Every task provider implementation is responsible for maintaining an internal list of tasks. The task provider can call <xref:Microsoft.VisualStudio.Shell.Interop.IVsTaskList.RefreshTasks*> on **Task List** to update the displayed list of tasks. When this occurs:  
  
1.  The service calls back into the task provider by using the <xref:Microsoft.VisualStudio.Shell.Interop.IVsTaskProvider.EnumTaskItems*> method.  
  
2.  The task provider implementation of <xref:Microsoft.VisualStudio.Shell.Interop.IVsTaskProvider.EnumTaskItems*> returns an <xref:Microsoft.VisualStudio.Shell.Interop.IVsEnumTaskItems> object.  
  
3.  The <xref:Microsoft.VisualStudio.Shell.Interop.IVsEnumTaskItems> object iterates over a collection of <xref:Microsoft.VisualStudio.Shell.Interop.IVsTaskItem> objects.  
  
4.  The <xref:Microsoft.VisualStudio.Shell.Interop.SVsTaskList> service then updates the **Task List** display.  
  
 Additional functionality is available. The <xref:Microsoft.VisualStudio.Shell.Interop.IVsTaskProvider3> interface enables every task provider to supply its own custom set of columns.  
  
## Example  
 The following code example shows an implementation of a task provider.  
  
```vb#  
Class TaskProvider   
    Implements ITaskProvider   
    Implements IVsSolutionEvents   
    Public Sub New(ByVal provider As IServiceProvider)   
        _imageList.ImageSize = New Size(9, 16)   
        _imageList.Images.AddStrip(Resources.priority)   
        _imageList.TransparentColor = Color.FromArgb(0, 255, 0)   
        _serviceProvider = provider   
        Dim taskList As IVsTaskList = TryCast(_serviceProvider.GetService(GetType(SVsTaskList)), IVsTaskList)   
        Dim hr As Integer = taskList.RegisterTaskProvider(Me, _cookie)   
        Debug.Assert(hr = VSConstants.S_OK, "RegisterTaskProvider did not return S_OK.")   
        Debug.Assert(_cookie <> 0, "RegisterTaskProvider did not return a nonzero cookie.")   
  
        SetCommandHandlers()   
  
        ListenForProjectUnload()   
    End Sub   
  
    #Region "ITaskProvider Members"   
  
    Public Sub AddResult(ByVal result As IScanResult, ByVal projectFile As String)   
        Dim fullPath As String = result.FilePath   
        If Not Path.IsPathRooted(fullPath) Then   
            fullPath = Utilities.AbsolutePathFromRelative(fullPath, Path.GetDirectoryName(projectFile))   
        End If   
  
        If result.Scanned Then   
            For Each hit As IScanHit In result.Results   
                If hit.Warning IsNot Nothing AndAlso hit.Warning.Length > 0 Then   
                    ' See if we've warned about this term before;   
                    ' if so, don't warn again.   
                    If _termsWithDuplicateWarning.Find(Function(ByVal item As String) [String].Compare(item, hit.Term.Text, StringComparison.OrdinalIgnoreCase) = 0) Is Nothing Then   
                        _tasks.Add(New Task(hit.Term.Text, hit.Term.Severity, hit.Term.[Class], hit.Warning, "", "", _   
                        -1, -1, "", "", Me, _serviceProvider))   
                        _termsWithDuplicateWarning.Add(hit.Term.Text)   
                    End If   
                End If   
  
                _tasks.Add(New Task(hit.Term.Text, hit.Term.Severity, hit.Term.[Class], hit.Term.Comment, hit.Term.RecommendedTerm, fullPath, _   
                hit.Line, hit.Column, projectFile, hit.LineText, Me, _serviceProvider))   
            Next   
        Else   
            _tasks.Add(New Task("", 1, "", [String].Format(CultureInfo.CurrentUICulture, Resources.FileNotScannedError, fullPath), "", fullPath, _   
            -1, -1, projectFile, "", Me, _serviceProvider))   
        End If   
        Refresh()   
    End Sub   
  
    Public Sub Clear()   
        _tasks.Clear()   
        Refresh()   
    End Sub   
  
    Public Sub SetAsActiveProvider()   
        Dim taskList As IVsTaskList2 = TryCast(_serviceProvider.GetService(GetType(SVsTaskList)), IVsTaskList2)   
        Dim ourGuid As Guid = _providerGuid   
        Dim hr As Integer = taskList.SetActiveProvider(ourGuid)   
        Debug.Assert(hr = VSConstants.S_OK, "SetActiveProvider did not return S_OK.")   
    End Sub   
  
    Public Sub ShowTaskList()   
        Dim shell As IVsUIShell = TryCast(_serviceProvider.GetService(GetType(SVsUIShell)), IVsUIShell)   
        Dim dummy As Object = Nothing   
        Dim cmdSetGuid As Guid = VSConstants.GUID_VSStandardCommandSet97   
        Dim hr As Integer = shell.PostExecCommand(cmdSetGuid, CInt(VSConstants.VSStd97CmdID.TaskListWindow), 0, dummy)   
        Debug.Assert(hr = VSConstants.S_OK, "SetActiveProvider did not return S_OK.")   
    End Sub   
  
    ''' <summary>   
    ''' Returns an image index between 0 and 2 inclusive corresponding   
    ''' to the specified severity.   
    ''' </summary>   
    Public Shared Function GetImageIndexForSeverity(ByVal severity As Integer) As Integer   
        Return Math.Max(1, Math.Min(3, severity)) - 1   
    End Function   
  
    Public ReadOnly Property IsShowingIgnoredInstances() As Boolean   
        Get   
            Return _showingIgnoredInstances   
        End Get   
    End Property   
  
    #End Region   
  
    #Region "IVsTaskProvider Members"   
  
    Public Function EnumTaskItems(ByRef ppenum As IVsEnumTaskItems) As Integer   
        ppenum = New TaskEnumerator(_tasks, IsShowingIgnoredInstances)   
        Return VSConstants.S_OK   
    End Function   
  
    <DllImport("comctl32.dll")> _   
    Private Shared Function ImageList_Duplicate(ByVal original As IntPtr) As IntPtr   
    End Function   
  
    Public Function ImageList(ByRef phImageList As IntPtr) As Integer   
        phImageList = ImageList_Duplicate(_imageList.Handle)   
        Return VSConstants.S_OK   
    End Function   
  
    Public Function OnTaskListFinalRelease(ByVal pTaskList As IVsTaskList) As Integer   
        If (_cookie <> 0) AndAlso (pTaskList IsNot Nothing) Then   
            Dim hr As Integer = pTaskList.UnregisterTaskProvider(_cookie)   
            Debug.Assert(hr = VSConstants.S_OK, "UnregisterTaskProvider did not return S_OK.")   
        End If   
  
        Return VSConstants.S_OK   
    End Function   
  
    Public Function ReRegistrationKey(ByRef pbstrKey As String) As Integer   
        pbstrKey = ""   
        Return VSConstants.E_NOTIMPL   
    End Function   
  
    Public Function SubcategoryList(ByVal cbstr As UInteger, ByVal rgbstr As String(), ByRef pcActual As UInteger) As Integer   
        pcActual = 0   
        Return VSConstants.E_NOTIMPL   
    End Function   
End Class  
```  
  
```c#  
class TaskProvider : ITaskProvider, IVsSolutionEvents  
{  
    public TaskProvider(IServiceProvider provider)  
    {  
        _imageList.ImageSize = new Size(9, 16);  
        _imageList.Images.AddStrip(Resources.priority);  
        _imageList.TransparentColor = Color.FromArgb(0, 255, 0);  
        _serviceProvider = provider;  
        IVsTaskList taskList = _serviceProvider.GetService(typeof(SVsTaskList)) as IVsTaskList;  
        int hr = taskList.RegisterTaskProvider(this, out _cookie);  
        Debug.Assert(hr == VSConstants.S_OK, "RegisterTaskProvider did not return S_OK.");  
        Debug.Assert(_cookie != 0, "RegisterTaskProvider did not return a nonzero cookie.");  
  
        SetCommandHandlers();  
  
        ListenForProjectUnload();  
    }  
  
    #region ITaskProvider Members  
  
    public void AddResult(IScanResult result, string projectFile)  
    {  
        string fullPath = result.FilePath;  
        if (!Path.IsPathRooted(fullPath))  
        {  
            fullPath = Utilities.AbsolutePathFromRelative(fullPath, Path.GetDirectoryName(projectFile));  
        }  
  
        if (result.Scanned)  
        {  
            foreach (IScanHit hit in result.Results)  
            {  
                if (hit.Warning != null && hit.Warning.Length > 0)  
                {  
                    // See if we've warned about this term before;   
                    // if so, don't warn again.  
                    if (null == _termsWithDuplicateWarning.Find(  
                        delegate(string item)  
                        {  
                           return String.Compare(item, hit.Term.Text,   
                             StringComparison.OrdinalIgnoreCase) == 0;  
                        }))  
                    {  
                     _tasks.Add(new Task(hit.Term.Text,   
                      hit.Term.Severity, hit.Term.Class, hit.Warning,   
                      "", "", -1, -1, "", "", this, _serviceProvider));  
                        _termsWithDuplicateWarning.Add(hit.Term.Text);  
                    }  
                }  
  
                _tasks.Add(new Task(hit.Term.Text, hit.Term.Severity,  
 hit.Term.Class, hit.Term.Comment, hit.Term.RecommendedTerm, fullPath,  
 hit.Line, hit.Column, projectFile, hit.LineText, this,  
 _serviceProvider));  
            }  
        }  
        else  
        {  
            _tasks.Add(new Task("", 1, "", String.Format(CultureInfo.CurrentUICulture,   
Resources.FileNotScannedError, fullPath), "", fullPath, -1, -1,   
projectFile, "", this, _serviceProvider));  
        }  
        Refresh();  
    }  
  
    public void Clear()  
    {  
        _tasks.Clear();  
        Refresh();  
    }  
  
    public void SetAsActiveProvider()  
    {  
        IVsTaskList2 taskList = _serviceProvider.GetService(typeof(SVsTaskList)) as IVsTaskList2;  
        Guid ourGuid = _providerGuid;  
        int hr = taskList.SetActiveProvider(ref ourGuid);  
        Debug.Assert(hr == VSConstants.S_OK,   
          "SetActiveProvider did not return S_OK.");  
    }  
  
    public void ShowTaskList()  
    {  
        IVsUIShell shell = _serviceProvider.GetService(typeof(SVsUIShell)) as IVsUIShell;  
        object dummy = null;  
        Guid cmdSetGuid = VSConstants.GUID_VSStandardCommandSet97;  
        int hr = shell.PostExecCommand(ref cmdSetGuid, (int)VSConstants.VSStd97CmdID.TaskListWindow, 0, ref dummy);  
        Debug.Assert(hr == VSConstants.S_OK, "SetActiveProvider did not return S_OK.");  
    }  
  
    /// <summary>  
    /// Returns an image index between 0 and 2 inclusive corresponding   
    /// to the specified severity.  
    /// </summary>  
    public static int GetImageIndexForSeverity(int severity)  
    {  
        return Math.Max(1, Math.Min(3, severity)) - 1;  
    }  
  
    public bool IsShowingIgnoredInstances  
    {  
        get { return _showingIgnoredInstances; }  
    }  
  
    #endregion  
  
    #region IVsTaskProvider Members  
  
    public int EnumTaskItems(out IVsEnumTaskItems ppenum)  
    {  
        ppenum = new TaskEnumerator(_tasks, IsShowingIgnoredInstances);  
        return VSConstants.S_OK;  
    }  
  
    [DllImport("comctl32.dll")]  
    static extern IntPtr ImageList_Duplicate(IntPtr original);  
  
    public int ImageList(out IntPtr phImageList)  
    {  
        phImageList = ImageList_Duplicate(_imageList.Handle);  
        return VSConstants.S_OK;  
    }  
  
    public int OnTaskListFinalRelease(IVsTaskList pTaskList)  
    {  
        if ((_cookie != 0) && (null != pTaskList))  
        {  
            int hr = pTaskList.UnregisterTaskProvider(_cookie);  
            Debug.Assert(hr == VSConstants.S_OK, "UnregisterTaskProvider did not return S_OK.");  
        }  
  
        return VSConstants.S_OK;  
    }  
  
    public int ReRegistrationKey(out string pbstrKey)  
    {  
        pbstrKey = "";  
        return VSConstants.E_NOTIMPL;  
    }  
  
    public int SubcategoryList(uint cbstr, string[] rgbstr,   
       out uint pcActual)  
    {  
        pcActual = 0;  
        return VSConstants.E_NOTIMPL;  
    }  
}  
```  
  
## See Also  
 [Creating Custom Task List Views](../misc/creating-custom-task-list-views.md)   
 [How to: Create Custom Categories of Task Lists](../misc/how-to-create-custom-categories-of-task-lists.md)