// Add extra initialization.

// Modify the size of the slider control's thumb.
// First, set the TBS_FIXEDLENGTH style.
m_sliderCtrl.ModifyStyle(0, TBS_FIXEDLENGTH);
thumbLength = m_sliderCtrl.GetThumbLength();
m_sliderCtrl.SetThumbLength(thumbLength * 2);

// End extra initialization.