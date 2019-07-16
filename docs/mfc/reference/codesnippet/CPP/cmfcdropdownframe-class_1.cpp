CFrameWnd *pTopFrame = AFXGetParentFrame(this);
if (pTopFrame == NULL)
{
   return FALSE;
}

CMFCDropDownFrame *pDropFrame = DYNAMIC_DOWNCAST(CMFCDropDownFrame, pTopFrame);
pDropFrame->SetAutoDestroy(true);