CSize size;
size = m_WorkAreaListCtrl.ApproximateViewRect();
size.cx += 100;
size.cy += 100;

CRect rcWorkAreas[4];
rcWorkAreas[0].SetRect(0, 0, (size.cx / 2) - 5, (size.cy / 2) - 5);
rcWorkAreas[1].SetRect((size.cx / 2) + 5, 0, size.cx, (size.cy / 2) - 5);
rcWorkAreas[2].SetRect(0, (size.cy / 2) + 5, (size.cx / 2) - 5, size.cy);
rcWorkAreas[3].SetRect((size.cx / 2) + 5, (size.cy / 2) + 5, size.cx, size.cy);

//set work areas
m_WorkAreaListCtrl.SetWorkAreas(4, rcWorkAreas);