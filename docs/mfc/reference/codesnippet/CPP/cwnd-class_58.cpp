// Updating a control or window with large amounts of data may cause
// flicker. In such cases it may be better to turn off drawing

//m_list is a member of type CListCtrl
m_List.SetRedraw(FALSE); // turn drawing off regardless of list mode

//
// Update control
//

m_List.SetRedraw(TRUE); // turn drawing back on and update the window

// invalidate the entire control, force painting
m_List.Invalidate();
m_List.UpdateWindow();