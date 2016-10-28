        ' Use the toolbox service to get a list of all toolbox items in
        ' this assembly.
        ToolboxItemList = New ArrayList( _
            ToolboxService.GetToolboxItems(Me.GetType().Assembly, ""))
        If ToolboxItemList Is Nothing Then
            Throw New ApplicationException( _
                "Unable to generate a toolbox item listing for " & _
                Me.GetType().FullName)
        End If

        ' Update the display name of each toolbox item in the list.
        Dim thisAssembly As Assembly = Me.GetType().Assembly
        For Each item As ToolboxItem In ToolboxItemList

            Dim underlyingType As Type = thisAssembly.GetType(item.TypeName)
            Dim attribs As AttributeCollection = _
                TypeDescriptor.GetAttributes(underlyingType)
            Dim displayName As DisplayNameAttribute = _
                TryCast(attribs(GetType(DisplayNameAttribute)), DisplayNameAttribute)

            If displayName IsNot Nothing AndAlso Not displayName.IsDefaultAttribute() Then
                item.DisplayName = displayName.DisplayName
            End If
        Next