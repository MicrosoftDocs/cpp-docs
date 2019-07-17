int i, dx, cx, cy, nCount = m_myImageList.GetImageCount();

::ImageList_GetIconSize(m_myImageList, &cx, &cy);

// Draw the images of the image list on the DC.
for (dx = 0, i = 0; i < nCount; i++)
{
   m_myImageList.DrawIndirect(&dc, i, CPoint(dx, 0),
                              CSize(cx, cy), CPoint(0, 0));
   dx += cx;
}