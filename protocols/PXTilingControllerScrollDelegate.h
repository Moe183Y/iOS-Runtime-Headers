/* Generated by RuntimeBrowser.
 */

@protocol PXTilingControllerScrollDelegate <NSObject>

@optional

- (struct CGPoint { float x1; float x2; })tilingController:(PXTilingController *)arg1 initialVisibleOriginForLayout:(PXTilingLayout *)arg2;
- (PXTilingScrollInfo *)tilingController:(PXTilingController *)arg1 scrollInfoForLayout:(PXTilingLayout *)arg2;
- (struct CGPoint { float x1; float x2; })tilingController:(PXTilingController *)arg1 targetVisibleOriginForLayout:(PXTilingLayout *)arg2 proposedVisibleOrigin:(struct CGPoint { float x1; float x2; })arg3;

@end