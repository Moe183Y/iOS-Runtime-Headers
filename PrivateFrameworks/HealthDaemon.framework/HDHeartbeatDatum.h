/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDHeartbeatDatum : NSObject {
    bool  _precededByGap;
    double  _timeSinceSequenceStart;
}

@property (nonatomic, readonly) bool precededByGap;
@property (nonatomic, readonly) double timeSinceSequenceStart;

+ (id)datumWithTimeSinceSequenceStart:(double)arg1 preceededByGap:(bool)arg2;

- (bool)precededByGap;
- (double)timeSinceSequenceStart;

@end