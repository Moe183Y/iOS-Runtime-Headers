/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@interface RURadioStreamTrackAVItem : RURadioAVItem <AVAssetResourceLoaderDelegate> {
    _MPRadioStreamMetadata *_adamIDMetadata;
    long long _albumStoreID;
    NSArray *_buyOffers;
    _MPRadioStreamMetadata *_effectiveMetadata;
    NSData *_jingleTimedMetadata;
    double _playStartDateTimeSinceReferenceDate;
    NSData *_previousAdamIDBlob;
    _MPRadioStreamMetadata *_radioStreamTrackMetadata;
    long long _storeID;
    _MPRadioStreamMetadata *_timedMetadata;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_allowsHighQualityMusicStreamingOnCellularDidChangeNotification:(id)arg1;
- (BOOL)_canUseStoreAdamIDForSubscriptionAdamID;
- (id)_createMetadataForRadioStreamTrack;
- (int)_expectedPlaybackMode;
- (void)_getCurrentTimedMetadata:(id*)arg1 pings:(id*)arg2 adamIDBlob:(id*)arg3 jingleTimedMetadata:(id*)arg4;
- (void)_handleStoreIDDidChange;
- (float)_maximumBitRateForNetworkType:(int)arg1;
- (void)_networkTypeDidChangeNotification:(id)arg1;
- (void)_reloadMetadataAndPostNotificationsIfNeeded:(BOOL)arg1;
- (void)_updateEffectiveMetadataAndPostNotifications:(BOOL)arg1;
- (id)album;
- (id)albumBuyButtonText;
- (int)albumBuyButtonType;
- (long long)albumStoreID;
- (id)artist;
- (id)artworkCatalogForPlaybackTime:(double)arg1;
- (id)buyOffers;
- (void)dealloc;
- (id)effectiveArtworkCollection;
- (id)initWithStreamTrack:(id)arg1;
- (BOOL)isAlwaysLive;
- (BOOL)isExplicitTrack;
- (BOOL)isLikedStateEnabled;
- (void)loadAssetAndPlayerItem;
- (id)mainTitle;
- (id)mpuReporting_jingleTimedMetadata;
- (BOOL)mpuReporting_shouldUseRelativeTimePositions;
- (id)mpuReporting_storeItemID;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (BOOL)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;
- (void)setPlayerItem:(id)arg1;
- (long long)storeItemInt64ID;
- (id)streamTrack;
- (BOOL)supportsRadioTrackActions;

@end