/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIStepper : UIControl <DebugHierarchyObject_Fallback> {
    bool  _autorepeat;
    bool  _continuous;
    NSMutableDictionary * _dividerImages;
    bool  _isRtoL;
    double  _maximumValue;
    UIImageView * _middleView;
    double  _minimumValue;
    UIButton * _minusButton;
    UIButton * _plusButton;
    long long  _repeatCount;
    NSTimer * _repeatTimer;
    double  _stepValue;
    double  _value;
    bool  _wraps;
}

@property (nonatomic) bool autorepeat;
@property (getter=isContinuous, nonatomic) bool continuous;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double maximumValue;
@property (nonatomic) double minimumValue;
@property (nonatomic) double stepValue;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIColor *tintColor;
@property (nonatomic) double value;
@property (nonatomic) bool wraps;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (void).cxx_destruct;
- (id)__scalarStatisticsForUserValueChangedEvent;
- (void)_commonStepperInit;
- (bool)_contentHuggingDefault_isUsuallyFixedHeight;
- (bool)_contentHuggingDefault_isUsuallyFixedWidth;
- (unsigned long long)_controlEventsForActionTriggered;
- (void)_emitValueChanged;
- (struct CGSize { double x1; double x2; })_intrinsicSizeWithinSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)_setDecrementImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)_setDividerImage:(id)arg1 forLeftSegmentState:(unsigned long long)arg2 rightSegmentState:(unsigned long long)arg3;
- (void)_setIncrementImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)_startTimer;
- (void)_stopTimer;
- (void)_updateButtonEnabled;
- (void)_updateCount:(id)arg1;
- (void)_updateDividerImageForButtonState;
- (void)_updateHighlightingAtPoint:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)_updateImages;

// Image: /Developer/Library/PrivateFrameworks/DTDDISupport.framework/libViewDebuggerSupport.dylib

+ (id)fallback_debugHierarchyPropertyDescriptions;
+ (id)fallback_debugHierarchyValueForPropertyWithName:(id)arg1 onObject:(id)arg2 outOptions:(id*)arg3 outError:(id*)arg4;

// Image: /Developer/usr/lib/libMainThreadChecker.dylib

- (bool)autorepeat;
- (id)backgroundImageForState:(unsigned long long)arg1;
- (bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)decrementImageForState:(unsigned long long)arg1;
- (id)dividerImageForLeftSegmentState:(unsigned long long)arg1 rightSegmentState:(unsigned long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)incrementImageForState:(unsigned long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isContinuous;
- (void)layoutSubviews;
- (double)maximumValue;
- (double)minimumValue;
- (void)setAutorepeat:(bool)arg1;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setContinuous:(bool)arg1;
- (void)setDecrementImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setDividerImage:(id)arg1 forLeftSegmentState:(unsigned long long)arg2 rightSegmentState:(unsigned long long)arg3;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setIncrementImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setMaximumValue:(double)arg1;
- (void)setMinimumValue:(double)arg1;
- (void)setStepValue:(double)arg1;
- (void)setTintColor:(id)arg1;
- (void)setValue:(double)arg1;
- (void)setWraps:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (double)stepValue;
- (double)value;
- (bool)wraps;

@end