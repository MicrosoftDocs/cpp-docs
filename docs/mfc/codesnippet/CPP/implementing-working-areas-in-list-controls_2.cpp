// set insertion points for each work area
CPoint rgptWork[4];
for (int i = 0; i < 4; i++)
{
   rgptWork[i].x = rcWorkAreas[i].left + 10;
   rgptWork[i].y = rcWorkAreas[i].top + 10;
}
// now move all the items to the different quadrants
for (int i = 0; i < 20; i++)
{
   m_WorkAreaListCtrl.SetItemPosition(i, rgptWork[i % 4]);
}

// force the control to rearrange the shuffled items
m_WorkAreaListCtrl.Arrange(LVA_DEFAULT);