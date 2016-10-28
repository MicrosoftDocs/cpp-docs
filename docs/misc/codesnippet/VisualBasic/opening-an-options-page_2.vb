        ' GUID of Options>TextEditor>General 
        Dim targetGUID As String = "734A5DE2-DEBA-11d0-A6D0-00C04FB67F6A"
        Dim command = New CommandID(VSConstants.GUID_VSStandardCommandSet97, VSConstants.cmdidToolsOptions)
        Dim mcs = TryCast(GetService(GetType(IMenuCommandService)), MenuCommandService)