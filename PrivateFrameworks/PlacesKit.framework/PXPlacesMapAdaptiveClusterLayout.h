/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
 */

@interface PXPlacesMapAdaptiveClusterLayout : PXPlacesMapLayout {
    <PXPlacesMapLayoutResult> * _currentMapLayoutResult;
    NSMapTable * _geotaggableToLayoutItemTable;
    float  _horizontalClusteringDistancePixels;
    BOOL  _requestLayoutCancel;
    float  _verticalClusteringDistancePixels;
}

@property (nonatomic, retain) <PXPlacesMapLayoutResult> *currentMapLayoutResult;
@property (retain) NSMapTable *geotaggableToLayoutItemTable;
@property (nonatomic) float horizontalClusteringDistancePixels;
@property (nonatomic) float verticalClusteringDistancePixels;

- (void).cxx_destruct;
- (id)_clusterGeotaggables:(id)arg1 forViewPort:(id)arg2;
- (id)_clusterGeotaggables:(id)arg1 usingHorizontalClusteringDistance:(float)arg2 verticalClusteringDistance:(float)arg3 mapScale:(double)arg4 dataSource:(id)arg5 primaryLayoutGeotaggables:(id)arg6;
- (id)currentMapLayoutResult;
- (id)geotaggableToLayoutItemTable;
- (float)horizontalClusteringDistancePixels;
- (id)layoutForViewPort:(id)arg1 andDataSourceChange:(id)arg2;
- (id)layoutItemForGeotaggable:(id)arg1;
- (void)reset;
- (void)setCurrentMapLayoutResult:(id)arg1;
- (void)setGeotaggableToLayoutItemTable:(id)arg1;
- (void)setHorizontalClusteringDistancePixels:(float)arg1;
- (void)setVerticalClusteringDistancePixels:(float)arg1;
- (float)verticalClusteringDistancePixels;

@end