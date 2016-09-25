/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPImageFaceExpressionAnalyzer : VCPImageAnalyzer {
    NSArray * _faces;
}

- (void).cxx_destruct;
- (long)analyzePixelBuffer:(struct __CVBuffer { }*)arg1 withTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg2 flags:(unsigned int*)arg3 results:(id*)arg4 cancel:(id /* block */)arg5;
- (id)initWithFaceResults:(id)arg1;

@end