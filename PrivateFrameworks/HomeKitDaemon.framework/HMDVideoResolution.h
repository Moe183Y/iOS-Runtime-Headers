/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDVideoResolution : HMDNumberParser <NSCopying, NSSecureCoding> {
    unsigned int  _resolutionType;
}

@property (nonatomic, readonly) unsigned int resolutionType;

+ (id)arrayWithResolutions:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)description:(id)arg1 indent:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithResolution:(unsigned int)arg1;
- (id)initWithTLVData:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)resolutionType;

@end