Imports System.ComponentModel

Public Class MyProjectPropertyPage
    '<Snippet2>
    Private _myConfigProp As String
    Private _isDirty As Boolean

    Public Property IsDirty As Boolean
        Get
            Return _isDirty
        End Get
        Set(ByVal value As Boolean)
            _isDirty = value
        End Set
    End Property

    <Category("My Category")> _
    <DisplayName("My Config Property")> _
    <Description("My Description")> _
    Public Property MyConfigProp() As String
        Get
            Return _myConfigProp
        End Get
        Set(ByVal value As String)
            _myConfigProp = value
            IsDirty = True
        End Set
    End Property
    '</Snippet2>
End Class
