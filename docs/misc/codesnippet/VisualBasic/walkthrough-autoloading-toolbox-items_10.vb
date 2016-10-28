    ' Scan for toolbox items in the assembly and return the list of
    ' toolbox items.
    Private Function CreateItemList(ByVal asmbly As Assembly) As ArrayList

        Dim list As New ArrayList()
        For Each possibleItem As Type In asmbly.GetTypes()

            Dim item As ToolboxItem = CreateToolboxItem(possibleItem)
            If item IsNot Nothing Then
                list.Add(item)
            End If
        Next

        Return list
    End Function

    ' If the type represents a toolbox item, return an instance of the type
    ' otherwise, return Nothing.
    Private Function CreateToolboxItem(ByVal possibleItem As Type) As ToolboxItem

        ' A toolbox item must implement IComponent and must not be abstract.
        If Not GetType(IComponent).IsAssignableFrom(possibleItem) Or _
            possibleItem.IsAbstract Then

            Return Nothing
        End If

        ' A toolbox item must have a constructor that takes a parameter of
        ' type Type or a constructor that takes no parameters.
        If possibleItem.GetConstructor(New Type() {GetType(Type)}) Is Nothing And _
            possibleItem.GetConstructor(New Type() {}) Is Nothing Then

            Return Nothing
        End If

        Dim item As ToolboxItem = Nothing

        ' Check the custom attributes of the candidate type and attempt to
        ' create an instance of the toolbox item type.
        Dim attribs As AttributeCollection = _
            TypeDescriptor.GetAttributes(possibleItem)
        Dim tba As ToolboxItemAttribute = TryCast( _
            attribs(GetType(ToolboxItemAttribute)), ToolboxItemAttribute)
        If tba IsNot Nothing And Not tba.Equals(ToolboxItemAttribute.None) Then

            If Not tba.IsDefaultAttribute() Then

                ' This type represents a custom toolbox item implementation.
                Dim itemType As Type = tba.ToolboxItemType
                Dim ctor As ConstructorInfo = _
                    itemType.GetConstructor(New Type() {GetType(Type)})
                If ctor IsNot Nothing And itemType IsNot Nothing Then

                    item = CType(ctor.Invoke(New Object() {possibleItem}), ToolboxItem)
                Else

                    ctor = itemType.GetConstructor(New Type() {})
                    If ctor IsNot Nothing Then

                        item = CType(ctor.Invoke(New Object() {}), ToolboxItem)
                        item.Initialize(possibleItem)
                    End If
                End If
            Else

                ' This type represents a default toolbox item.
                item = New ToolboxItem(possibleItem)
            End If

            If item Is Nothing Then

                Throw New ApplicationException("Unable to create a ToolboxItem " & _
                    "object from " & possibleItem.FullName & ".")
            End If
        End If

        ' Update the display name of the toolbox item and add the item to
        ' the list.
        Dim displayName As DisplayNameAttribute = TryCast( _
            attribs(GetType(DisplayNameAttribute)), DisplayNameAttribute)
        If displayName IsNot Nothing And Not displayName.IsDefaultAttribute() Then

            item.DisplayName = displayName.DisplayName
        End If

        Return item
    End Function