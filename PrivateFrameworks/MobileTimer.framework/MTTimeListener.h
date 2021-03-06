/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface MTTimeListener : NSObject <MTAgentNotificationListener> {
    NSHashTable * _observers;
    NSObject<OS_dispatch_queue> * _queue;
    <NAScheduler> * _serializer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSHashTable *observers;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) <NAScheduler> *serializer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)handleNotification:(id)arg1;
- (bool)handlesNotification:(id)arg1;
- (id)init;
- (id)observers;
- (id)queue;
- (void)registerObserver:(id)arg1;
- (id)serializer;
- (void)setObservers:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setSerializer:(id)arg1;

@end
