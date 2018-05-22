'<Snippet5>
Imports System
Imports System.Windows
Imports System.Windows.Controls
Imports System.Windows.Media
Imports System.Windows.Shapes
'</Snippet5>

'<Snippet6>
Friend Class CommentBlock
    Inherits Canvas
    '</Snippet6>

    '<Snippet7>
    Private textGeometry As Geometry
    Private commentGrid As Grid
    Private Shared brush As Brush
    Private Shared solidPen As Pen
    Private Shared dashPen As Pen
    '</Snippet7>

    '<Snippet8>
    Public Sub New(ByVal textRightEdge As Double, ByVal viewRightEdge As Double, ByVal newTextGeometry As Geometry, ByVal author As String, ByVal body As String)
        If brush Is Nothing Then
            brush = New SolidColorBrush(Color.FromArgb(&H20, &H0, &HFF, &H0))
            brush.Freeze()
            Dim penBrush As Brush = New SolidColorBrush(Colors.Green)
            penBrush.Freeze()
            solidPen = New Pen(penBrush, 0.5)
            solidPen.Freeze()
            dashPen = New Pen(penBrush, 0.5)
            dashPen.DashStyle = DashStyles.Dash
            dashPen.Freeze()
        End If

        Me.textGeometry = newTextGeometry

        Dim tb1 As New TextBlock()
        tb1.Text = author
        Dim tb2 As New TextBlock()
        tb2.Text = body

        Const MarginWidth As Integer = 8
        Me.commentGrid = New Grid()
        Me.commentGrid.RowDefinitions.Add(New RowDefinition())
        Me.commentGrid.RowDefinitions.Add(New RowDefinition())
        Dim cEdge As New ColumnDefinition()
        cEdge.Width = New GridLength(MarginWidth)
        Dim cEdge2 As New ColumnDefinition()
        cEdge2.Width = New GridLength(MarginWidth)
        Me.commentGrid.ColumnDefinitions.Add(cEdge)
        Me.commentGrid.ColumnDefinitions.Add(New ColumnDefinition())
        Me.commentGrid.ColumnDefinitions.Add(cEdge2)

        Dim rect As New System.Windows.Shapes.Rectangle()
        rect.RadiusX = 6
        rect.RadiusY = 3
        rect.Fill = brush
        rect.Stroke = Brushes.Green

        Dim inf As New Size(Double.PositiveInfinity, Double.PositiveInfinity)
        tb1.Measure(inf)
        tb2.Measure(inf)
        Dim middleWidth As Double = Math.Max(tb1.DesiredSize.Width, tb2.DesiredSize.Width)
        Me.commentGrid.Width = middleWidth + 2 * MarginWidth
        Grid.SetColumn(rect, 0)
        Grid.SetRow(rect, 0)
        Grid.SetRowSpan(rect, 2)
        Grid.SetColumnSpan(rect, 3)
        Grid.SetRow(tb1, 0)
        Grid.SetColumn(tb1, 1)
        Grid.SetRow(tb2, 1)
        Grid.SetColumn(tb2, 1)
        Me.commentGrid.Children.Add(rect)
        Me.commentGrid.Children.Add(tb1)
        Me.commentGrid.Children.Add(tb2)

        Canvas.SetLeft(Me.commentGrid, Math.Max(viewRightEdge - Me.commentGrid.Width - 20.0, textRightEdge + 20.0))
        Canvas.SetTop(Me.commentGrid, textGeometry.GetRenderBounds(solidPen).Top)

        Me.Children.Add(Me.commentGrid)
    End Sub
    '</Snippet8>

    '<Snippet9>
    Protected Overrides Sub OnRender(ByVal dc As DrawingContext)
        MyBase.OnRender(dc)
        If Me.textGeometry IsNot Nothing Then
            dc.DrawGeometry(brush, solidPen, Me.textGeometry)
            Dim textBounds As Rect = Me.textGeometry.GetRenderBounds(solidPen)
            Dim p1 As New Point(textBounds.Right, textBounds.Bottom)
            Dim p2 As New Point(Math.Max(Canvas.GetLeft(Me.commentGrid) - 20.0, p1.X), p1.Y)
            Dim p3 As New Point(Math.Max(Canvas.GetLeft(Me.commentGrid), p1.X), (Canvas.GetTop(Me.commentGrid) + p1.Y) * 0.5)
            dc.DrawLine(dashPen, p1, p2)
            dc.DrawLine(dashPen, p2, p3)
        End If
    End Sub
    '</Snippet9>
End Class