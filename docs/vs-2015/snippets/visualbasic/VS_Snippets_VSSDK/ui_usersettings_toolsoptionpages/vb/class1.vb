'<snippet11> 
Imports System
Imports Microsoft.VisualStudio.Shell

Namespace Company.UIUserSettingsToolsOptionsPages
    Class HelloWorldOptions
        Inherits DialogPage
        Private m_helloWorld As Boolean = True
        Public Property HelloWorld() As Boolean
            Get
                Return m_helloWorld
            End Get
            Set(ByVal value As Boolean)
                m_helloWorld = value
            End Set
        End Property
    End Class
End Namespace
'</snippet11> 
