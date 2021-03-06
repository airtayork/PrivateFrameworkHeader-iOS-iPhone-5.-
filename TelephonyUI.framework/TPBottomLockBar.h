/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@class NSArray, TPLockKnobView, NSTimer, UIView, TPLockTextView, TPWell;

@interface TPBottomLockBar : TPBottomBar  {
    NSArray *_labels;
    int _currentLabelIndex;
    NSTimer *_cycleLabelTimer;
    id _delegate;
    id _representedObject;
    TPLockKnobView *_knobView;
    UIView *_trackArrow;
    TPLockTextView *_labelView;
    TPWell *_well;
    float _knobTrackInsetLeft;
    float _fontSize;
    float _deltaFromDefaultLabelWidth;
}

+ (float)defaultLabelFontSize;
+ (struct CGSize { float x1; float x2; })defaultSize;

- (void)setLabels:(id)arg1;
- (id)representedObject;
- (void)setRepresentedObject:(id)arg1;
- (id)labelView;
- (id)knob;
- (int)currentLabelIndex;
- (id)well;
- (void)setKnobWellWidth:(float)arg1;
- (void)setKnobWellWidthToDefault;
- (void)downInKnob;
- (void)slideBack:(BOOL)arg1;
- (float)knobTrackInsetLeft;
- (float)knobTrackInsetRight;
- (BOOL)allowsTouchTrackingBeyondVerticalThreshold;
- (void)upInKnob;
- (void)knobDragged:(float)arg1;
- (BOOL)usesBackgroundImage;
- (id)wellImageName;
- (float)defaultWellWidth;
- (void)_adjustKnobOrigin;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 knobImage:(id)arg2;
- (void)startCyclingLabels;
- (void)stopCyclingLabels;
- (BOOL)_shouldStopLabelAnimationForGrab;
- (void)_setLabel:(id)arg1;
- (float)_calcKnobYOffset;
- (void)_adjustLabelOrigin;
- (void)cycleToNextLabel;
- (void)cycleToLabelAtIndex:(int)arg1;
- (void)finishedCyclingLabelOut;
- (void)setDelegate:(id)arg1;
- (id)labels;
- (void)startAnimating;
- (void)stopAnimating;
- (BOOL)isAnimating;
- (void)setLabel:(id)arg1;
- (float)fontSize;
- (void)setFontSize:(float)arg1;
- (void)unlock;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (BOOL)_canDrawContent;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 knobColor:(int)arg2;
- (void)relock;
- (id)initForIncomingCallWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)freezeKnobInUnlockedPosition;

@end
