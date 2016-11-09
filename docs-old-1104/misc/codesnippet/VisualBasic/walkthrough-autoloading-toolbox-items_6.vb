<Serializable()> _
Friend Class Control2_ToolboxItem
    Inherits ToolboxItem

    Public Sub New(ByVal toolType As Type)
        MyBase.New(toolType)
    End Sub

    Public Overrides Sub Initialize(ByVal toolType As Type)

        If Not toolType.Equals(GetType(Control2)) Then
            Throw New ArgumentException( _
                String.Format(CultureInfo.CurrentCulture, _
                    "The {0} constructor argument must be of type {1}.", _
                    Me.GetType().FullName, GetType(Control2).FullName))
        End If

        MyBase.Initialize(toolType)
    End Sub
End Class