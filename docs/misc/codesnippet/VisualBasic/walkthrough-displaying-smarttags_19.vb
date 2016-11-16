    Public ReadOnly Property DisplayText() As String Implements ISmartTagAction.DisplayText
        Get
            Return m_display
        End Get
    End Property
    Public ReadOnly Property Icon() As ImageSource Implements ISmartTagAction.Icon
        Get
            Return Nothing
        End Get
    End Property
    Public ReadOnly Property IsEnabled() As Boolean Implements ISmartTagAction.IsEnabled
        Get
            Return True
        End Get
    End Property

    Private privateSource As ISmartTagSource
    Public Property Source() As ISmartTagSource
        Get
            Return privateSource
        End Get
        Private Set(ByVal value As ISmartTagSource)
            privateSource = value
        End Set
    End Property

    Public ReadOnly Property ActionSets() As ReadOnlyCollection(Of SmartTagActionSet) Implements ISmartTagAction.ActionSets
        Get
            Return Nothing
        End Get
    End Property