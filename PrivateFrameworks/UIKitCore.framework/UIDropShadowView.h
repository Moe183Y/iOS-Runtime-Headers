/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIDropShadowView : UIView {
    UIView * _backgroundImage;
    UIView * _contentView;
    double  _cornerRadius;
    bool  _masksTopCornersOnly;
    NSDictionary * _preservedLayerValues;
}

@property (nonatomic) UIView *contentView;
@property (nonatomic) double cornerRadius;
@property (nonatomic) bool masksTopCornersOnly;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (void).cxx_destruct;

// Image: /Developer/usr/lib/libMainThreadChecker.dylib

- (id)contentView;
- (double)cornerRadius;
- (void)didFinishRotation;
- (id)init;
- (bool)masksTopCornersOnly;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContentView:(id)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setMasksTopCornersOnly:(bool)arg1;
- (void)updateShadowPath;
- (void)willBeginRotationWithOriginalBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 newBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;

@end
