/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORouteHypothesis : NSObject <NSSecureCoding> {
    NSDate *_aggressiveDepartureDate;
    double _aggressiveTravelTime;
    NSDate *_conservativeDepartureDate;
    double _conservativeTravelTime;
    unsigned int _currentTrafficDensity;
    NSError *_error;
    double _estimatedTravelTime;
    NSDate *_generationDate;
    unsigned int _historicTrafficDensity;
    GEOLocation *_lastLocation;
    GEORouteHypothesisIncident *_mostRelevantIncident;
    NSDate *_suggestedDepartureDate;
    BOOL _supportsLiveTraffic;
    int _transportType;
    int _travelState;
}

@property (nonatomic, readonly, retain) NSDate *aggressiveDepartureDate;
@property (nonatomic, readonly) double aggressiveTravelTime;
@property (nonatomic, readonly, retain) NSDate *conservativeDepartureDate;
@property (nonatomic, readonly) double conservativeTravelTime;
@property (nonatomic, readonly) unsigned int currentTrafficDensity;
@property (nonatomic, readonly, retain) NSError *error;
@property (nonatomic, readonly) double estimatedTravelTime;
@property (nonatomic, readonly, retain) NSDate *generationDate;
@property (nonatomic, readonly) unsigned int historicTrafficDensity;
@property (nonatomic, readonly, retain) GEOLocation *lastLocation;
@property (nonatomic, readonly, retain) GEORouteHypothesisIncident *mostRelevantIncident;
@property (nonatomic, readonly, retain) NSDate *suggestedDepartureDate;
@property (nonatomic, readonly) BOOL supportsLiveTraffic;
@property (nonatomic, readonly) int transportType;
@property (nonatomic, readonly) int travelState;

+ (id)_routeHypothesisErrorWithUnderlyingError:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (void)_clearHypothesisAndSetErrorWithCode:(int)arg1;
- (void)_setError:(id)arg1;
- (void)_updateCurrentTrafficDensity:(double)arg1 staticTravelTime:(double)arg2;
- (void)_updateDepartureAndArrivalSuggestions:(id)arg1 arrivalDate:(id)arg2 travelTimeWithTraffic:(double)arg3 conservativeTravelTime:(double)arg4 aggressiveTravelTime:(double)arg5 transportType:(int)arg6;
- (void)_updateHistoricTrafficDensity:(double)arg1 staticTravelTime:(double)arg2;
- (void)_updateTrafficIncidents:(id)arg1;
- (void)_updateTravelState:(id)arg1;
- (id)aggressiveDepartureDate;
- (double)aggressiveTravelTime;
- (id)conservativeDepartureDate;
- (double)conservativeTravelTime;
- (unsigned int)currentTrafficDensity;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (double)estimatedTravelTime;
- (id)generationDate;
- (unsigned int)historicTrafficDensity;
- (id)initWithCoder:(id)arg1;
- (id)lastLocation;
- (id)mostRelevantIncident;
- (void)setLastLocation:(id)arg1;
- (void)setSupportsLiveTraffic:(BOOL)arg1;
- (id)suggestedDepartureDate;
- (BOOL)supportsLiveTraffic;
- (int)transportType;
- (int)travelState;

@end