/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapMatchRequest : PBRequest <NSCopying> {
    struct { 
        unsigned int searchThreshold : 1; 
    } _has;
    NSMutableArray *_locations;
    double _searchThreshold;
    NSMutableArray *_waypoints;
}

@property (nonatomic) BOOL hasSearchThreshold;
@property (nonatomic, retain) NSMutableArray *locations;
@property (nonatomic) double searchThreshold;
@property (nonatomic, retain) NSMutableArray *waypoints;

- (void)addLocation:(id)arg1;
- (void)addWaypoint:(id)arg1;
- (void)clearLocations;
- (void)clearWaypoints;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasSearchThreshold;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)locationAtIndex:(unsigned int)arg1;
- (id)locations;
- (unsigned int)locationsCount;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (double)searchThreshold;
- (void)setHasSearchThreshold:(BOOL)arg1;
- (void)setLocations:(id)arg1;
- (void)setSearchThreshold:(double)arg1;
- (void)setWaypoints:(id)arg1;
- (id)waypointAtIndex:(unsigned int)arg1;
- (id)waypoints;
- (unsigned int)waypointsCount;
- (void)writeTo:(id)arg1;

@end