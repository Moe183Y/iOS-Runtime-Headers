/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIEnhancementHistogram : NSObject {
    float hist;
}

+ (id)histogramFromData:(const float*)arg1;
+ (id)histogramFromDoubleData:(const double*)arg1;
+ (id)histogramFromFloatData:(const float*)arg1;

- (const float*)values;

@end